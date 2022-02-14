
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i40e_vsi {int dummy; } ;
struct i40e_netdev_priv {struct i40e_vsi* vsi; } ;
struct flow_cls_offload {int command; } ;


 int VAR_0 ;



 int FUNC_0 (struct i40e_vsi*,struct flow_cls_offload*) ;
 int FUNC_1 (struct i40e_vsi*,struct flow_cls_offload*) ;

__attribute__((used)) static int FUNC_2(struct i40e_netdev_priv *VAR_1,
        struct flow_cls_offload *VAR_2)
{
 struct i40e_vsi *VAR_3 = VAR_1->vsi;

 switch (VAR_2->command) {
 case 129:
  return FUNC_0(VAR_3, VAR_2);
 case 130:
  return FUNC_1(VAR_3, VAR_2);
 case 128:
  return -VAR_0;
 default:
  return -VAR_0;
 }
}
