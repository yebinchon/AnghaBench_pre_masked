
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* unregister_dev ) (struct mwifiex_adapter*) ;} ;
struct mwifiex_adapter {scalar_t__ irq_wakeup; TYPE_1__ if_ops; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_2 (struct mwifiex_adapter*) ;
 int FUNC_3 (struct mwifiex_adapter*) ;
 int FUNC_4 (struct mwifiex_adapter*) ;

int FUNC_5(struct mwifiex_adapter *VAR_1)
{
 if (!VAR_1)
  return 0;

 FUNC_3(VAR_1);

 if (VAR_1->irq_wakeup >= 0)
  FUNC_0(VAR_1->dev, 0);


 FUNC_1(VAR_1, VAR_0,
      "info: unregister device\n");
 if (VAR_1->if_ops.unregister_dev)
  VAR_1->if_ops.unregister_dev(VAR_1);

 FUNC_1(VAR_1, VAR_0,
      "info: free adapter\n");
 FUNC_2(VAR_1);

 return 0;
}
