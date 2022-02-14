
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct serial_info {int multi; scalar_t__ ndev; TYPE_2__* quirk; int prodid; int manfid; } ;
struct pcmcia_device {scalar_t__ func_id; int dev; TYPE_1__* socket; int card_id; int manf_id; scalar_t__ has_func_id; struct serial_info* priv; } ;
struct TYPE_6__ {int multi; scalar_t__ (* post ) (struct pcmcia_device*) ;int prodid; int manfid; } ;
struct TYPE_5__ {int functions; scalar_t__ pcmcia_pfc; } ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*,int ,int ,scalar_t__,int,TYPE_2__*) ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 scalar_t__ FUNC_5 (struct pcmcia_device*,int ,struct serial_info*) ;
 int FUNC_6 (struct pcmcia_device*) ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 int FUNC_7 (struct pcmcia_device*) ;
 int FUNC_8 (struct pcmcia_device*) ;
 scalar_t__ FUNC_9 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_10(struct pcmcia_device *VAR_5)
{
 struct serial_info *VAR_6 = VAR_5->priv;
 int VAR_7;

 FUNC_1(&VAR_5->dev, "serial_config\n");


 VAR_6->multi = (VAR_5->socket->functions > 1);


 VAR_6->manfid = VAR_5->manf_id;
 VAR_6->prodid = VAR_5->card_id;

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_3); VAR_7++)
  if ((VAR_3[VAR_7].manfid == ~0 ||
       VAR_3[VAR_7].manfid == VAR_6->manfid) &&
      (VAR_3[VAR_7].prodid == ~0 ||
       VAR_3[VAR_7].prodid == VAR_6->prodid)) {
   VAR_6->quirk = &VAR_3[VAR_7];
   break;
  }





 if ((VAR_6->multi == 0) &&
     (VAR_5->has_func_id) &&
     (VAR_5->socket->pcmcia_pfc == 0) &&
     ((VAR_5->func_id == VAR_0) ||
      (VAR_5->func_id == VAR_1))) {
  if (FUNC_5(VAR_5, VAR_4, VAR_6))
   goto failed;
 }




 if (VAR_6->quirk && VAR_6->quirk->multi != -1)
  VAR_6->multi = VAR_6->quirk->multi;

 FUNC_2(&VAR_5->dev,
  "trying to set up [0x%04x:0x%04x] (pfc: %d, multi: %d, quirk: %p)\n",
  VAR_5->manf_id, VAR_5->card_id,
  VAR_5->socket->pcmcia_pfc, VAR_6->multi, VAR_6->quirk);
 if (VAR_5->socket->pcmcia_pfc)
  VAR_7 = FUNC_6(VAR_5);
 else if (VAR_6->multi > 1)
  VAR_7 = FUNC_4(VAR_5);
 else
  VAR_7 = FUNC_8(VAR_5);

 if (VAR_7 || VAR_6->ndev == 0)
  goto failed;





 if (VAR_6->quirk && VAR_6->quirk->post)
  if (VAR_6->quirk->post(VAR_5))
   goto failed;

 return 0;

failed:
 FUNC_3(&VAR_5->dev, "failed to initialize\n");
 FUNC_7(VAR_5);
 return -VAR_2;
}
