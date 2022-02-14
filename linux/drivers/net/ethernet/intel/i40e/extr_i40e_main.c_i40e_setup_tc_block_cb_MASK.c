
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i40e_netdev_priv {TYPE_1__* vsi; } ;
typedef enum tc_setup_type { ____Placeholder_tc_setup_type } tc_setup_type ;
struct TYPE_2__ {int netdev; } ;


 int VAR_0 ;

 int FUNC_0 (struct i40e_netdev_priv*,void*) ;
 int FUNC_1 (int ,void*) ;

__attribute__((used)) static int FUNC_2(enum tc_setup_type VAR_1, void *VAR_2,
      void *VAR_3)
{
 struct i40e_netdev_priv *VAR_4 = VAR_3;

 if (!FUNC_1(VAR_4->vsi->netdev, VAR_2))
  return -VAR_0;

 switch (VAR_1) {
 case 128:
  return FUNC_0(VAR_4, VAR_2);

 default:
  return -VAR_0;
 }
}
