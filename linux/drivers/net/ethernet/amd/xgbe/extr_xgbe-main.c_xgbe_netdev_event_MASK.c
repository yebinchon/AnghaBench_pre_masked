
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xgbe_prv_data {int dummy; } ;
struct notifier_block {int dummy; } ;
struct net_device {scalar_t__ netdev_ops; } ;



 int VAR_0 ;
 struct net_device* FUNC_0 (void*) ;
 struct xgbe_prv_data* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct xgbe_prv_data*) ;
 scalar_t__ FUNC_3 () ;

__attribute__((used)) static int FUNC_4(struct notifier_block *VAR_1, unsigned long VAR_2,
        void *VAR_3)
{
 struct net_device *VAR_4 = FUNC_0(VAR_3);
 struct xgbe_prv_data *VAR_5 = FUNC_1(VAR_4);

 if (VAR_4->netdev_ops != FUNC_3())
  goto out;

 switch (VAR_2) {
 case 128:
  FUNC_2(VAR_5);
  break;

 default:
  break;
 }

out:
 return VAR_0;
}
