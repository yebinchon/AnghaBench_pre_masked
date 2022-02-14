
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_adapter {int link_speed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




__attribute__((used)) static void FUNC_0(struct ixgbe_adapter *VAR_6,
     u32 *VAR_7, u32 *VAR_8)
{
 switch (VAR_6->link_speed) {
 case 130:
  *VAR_7 = VAR_3;
  *VAR_8 = VAR_0;
  break;
 case 128:
  *VAR_7 = VAR_5;
  *VAR_8 = VAR_2;
  break;
 case 129:
 default:
  *VAR_7 = VAR_4;
  *VAR_8 = VAR_1;
  break;
 }
}
