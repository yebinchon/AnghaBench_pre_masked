
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int macRev; int devid; int macVersion; } ;
struct ath_hw {int (* get_mac_revision ) () ;int is_pciexpress; TYPE_1__ hw_version; } ;
 int VAR_0 ;
 int FUNC_0 (struct ath_hw*) ;
 scalar_t__ FUNC_1 (struct ath_hw*) ;
 scalar_t__ FUNC_2 (struct ath_hw*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ath_hw*,int ) ;
 int FUNC_5 (struct ath_hw*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 () ;

__attribute__((used)) static bool FUNC_8(struct ath_hw *VAR_16)
{
 u32 VAR_17;
 u32 VAR_18;

 if (VAR_16->get_mac_revision)
  VAR_16->hw_version.macRev = VAR_16->get_mac_revision();

 switch (VAR_16->hw_version.devid) {
 case 133:
  VAR_16->hw_version.macVersion = VAR_9;
  break;
 case 132:
  VAR_16->hw_version.macVersion = VAR_10;
  if (!VAR_16->get_mac_revision) {
   VAR_18 = FUNC_4(VAR_16, VAR_0);
   VAR_16->hw_version.macRev = FUNC_3(VAR_18, VAR_3);
  }
  return 1;
 case 131:
  VAR_16->hw_version.macVersion = VAR_11;
  return 1;
 case 129:
  VAR_16->hw_version.macVersion = VAR_13;
  return 1;
 case 130:
  VAR_16->hw_version.macVersion = VAR_12;
  return 1;
 case 128:
  VAR_16->hw_version.macVersion = VAR_14;
  return 1;
 }

 VAR_17 = FUNC_4(VAR_16, VAR_0);

 if (VAR_17 == -VAR_15) {
  FUNC_6(FUNC_5(VAR_16),
   "Failed to read SREV register");
  return 0;
 }

 VAR_18 = VAR_17 & VAR_1;

 if (VAR_18 == 0xFF) {
  VAR_18 = VAR_17;
  VAR_16->hw_version.macVersion =
   (VAR_18 & VAR_7) >> VAR_5;
  VAR_16->hw_version.macRev = FUNC_3(VAR_18, VAR_3);

  if (FUNC_1(VAR_16) || FUNC_2(VAR_16))
   VAR_16->is_pciexpress = 1;
  else
   VAR_16->is_pciexpress = (VAR_18 &
          VAR_4) ? 0 : 1;
 } else {
  if (!FUNC_0(VAR_16))
   VAR_16->hw_version.macVersion = FUNC_3(VAR_18, VAR_6);

  VAR_16->hw_version.macRev = VAR_18 & VAR_2;

  if (VAR_16->hw_version.macVersion == VAR_8)
   VAR_16->is_pciexpress = 1;
 }

 return 1;
}
