
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos5_usbdrd_phy {int dev; scalar_t__ reg_phy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct exynos5_usbdrd_phy *VAR_4,
       u32 VAR_5, u32 VAR_6)
{
 u32 VAR_7 = 100;
 unsigned int VAR_8;

 FUNC_3(VAR_5 | VAR_6, VAR_4->reg_phy + VAR_1);

 do {
  VAR_8 = FUNC_1(VAR_4->reg_phy + VAR_2);
  if (VAR_8 & VAR_3)
   break;

  FUNC_2(1);
 } while (VAR_7-- > 0);

 if (!VAR_7) {
  FUNC_0(VAR_4->dev,
   "CRPORT handshake timeout1 (0x%08x)\n", VAR_5);
  return -VAR_0;
 }

 VAR_7 = 100;

 FUNC_3(VAR_5, VAR_4->reg_phy + VAR_1);

 do {
  VAR_8 = FUNC_1(VAR_4->reg_phy + VAR_2);
  if (!(VAR_8 & VAR_3))
   break;

  FUNC_2(1);
 } while (VAR_7-- > 0);

 if (!VAR_7) {
  FUNC_0(VAR_4->dev,
   "CRPORT handshake timeout2 (0x%08x)\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
