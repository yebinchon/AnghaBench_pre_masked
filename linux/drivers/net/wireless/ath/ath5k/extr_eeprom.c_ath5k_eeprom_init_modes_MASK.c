
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ath5k_eeprom_info {int* ee_thr_62; int ee_header; int * ee_turbo_max_power; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {scalar_t__ ah_ee_version; TYPE_1__ ah_capabilities; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (struct ath5k_hw*,int *,unsigned int) ;
 int FUNC_5 (struct ath5k_hw*,int *,unsigned int) ;

__attribute__((used)) static int
FUNC_6(struct ath5k_hw *VAR_4)
{
 struct ath5k_eeprom_info *VAR_5 = &VAR_4->ah_capabilities.cap_eeprom;
 u32 VAR_6[3];
 unsigned int VAR_7;
 u32 VAR_8;
 int VAR_9;




 VAR_6[VAR_0] = FUNC_1(VAR_4->ah_ee_version);
 VAR_6[VAR_1] = FUNC_2(VAR_4->ah_ee_version);
 VAR_6[VAR_2] = FUNC_3(VAR_4->ah_ee_version);

 VAR_5->ee_turbo_max_power[VAR_0] =
  FUNC_0(VAR_5->ee_header);

 for (VAR_7 = VAR_0; VAR_7 <= VAR_2; VAR_7++) {
  VAR_8 = VAR_6[VAR_7];

  VAR_9 = FUNC_4(VAR_4, &VAR_8, VAR_7);
  if (VAR_9)
   return VAR_9;

  VAR_9 = FUNC_5(VAR_4, &VAR_8, VAR_7);
  if (VAR_9)
   return VAR_9;
 }


 if (VAR_4->ah_ee_version <= VAR_3) {
  VAR_5->ee_thr_62[VAR_0] = 15;
  VAR_5->ee_thr_62[VAR_1] = 28;
  VAR_5->ee_thr_62[VAR_2] = 28;
 }

 return 0;
}
