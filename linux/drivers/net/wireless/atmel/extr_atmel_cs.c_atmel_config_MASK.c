
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pcmcia_device_id {int driver_info; } ;
struct pcmcia_device {int config_flags; struct local_info* priv; int dev; TYPE_1__** resource; int irq; } ;
struct local_info {int eth_dev; } ;
struct TYPE_2__ {int start; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct pcmcia_device*) ;
 int VAR_7 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct pcmcia_device_id* FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int ,int *,int ,struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*) ;
 scalar_t__ FUNC_6 (struct pcmcia_device*,int ,int *) ;

__attribute__((used)) static int FUNC_7(struct pcmcia_device *VAR_8)
{
 struct local_info *VAR_9;
 int VAR_10;
 const struct pcmcia_device_id *VAR_11;

 VAR_9 = VAR_8->priv;
 VAR_11 = FUNC_3(&VAR_8->dev);

 FUNC_1(&VAR_8->dev, "atmel_config\n");

 VAR_8->config_flags |= VAR_4 | VAR_3 |
  VAR_1 | VAR_2;

 if (FUNC_6(VAR_8, VAR_6, ((void*)0)))
  goto failed;

 if (!VAR_8->irq) {
  FUNC_2(&VAR_8->dev, "atmel: cannot assign IRQ: check that CONFIG_ISA is set in kernel config.");
  goto failed;
 }

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10)
  goto failed;

 ((struct local_info *)VAR_8->priv)->eth_dev =
  FUNC_4(VAR_8->irq,
    VAR_8->resource[0]->start,
    VAR_11 ? VAR_11->driver_info : VAR_0,
    &VAR_8->dev,
    VAR_7,
    VAR_8);
 if (!((struct local_info *)VAR_8->priv)->eth_dev)
   goto failed;


 return 0;

 failed:
 FUNC_0(VAR_8);
 return -VAR_5;
}
