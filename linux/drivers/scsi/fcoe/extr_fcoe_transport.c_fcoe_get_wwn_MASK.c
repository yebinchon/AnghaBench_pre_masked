
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct net_device_ops {int (* ndo_fcoe_get_wwn ) (struct net_device*,int *,int) ;} ;
struct net_device {struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,int *,int) ;

int FUNC_1(struct net_device *VAR_1, u64 *VAR_2, int VAR_3)
{
 const struct net_device_ops *VAR_4 = VAR_1->netdev_ops;

 if (VAR_4->ndo_fcoe_get_wwn)
  return VAR_4->ndo_fcoe_get_wwn(VAR_1, VAR_2, VAR_3);
 return -VAR_0;
}
