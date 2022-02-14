
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct rtsx_chip {int asic_code; int aux_pwr_exist; int hw_bypass_sd; int auto_delink_en; int lun_mode; scalar_t__ use_hw_setting; int baro_pkg; scalar_t__ phy_debug_mode; scalar_t__ ic_version; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct rtsx_chip*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct rtsx_chip*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (struct rtsx_chip*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct rtsx_chip*) ;
 int FUNC_5 (struct rtsx_chip*,int ,int,int*) ;
 int FUNC_6 (struct rtsx_chip*,int,int*) ;
 int FUNC_7 (struct rtsx_chip*,int,int,int) ;

__attribute__((used)) static int FUNC_8(struct rtsx_chip *VAR_11)
{
 int VAR_12;
 u8 VAR_13 = 0, VAR_14;
 u32 VAR_15 = 0;

 VAR_12 = FUNC_7(VAR_11, VAR_3, 0x03, 0x03);
 if (VAR_12)
  return VAR_12;
 VAR_12 = FUNC_6(VAR_11, VAR_3, &VAR_13);
 if (VAR_12)
  return VAR_12;
 VAR_11->asic_code = VAR_13 == 0 ? 1 : 0;

 VAR_11->ic_version = 0;
 VAR_11->phy_debug_mode = 0;

 VAR_12 = FUNC_6(VAR_11, VAR_6, &VAR_13);
 if (VAR_12)
  return VAR_12;
 FUNC_3(FUNC_4(VAR_11), "PDINFO: 0x%x\n", VAR_13);
 VAR_11->aux_pwr_exist = VAR_13 & VAR_0 ? 1 : 0;

 VAR_12 = FUNC_6(VAR_11, VAR_1, &VAR_13);
 if (VAR_12)
  return VAR_12;
 FUNC_3(FUNC_4(VAR_11), "CARD_SHARE_MODE: 0x%x\n", VAR_13);
 VAR_11->baro_pkg = VAR_13 & 0x04 ? VAR_7 : VAR_5;

 VAR_12 = FUNC_6(VAR_11, 0xFE5A, &VAR_13);
 if (VAR_12)
  return VAR_12;
 VAR_11->hw_bypass_sd = VAR_13 & 0x10 ? 1 : 0;

 VAR_12 = FUNC_5(VAR_11, 0, 0x718, &VAR_15);
 if (VAR_12 != VAR_10)
  return VAR_9;

 VAR_14 = (u8)((VAR_15 >> 29) & 0x07);
 FUNC_3(FUNC_4(VAR_11), "Max function number: %d\n", VAR_14);
 if (VAR_14 == 0x02)
  FUNC_2(VAR_11);
 else
  FUNC_1(VAR_11);

 if (VAR_11->use_hw_setting) {
  VAR_12 = FUNC_6(VAR_11, VAR_2, &VAR_13);
  if (VAR_12)
   return VAR_12;
  VAR_11->auto_delink_en = VAR_13 & 0x80 ? 1 : 0;

  if (FUNC_0(VAR_11, VAR_5))
   VAR_11->lun_mode = VAR_8;
  else
   VAR_11->lun_mode = VAR_4;
 }

 return VAR_10;
}
