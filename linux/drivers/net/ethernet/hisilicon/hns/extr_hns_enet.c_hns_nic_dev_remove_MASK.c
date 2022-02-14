
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct net_device {scalar_t__ reg_state; scalar_t__ phydev; } ;
struct TYPE_2__ {int * notifier_call; } ;
struct hns_nic_priv {int fwnode; int service_task; int state; TYPE_1__ notifier_block; int * ae_handle; int * ring_data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct hns_nic_priv*) ;
 struct hns_nic_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__) ;
 struct net_device* FUNC_9 (struct platform_device*) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct net_device*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_2)
{
 struct net_device *VAR_3 = FUNC_9(VAR_2);
 struct hns_nic_priv *VAR_4 = FUNC_6(VAR_3);

 if (VAR_3->reg_state != VAR_0)
  FUNC_12(VAR_3);

 if (VAR_4->ring_data)
  FUNC_5(VAR_4);
 VAR_4->ring_data = ((void*)0);

 if (VAR_3->phydev)
  FUNC_8(VAR_3->phydev);

 if (!FUNC_0(VAR_4->ae_handle))
  FUNC_3(VAR_4->ae_handle);
 VAR_4->ae_handle = ((void*)0);
 if (VAR_4->notifier_block.notifier_call)
  FUNC_4(&VAR_4->notifier_block);
 VAR_4->notifier_block.notifier_call = ((void*)0);

 FUNC_10(VAR_1, &VAR_4->state);
 (void)FUNC_1(&VAR_4->service_task);


 FUNC_7(FUNC_11(VAR_4->fwnode));

 FUNC_2(VAR_3);
 return 0;
}
