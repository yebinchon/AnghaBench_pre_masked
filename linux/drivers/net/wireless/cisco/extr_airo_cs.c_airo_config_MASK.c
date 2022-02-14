
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device {int config_flags; scalar_t__ priv; int dev; TYPE_1__** resource; int irq; } ;
struct local_info {int eth_dev; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ,int ,int,int *) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*,int ,int *) ;

__attribute__((used)) static int FUNC_5(struct pcmcia_device *VAR_6)
{
 int VAR_7;

 FUNC_1(&VAR_6->dev, "airo_config\n");

 VAR_6->config_flags |= VAR_3 | VAR_2 |
  VAR_0 | VAR_1;

 VAR_7 = FUNC_4(VAR_6, VAR_5, ((void*)0));
 if (VAR_7)
  goto failed;

 if (!VAR_6->irq)
  goto failed;

 VAR_7 = FUNC_3(VAR_6);
 if (VAR_7)
  goto failed;
 ((struct local_info *)VAR_6->priv)->eth_dev =
  FUNC_2(VAR_6->irq,
          VAR_6->resource[0]->start, 1, &VAR_6->dev);
 if (!((struct local_info *)VAR_6->priv)->eth_dev)
  goto failed;

 return 0;

 failed:
 FUNC_0(VAR_6);
 return -VAR_4;
}
