
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 int FUNC_1 (struct e1000_hw*) ;


 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 u32 VAR_6;

 switch (VAR_4->phy_type) {
 case 128:
  VAR_5 = FUNC_1(VAR_4);
  if (VAR_5) {
   FUNC_2("e1000_copper_link_rtl_setup failed!\n");
   return VAR_5;
  }
  break;
 case 129:

  VAR_6 = FUNC_3(VAR_0);
  VAR_6 |= VAR_1;
  FUNC_4(VAR_0, VAR_6);
  FUNC_0();


  VAR_6 = FUNC_3(VAR_0);
  VAR_6 |= 0x4;
  VAR_6 &= ~0x2;
  FUNC_4(VAR_0, VAR_6);
  FUNC_0();
  VAR_5 = FUNC_1(VAR_4);

  if (VAR_5) {
   FUNC_2("e1000_copper_link_rtl_setup failed!\n");
   return VAR_5;
  }
  break;
 default:
  FUNC_2("Error Resetting the PHY\n");
  return VAR_2;
 }

 return VAR_3;
}
