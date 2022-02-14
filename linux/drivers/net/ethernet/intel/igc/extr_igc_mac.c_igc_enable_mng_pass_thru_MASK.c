
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ arc_subsystem_valid; int asf_firmware_present; } ;
struct igc_hw {TYPE_1__ mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;

bool FUNC_1(struct igc_hw *VAR_10)
{
 bool VAR_11 = 0;
 u32 VAR_12, VAR_13;
 u32 VAR_14;

 if (!VAR_10->mac.asf_firmware_present)
  goto out;

 VAR_14 = FUNC_0(VAR_5);

 if (!(VAR_14 & VAR_7))
  goto out;

 if (VAR_10->mac.arc_subsystem_valid) {
  VAR_12 = FUNC_0(VAR_2);
  VAR_13 = FUNC_0(VAR_0);

  if (!(VAR_13 & VAR_1) &&
      ((VAR_12 & VAR_3) ==
      (VAR_9 << VAR_4))) {
   VAR_11 = 1;
   goto out;
  }
 } else {
  if ((VAR_14 & VAR_8) &&
      !(VAR_14 & VAR_6)) {
   VAR_11 = 1;
   goto out;
  }
 }

out:
 return VAR_11;
}
