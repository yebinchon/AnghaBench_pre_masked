
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ath9k_hw_aic {scalar_t__ aic_cal_state; int* aic_sram; int aic_enabled; } ;
struct TYPE_2__ {struct ath9k_hw_aic aic; } ;
struct ath_hw {TYPE_1__ btcoex_hw; } ;
typedef size_t int16_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct ath_hw*,int,int) ;
 int FUNC_1 (struct ath_hw*) ;

u8 FUNC_2(struct ath_hw *VAR_6)
{
 struct ath9k_hw_aic *VAR_7 = &VAR_6->btcoex_hw.aic;
 int16_t VAR_8;

 if (VAR_7->aic_cal_state != VAR_0)
  return 1;

 FUNC_1(VAR_6);

 FUNC_0(VAR_6, VAR_2, VAR_5);

 for (VAR_8 = 0; VAR_8 < VAR_4; VAR_8++) {
  FUNC_0(VAR_6, VAR_3, VAR_7->aic_sram[VAR_8]);
 }


 FUNC_0(VAR_6, 0xa6b0, 0x80);
 FUNC_0(VAR_6, 0xa6b4, 0x5b2df0);
 FUNC_0(VAR_6, 0xa6b8, 0x10762cc8);
 FUNC_0(VAR_6, 0xa6bc, 0x1219a4b);
 FUNC_0(VAR_6, 0xa6c0, 0x1e01);
 FUNC_0(VAR_6, 0xb6b4, 0xf0);
 FUNC_0(VAR_6, 0xb6c0, 0x1e01);
 FUNC_0(VAR_6, 0xb6b0, 0x81);
 FUNC_0(VAR_6, VAR_1, 0x40000000);

 VAR_7->aic_enabled = 1;

 return 0;
}
