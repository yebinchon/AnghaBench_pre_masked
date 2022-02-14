
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc_cls_u32_offload {int command; } ;
struct ixgbe_adapter {int dummy; } ;


 int VAR_0 ;






 int FUNC_0 (struct ixgbe_adapter*,struct tc_cls_u32_offload*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct tc_cls_u32_offload*) ;
 int FUNC_2 (struct ixgbe_adapter*,struct tc_cls_u32_offload*) ;
 int FUNC_3 (struct ixgbe_adapter*,struct tc_cls_u32_offload*) ;

__attribute__((used)) static int FUNC_4(struct ixgbe_adapter *VAR_1,
      struct tc_cls_u32_offload *VAR_2)
{
 switch (VAR_2->command) {
 case 130:
 case 128:
  return FUNC_0(VAR_1, VAR_2);
 case 132:
  return FUNC_3(VAR_1, VAR_2);
 case 131:
 case 129:
  return FUNC_1(VAR_1, VAR_2);
 case 133:
  return FUNC_2(VAR_1, VAR_2);
 default:
  return -VAR_0;
 }
}
