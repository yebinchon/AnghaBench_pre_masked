
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int mac_type; int autoneg; } ;
struct e1000_adapter {struct e1000_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int FUNC_0 (struct e1000_hw*) ;
 int FUNC_1 (struct e1000_hw*,int ,int*) ;
 int FUNC_2 (struct e1000_hw*,int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static void FUNC_5(struct e1000_adapter *VAR_5)
{
 struct e1000_hw *VAR_6 = &VAR_5->hw;
 u32 VAR_7;
 u16 VAR_8;

 VAR_7 = FUNC_3(VAR_4);
 VAR_7 &= ~(VAR_1 | VAR_0);
 FUNC_4(VAR_4, VAR_7);

 switch (VAR_6->mac_type) {
 case 131:
 case 129:
 case 130:
 case 128:
 default:
  VAR_6->autoneg = 1;
  FUNC_1(VAR_6, VAR_3, &VAR_8);
  if (VAR_8 & VAR_2) {
   VAR_8 &= ~VAR_2;
   FUNC_2(VAR_6, VAR_3, VAR_8);
   FUNC_0(VAR_6);
  }
  break;
 }
}
