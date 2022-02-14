
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct ath5k_eeprom_info {scalar_t__ ee_version; int ee_ctls; int* ee_ctl; struct ath5k_edge_power* ee_ctl_pwr; int ee_misc1; } ;
struct TYPE_2__ {struct ath5k_eeprom_info cap_eeprom; } ;
struct ath5k_hw {TYPE_1__ ah_capabilities; } ;
struct ath5k_edge_power {int freq; int edge; int flag; } ;



 int VAR_0 ;

 scalar_t__ FUNC_0 (scalar_t__) ;
 unsigned int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_6 (struct ath5k_eeprom_info*,int,unsigned int) ;

__attribute__((used)) static int
FUNC_7(struct ath5k_hw *VAR_9)
{
 struct ath5k_eeprom_info *VAR_10 = &VAR_9->ah_capabilities.cap_eeprom;
 struct ath5k_edge_power *VAR_11;
 unsigned int VAR_12, VAR_13;
 unsigned int VAR_14;
 int VAR_15, VAR_16;
 u32 VAR_17;
 u16 VAR_18;

 VAR_13 = VAR_6;
 VAR_12 = FUNC_1(VAR_10->ee_version);
 VAR_17 = FUNC_0(VAR_10->ee_version);
 VAR_10->ee_ctls = FUNC_3(VAR_10->ee_version);
 for (VAR_15 = 0; VAR_15 < VAR_10->ee_ctls; VAR_15 += 2) {
  FUNC_4(VAR_17++, VAR_18);
  VAR_10->ee_ctl[VAR_15] = (VAR_18 >> 8) & 0xff;
  VAR_10->ee_ctl[VAR_15 + 1] = VAR_18 & 0xff;
 }

 VAR_17 = VAR_2;
 if (VAR_10->ee_version >= VAR_8)
  VAR_17 += FUNC_5(VAR_10->ee_misc1) -
   VAR_1;
 else
  VAR_17 += FUNC_2(VAR_10->ee_version);

 VAR_11 = VAR_10->ee_ctl_pwr;
 for (VAR_15 = 0; VAR_15 < VAR_10->ee_ctls; VAR_15++) {
  switch (VAR_10->ee_ctl[VAR_15] & VAR_0) {
  case 129:
  case 128:
   VAR_14 = VAR_3;
   break;
  default:
   VAR_14 = VAR_4;
   break;
  }
  if (VAR_10->ee_ctl[VAR_15] == 0) {
   if (VAR_10->ee_version >= VAR_7)
    VAR_17 += 8;
   else
    VAR_17 += 7;
   VAR_11 += VAR_5;
   continue;
  }
  if (VAR_10->ee_version >= VAR_7) {
   for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16 += 2) {
    FUNC_4(VAR_17++, VAR_18);
    VAR_11[VAR_16].freq = (VAR_18 >> 8) & VAR_12;
    VAR_11[VAR_16 + 1].freq = VAR_18 & VAR_12;
   }
   for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16 += 2) {
    FUNC_4(VAR_17++, VAR_18);
    VAR_11[VAR_16].edge = (VAR_18 >> 8) & VAR_13;
    VAR_11[VAR_16].flag = (VAR_18 >> 14) & 1;
    VAR_11[VAR_16 + 1].edge = VAR_18 & VAR_13;
    VAR_11[VAR_16 + 1].flag = (VAR_18 >> 6) & 1;
   }
  } else {
   FUNC_4(VAR_17++, VAR_18);
   VAR_11[0].freq = (VAR_18 >> 9) & VAR_12;
   VAR_11[1].freq = (VAR_18 >> 2) & VAR_12;
   VAR_11[2].freq = (VAR_18 << 5) & VAR_12;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[2].freq |= (VAR_18 >> 11) & 0x1f;
   VAR_11[3].freq = (VAR_18 >> 4) & VAR_12;
   VAR_11[4].freq = (VAR_18 << 3) & VAR_12;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[4].freq |= (VAR_18 >> 13) & 0x7;
   VAR_11[5].freq = (VAR_18 >> 6) & VAR_12;
   VAR_11[6].freq = (VAR_18 << 1) & VAR_12;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[6].freq |= (VAR_18 >> 15) & 0x1;
   VAR_11[7].freq = (VAR_18 >> 8) & VAR_12;

   VAR_11[0].edge = (VAR_18 >> 2) & VAR_13;
   VAR_11[1].edge = (VAR_18 << 4) & VAR_13;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[1].edge |= (VAR_18 >> 12) & 0xf;
   VAR_11[2].edge = (VAR_18 >> 6) & VAR_13;
   VAR_11[3].edge = VAR_18 & VAR_13;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[4].edge = (VAR_18 >> 10) & VAR_13;
   VAR_11[5].edge = (VAR_18 >> 4) & VAR_13;
   VAR_11[6].edge = (VAR_18 << 2) & VAR_13;

   FUNC_4(VAR_17++, VAR_18);
   VAR_11[6].edge |= (VAR_18 >> 14) & 0x3;
   VAR_11[7].edge = (VAR_18 >> 8) & VAR_13;
  }
  for (VAR_16 = 0; VAR_16 < VAR_5; VAR_16++) {
   VAR_11[VAR_16].freq = FUNC_6(VAR_10,
    VAR_11[VAR_16].freq, VAR_14);
  }
  VAR_11 += VAR_5;
 }

 return 0;
}
