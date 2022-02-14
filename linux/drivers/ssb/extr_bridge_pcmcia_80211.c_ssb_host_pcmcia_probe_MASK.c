
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ssb_bus {int dummy; } ;
struct pcmcia_device {int dev; struct ssb_bus* priv; TYPE_1__** resource; int irq; int config_flags; } ;
struct TYPE_3__ {int flags; scalar_t__ start; int end; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*,int,int) ;
 int FUNC_1 (struct ssb_bus*) ;
 struct ssb_bus* FUNC_2 (int,int ) ;
 int FUNC_3 (struct pcmcia_device*) ;
 int FUNC_4 (struct pcmcia_device*) ;
 int FUNC_5 (struct pcmcia_device*,TYPE_1__*,int ) ;
 int FUNC_6 (struct pcmcia_device*,TYPE_1__*,int) ;
 int FUNC_7 (struct ssb_bus*,struct pcmcia_device*,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct pcmcia_device *VAR_8)
{
 struct ssb_bus *VAR_9;
 int VAR_10 = -VAR_2;
 int VAR_11 = 0;

 VAR_9 = FUNC_2(sizeof(*VAR_9), VAR_3);
 if (!VAR_9)
  goto out_error;

 VAR_10 = -VAR_1;

 VAR_8->config_flags |= VAR_0;

 VAR_8->resource[2]->flags |= VAR_6 | VAR_5 |
    VAR_7;
 VAR_8->resource[2]->start = 0;
 VAR_8->resource[2]->end = VAR_4;
 VAR_11 = FUNC_6(VAR_8, VAR_8->resource[2], 250);
 if (VAR_11 != 0)
  goto err_kfree_ssb;

 VAR_11 = FUNC_5(VAR_8, VAR_8->resource[2], 0);
 if (VAR_11 != 0)
  goto err_disable;

 if (!VAR_8->irq)
  goto err_disable;

 VAR_11 = FUNC_4(VAR_8);
 if (VAR_11 != 0)
  goto err_disable;

 VAR_10 = FUNC_7(VAR_9, VAR_8, VAR_8->resource[2]->start);
 if (VAR_10)
  goto err_disable;
 VAR_8->priv = VAR_9;

 return 0;

err_disable:
 FUNC_3(VAR_8);
err_kfree_ssb:
 FUNC_1(VAR_9);
out_error:
 FUNC_0(&VAR_8->dev, "Initialization failed (%d, %d)\n", VAR_11, VAR_10);
 return VAR_10;
}
