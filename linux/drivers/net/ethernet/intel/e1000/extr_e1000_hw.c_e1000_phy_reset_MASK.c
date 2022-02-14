
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int phy_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;

 int FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (struct e1000_hw*,int ,int *) ;
 int FUNC_3 (struct e1000_hw*,int ,int ) ;
 int FUNC_4 (int) ;

s32 FUNC_5(struct e1000_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;

 switch (VAR_3->phy_type) {
 case 128:
  VAR_4 = FUNC_0(VAR_3);
  if (VAR_4)
   return VAR_4;
  break;
 default:
  VAR_4 = FUNC_2(VAR_3, VAR_2, &VAR_5);
  if (VAR_4)
   return VAR_4;

  VAR_5 |= VAR_1;
  VAR_4 = FUNC_3(VAR_3, VAR_2, VAR_5);
  if (VAR_4)
   return VAR_4;

  FUNC_4(1);
  break;
 }

 if (VAR_3->phy_type == 128)
  FUNC_1(VAR_3);

 return VAR_0;
}
