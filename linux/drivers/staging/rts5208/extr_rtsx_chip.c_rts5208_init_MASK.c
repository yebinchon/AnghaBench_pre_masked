
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtsx_chip {int asic_code; int ic_version; int phy_debug_mode; int aux_pwr_exist; int hw_bypass_sd; int auto_delink_en; scalar_t__ use_hw_setting; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtsx_chip*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct rtsx_chip*) ;
 int FUNC_4 (struct rtsx_chip*,int,int*) ;
 int FUNC_5 (struct rtsx_chip*,int,int*) ;
 int FUNC_6 (struct rtsx_chip*,int,int*) ;
 int FUNC_7 (struct rtsx_chip*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_7)
{
 int VAR_8;
 u16 VAR_9 = 0;
 u8 VAR_10 = 0;

 VAR_8 = FUNC_7(VAR_7, VAR_2, 0x03, 0x03);
 if (VAR_8)
  return VAR_8;
 VAR_8 = FUNC_6(VAR_7, VAR_2, &VAR_10);
 if (VAR_8)
  return VAR_8;
 VAR_7->asic_code = VAR_10 == 0 ? 1 : 0;

 if (VAR_7->asic_code) {
  VAR_8 = FUNC_5(VAR_7, 0x1C, &VAR_9);
  if (VAR_8 != VAR_6)
   return VAR_5;

  FUNC_2(FUNC_3(VAR_7), "Value of phy register 0x1C is 0x%x\n",
   VAR_9);
  VAR_7->ic_version = (VAR_9 >> 4) & 0x07;
  VAR_7->phy_debug_mode = VAR_9 & VAR_4 ? 1 : 0;

 } else {
  VAR_8 = FUNC_6(VAR_7, 0xFE80, &VAR_10);
  if (VAR_8)
   return VAR_8;
  VAR_7->ic_version = VAR_10;
  VAR_7->phy_debug_mode = 0;
 }

 VAR_8 = FUNC_6(VAR_7, VAR_3, &VAR_10);
 if (VAR_8)
  return VAR_8;
 FUNC_2(FUNC_3(VAR_7), "PDINFO: 0x%x\n", VAR_10);
 VAR_7->aux_pwr_exist = VAR_10 & VAR_0 ? 1 : 0;

 VAR_8 = FUNC_6(VAR_7, 0xFE50, &VAR_10);
 if (VAR_8)
  return VAR_8;
 VAR_7->hw_bypass_sd = VAR_10 & 0x01 ? 1 : 0;

 FUNC_4(VAR_7, 0x0E, &VAR_10);
 if (VAR_10 & 0x80)
  FUNC_1(VAR_7);
 else
  FUNC_0(VAR_7);

 if (VAR_7->use_hw_setting) {
  VAR_8 = FUNC_6(VAR_7, VAR_1, &VAR_10);
  if (VAR_8)
   return VAR_8;
  VAR_7->auto_delink_en = VAR_10 & 0x80 ? 1 : 0;
 }

 return VAR_6;
}
