
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ath10k_cal_mode { ____Placeholder_ath10k_cal_mode } ath10k_cal_mode ;
__attribute__((used)) static inline const char *FUNC_0(enum ath10k_cal_mode VAR_0)
{
 switch (VAR_0) {
 case 131:
  return "file";
 case 130:
  return "otp";
 case 133:
  return "dt";
 case 128:
  return "pre-cal-file";
 case 129:
  return "pre-cal-dt";
 case 132:
  return "eeprom";
 }

 return "unknown";
}
