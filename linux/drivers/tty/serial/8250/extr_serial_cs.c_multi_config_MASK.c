
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serial_info {int multi; scalar_t__ manfid; scalar_t__ prodid; int c950ctrl; TYPE_1__* quirk; } ;
struct pcmcia_device {int config_index; int irq; TYPE_2__** resource; int dev; struct serial_info* priv; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int (* wakeup ) (struct pcmcia_device*) ;int (* config ) (struct pcmcia_device*) ;} ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pcmcia_device*) ;
 scalar_t__ FUNC_2 (struct pcmcia_device*,int ,int*) ;
 int FUNC_3 (struct pcmcia_device*,struct serial_info*,int,int ) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_6(struct pcmcia_device *VAR_6)
{
 struct serial_info *VAR_7 = VAR_6->priv;
 int VAR_8, VAR_9 = 0;


 if (!FUNC_2(VAR_6, VAR_4, &VAR_7->multi))
  VAR_9 = VAR_6->resource[0]->start + 8;
 else {

  VAR_7->multi = 2;
  if (FUNC_2(VAR_6, VAR_5,
           &VAR_9)) {
   FUNC_0(&VAR_6->dev,
     "no usable port range found, giving up\n");
   return -VAR_0;
  }
 }

 if (!VAR_6->irq)
  FUNC_0(&VAR_6->dev, "no usable IRQ found, continuing...\n");




 if (VAR_7->quirk && VAR_7->quirk->config)
  VAR_7->quirk->config(VAR_6);

 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 != 0)
  return -VAR_0;





 if (VAR_7->manfid == VAR_1 || (VAR_7->manfid == VAR_2 &&
    VAR_7->prodid == VAR_3)) {
  int VAR_10;

  if (VAR_6->config_index == 1 ||
      VAR_6->config_index == 3) {
   VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_9,
     VAR_6->irq);
   VAR_9 = VAR_6->resource[0]->start;
  } else {
   VAR_10 = FUNC_3(VAR_6, VAR_7, VAR_6->resource[0]->start,
     VAR_6->irq);
  }
  VAR_7->c950ctrl = VAR_9;





  if (VAR_7->quirk && VAR_7->quirk->wakeup)
   VAR_7->quirk->wakeup(VAR_6);

  return 0;
 }

 FUNC_3(VAR_6, VAR_7, VAR_6->resource[0]->start, VAR_6->irq);
 for (VAR_8 = 0; VAR_8 < VAR_7->multi - 1; VAR_8++)
  FUNC_3(VAR_6, VAR_7, VAR_9 + (8 * VAR_8),
    VAR_6->irq);
 return 0;
}
