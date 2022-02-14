
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef size_t u32 ;
struct ath_hw {size_t* totalAdcDcOffsetIOddPhase; size_t* totalAdcDcOffsetIEvenPhase; int* totalAdcDcOffsetQOddPhase; int* totalAdcDcOffsetQEvenPhase; TYPE_1__* cal_list_curr; } ;
struct ath_common {int dummy; } ;
struct ath9k_percal_data {int calCountMax; int calNumSamples; } ;
typedef int int32_t ;
struct TYPE_2__ {struct ath9k_percal_data* calData; } ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_1 (struct ath_hw*,int ) ;
 int FUNC_2 (struct ath_hw*,int ,size_t) ;
 struct ath_common* FUNC_3 (struct ath_hw*) ;
 int FUNC_4 (struct ath_common*,int ,char*,size_t,...) ;

__attribute__((used)) static void FUNC_5(struct ath_hw *VAR_2, u8 VAR_3)
{
 struct ath_common *VAR_4 = FUNC_3(VAR_2);
 u32 VAR_5, VAR_6, VAR_7, VAR_8;
 int32_t VAR_9, VAR_10, VAR_11, VAR_12;
 const struct ath9k_percal_data *VAR_13 =
  VAR_2->cal_list_curr->calData;
 u32 VAR_14 =
  (1 << (VAR_13->calCountMax + 5)) * VAR_13->calNumSamples;

 for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
  VAR_5 = VAR_2->totalAdcDcOffsetIOddPhase[VAR_8];
  VAR_6 = VAR_2->totalAdcDcOffsetIEvenPhase[VAR_8];
  VAR_9 = VAR_2->totalAdcDcOffsetQOddPhase[VAR_8];
  VAR_10 = VAR_2->totalAdcDcOffsetQEvenPhase[VAR_8];

  FUNC_4(VAR_4, VAR_1,
   "Starting ADC DC Offset Cal for Chain %d\n", VAR_8);

  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_odd_i = %d\n",
   VAR_8, VAR_5);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_even_i = %d\n",
   VAR_8, VAR_6);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_odd_q = %d\n",
   VAR_8, VAR_9);
  FUNC_4(VAR_4, VAR_1, "Chn %d pwr_meas_even_q = %d\n",
   VAR_8, VAR_10);

  VAR_12 = (((VAR_6 - VAR_5) * 2) /
          VAR_14) & 0x1ff;
  VAR_11 = (((VAR_9 - VAR_10) * 2) /
          VAR_14) & 0x1ff;

  FUNC_4(VAR_4, VAR_1,
   "Chn %d dc_offset_mismatch_i = 0x%08x\n",
   VAR_8, VAR_12);
  FUNC_4(VAR_4, VAR_1,
   "Chn %d dc_offset_mismatch_q = 0x%08x\n",
   VAR_8, VAR_11);

  VAR_7 = FUNC_1(VAR_2, FUNC_0(VAR_8));
  VAR_7 &= 0xc0000fff;
  VAR_7 |= (VAR_11 << 12) | (VAR_12 << 21);
  FUNC_2(VAR_2, FUNC_0(VAR_8), VAR_7);

  FUNC_4(VAR_4, VAR_1,
   "ADC DC Offset Cal done for Chain %d\n", VAR_8);
 }

 FUNC_2(VAR_2, FUNC_0(0),
    FUNC_1(VAR_2, FUNC_0(0)) |
    VAR_0);
}
