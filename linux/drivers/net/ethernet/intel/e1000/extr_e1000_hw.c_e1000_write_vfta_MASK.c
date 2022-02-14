
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {scalar_t__ mac_type; } ;


 int FUNC_0 (struct e1000_hw*,int ,int) ;
 int FUNC_1 () ;
 int FUNC_2 (struct e1000_hw*,int ,int,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_3(struct e1000_hw *VAR_2, u32 VAR_3, u32 VAR_4)
{
 u32 VAR_5;

 if ((VAR_2->mac_type == VAR_1) && ((VAR_3 & 0x1) == 1)) {
  VAR_5 = FUNC_0(VAR_2, VAR_0, (VAR_3 - 1));
  FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4);
  FUNC_1();
  FUNC_2(VAR_2, VAR_0, (VAR_3 - 1), VAR_5);
  FUNC_1();
 } else {
  FUNC_2(VAR_2, VAR_0, VAR_3, VAR_4);
  FUNC_1();
 }
}
