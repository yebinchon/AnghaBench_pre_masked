
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct atl2_hw {int phy_configured; } ;
typedef scalar_t__ s32 ;


 int FUNC_0 (struct atl2_hw*) ;
 int FUNC_1 (struct atl2_hw*,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct atl2_hw*) ;
 scalar_t__ FUNC_3 (struct atl2_hw*) ;
 int FUNC_4 (struct atl2_hw*,int,int*) ;
 scalar_t__ FUNC_5 (struct atl2_hw*,int,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static s32 FUNC_7(struct atl2_hw *VAR_3)
{
 s32 VAR_4;
 u16 VAR_5;

 if (VAR_3->phy_configured)
  return 0;


 FUNC_1(VAR_3, VAR_2, 1);
 FUNC_0(VAR_3);
 FUNC_6(1);


 FUNC_5(VAR_3, VAR_0, 0);
 FUNC_4(VAR_3, VAR_1, &VAR_5);


 if (VAR_5 & 0x1000) {
  VAR_5 &= ~0x1000;
  FUNC_5(VAR_3, VAR_1, VAR_5);
 }

 FUNC_6(1);


 VAR_4 = FUNC_5(VAR_3, 18, 0xC00);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;


 VAR_4 = FUNC_2(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_3->phy_configured = 1;

 return VAR_4;
}
