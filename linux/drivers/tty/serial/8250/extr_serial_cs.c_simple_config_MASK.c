
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct serial_info {scalar_t__ manfid; TYPE_1__* quirk; scalar_t__ multi; } ;
struct pcmcia_device {int config_index; int irq; TYPE_2__** resource; int dev; int config_flags; struct serial_info* priv; } ;
struct TYPE_4__ {int start; } ;
struct TYPE_3__ {int (* config ) (struct pcmcia_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pcmcia_device*) ;
 int FUNC_2 (struct pcmcia_device*,int ,int*) ;
 int FUNC_3 (struct pcmcia_device*,struct serial_info*,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct pcmcia_device*) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_5)
{
 struct serial_info *VAR_6 = VAR_5->priv;
 int VAR_7 = -VAR_1, VAR_8;





 VAR_5->config_flags |= VAR_0;
 for (VAR_8 = 0; VAR_8 < 4; VAR_8++)
  if (!FUNC_2(VAR_5, VAR_3, &VAR_8))
   goto found_port;






 if (!FUNC_2(VAR_5, VAR_4, ((void*)0)))
  goto found_port;

 FUNC_0(&VAR_5->dev, "no usable port range found, giving up\n");
 return -1;

found_port:
 if (VAR_6->multi && (VAR_6->manfid == VAR_2))
  VAR_5->config_index &= ~(0x08);




 if (VAR_6->quirk && VAR_6->quirk->config)
  VAR_6->quirk->config(VAR_5);

 VAR_7 = FUNC_1(VAR_5);
 if (VAR_7 != 0)
  return -1;
 return FUNC_3(VAR_5, VAR_6, VAR_5->resource[0]->start, VAR_5->irq);
}
