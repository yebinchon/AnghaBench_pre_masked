
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ar9300_eeprom {struct ar9300_cal_data_per_freq_op_loop** calPierData2G; int * calFreqPier2G; struct ar9300_cal_data_per_freq_op_loop** calPierData5G; int * calFreqPier5G; } ;
struct TYPE_2__ {struct ar9300_eeprom ar9300_eep; } ;
struct ath_hw {TYPE_1__ eeprom; } ;
struct ath_common {int dummy; } ;
struct ar9300_cal_data_per_freq_op_loop {int refPower; int tempMeas; int voltMeas; int rxNoisefloorPower; scalar_t__ rxTempMeas; int rxNoisefloorCal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct ath_common*,int ,char*,int) ;

__attribute__((used)) static int FUNC_4(struct ath_hw *VAR_4,
      int VAR_5,
      int VAR_6,
      int VAR_7,
      int *VAR_8,
      int *VAR_9,
      int *VAR_10, int *VAR_11,
      int *VAR_12, int *VAR_13)
{
 u8 *VAR_14;
 struct ar9300_cal_data_per_freq_op_loop *VAR_15;
 int VAR_16;
 struct ar9300_eeprom *VAR_17 = &VAR_4->eeprom.ar9300_eep;
 struct ath_common *VAR_18 = FUNC_1(VAR_4);

 if (VAR_7 >= VAR_0) {
  FUNC_3(VAR_18, VAR_3,
   "Invalid chain index, must be less than %d\n",
   VAR_0);
  return -1;
 }

 if (VAR_5) {
  if (VAR_6 >= VAR_2) {
   FUNC_3(VAR_18, VAR_3,
    "Invalid 5GHz cal pier index, must be less than %d\n",
    VAR_2);
   return -1;
  }
  VAR_14 = &(VAR_17->calFreqPier5G[VAR_6]);
  VAR_15 = &(VAR_17->calPierData5G[VAR_7][VAR_6]);
  VAR_16 = 0;
 } else {
  if (VAR_6 >= VAR_1) {
   FUNC_3(VAR_18, VAR_3,
    "Invalid 2GHz cal pier index, must be less than %d\n",
    VAR_1);
   return -1;
  }

  VAR_14 = &(VAR_17->calFreqPier2G[VAR_6]);
  VAR_15 = &(VAR_17->calPierData2G[VAR_7][VAR_6]);
  VAR_16 = 1;
 }

 *VAR_8 = FUNC_2(*VAR_14, VAR_16);
 *VAR_9 = VAR_15->refPower;
 *VAR_10 = VAR_15->tempMeas;
 *VAR_11 = VAR_15->voltMeas;
 *VAR_12 = VAR_15->rxTempMeas ?
   FUNC_0(VAR_15->rxNoisefloorCal) : 0;
 *VAR_13 = VAR_15->rxTempMeas ?
   FUNC_0(VAR_15->rxNoisefloorPower) : 0;

 return 0;
}
