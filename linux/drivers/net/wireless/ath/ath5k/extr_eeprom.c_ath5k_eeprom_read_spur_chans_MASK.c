
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef void* u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; void*** ee_spur_chans; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 void* VAR_2 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__,void*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static int
FUNC_3(struct ath5k_hw *VAR_5)
{
 struct ath5k_eeprom_info *VAR_6 = &VAR_5->ah_capabilities.cap_eeprom;
 u32 VAR_7;
 u16 VAR_8;
 int VAR_9 = 0, VAR_10;

 VAR_7 = FUNC_0(VAR_6->ee_version) +
    FUNC_1(VAR_6->ee_version);

 if (VAR_6->ee_version < VAR_4) {

  VAR_6->ee_spur_chans[0][0] = VAR_2;

  VAR_6->ee_spur_chans[0][1] = VAR_0;
  VAR_6->ee_spur_chans[1][1] = VAR_1;
  VAR_6->ee_spur_chans[2][1] = VAR_2;
 } else if (VAR_6->ee_version >= VAR_4) {
  for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
   FUNC_2(VAR_7, VAR_8);
   VAR_6->ee_spur_chans[VAR_10][0] = VAR_8;
   FUNC_2(VAR_7 + VAR_3,
         VAR_8);
   VAR_6->ee_spur_chans[VAR_10][1] = VAR_8;
   VAR_7++;
  }
 }

 return VAR_9;
}
