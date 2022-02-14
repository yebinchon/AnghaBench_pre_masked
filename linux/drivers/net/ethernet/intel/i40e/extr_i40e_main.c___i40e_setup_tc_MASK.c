
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct i40e_netdev_priv {int dummy; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;


 int VAR_0 ;


 int FUNC_0 (void*,int *,int ,struct i40e_netdev_priv*,struct i40e_netdev_priv*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device*,void*) ;
 int VAR_2 ;
 struct i40e_netdev_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static int FUNC_3(struct net_device *VAR_3, enum tc_setup_type VAR_4,
      void *VAR_5)
{
 struct i40e_netdev_priv *VAR_6 = FUNC_2(VAR_3);

 switch (VAR_4) {
 case 128:
  return FUNC_1(VAR_3, VAR_5);
 case 129:
  return FUNC_0(VAR_5,
        &VAR_1,
        VAR_2,
        VAR_6, VAR_6, 1);
 default:
  return -VAR_0;
 }
}
