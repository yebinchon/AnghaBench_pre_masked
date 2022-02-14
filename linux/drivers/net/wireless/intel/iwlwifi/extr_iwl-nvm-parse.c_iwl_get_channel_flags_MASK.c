
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct iwl_cfg {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;

__attribute__((used)) static u32 FUNC_0(u8 VAR_20, int VAR_21, bool VAR_22,
     u32 VAR_23, const struct iwl_cfg *VAR_24)
{
 u32 VAR_25 = VAR_5;

 if (!VAR_22 && (VAR_23 & VAR_13)) {
  if (VAR_20 <= VAR_10)
   VAR_25 &= ~VAR_7;
  if (VAR_20 >= VAR_0)
   VAR_25 &= ~VAR_6;
 } else if (VAR_23 & VAR_13) {
  if ((VAR_21 - VAR_11) % 2 == 0)
   VAR_25 &= ~VAR_7;
  else
   VAR_25 &= ~VAR_6;
 }
 if (!(VAR_23 & VAR_14))
  VAR_25 |= VAR_4;
 if (!(VAR_23 & VAR_12))
  VAR_25 |= VAR_3;

 if (!(VAR_23 & VAR_17))
  VAR_25 |= VAR_8;

 if (!(VAR_23 & VAR_15))
  VAR_25 |= VAR_8;

 if (VAR_23 & VAR_19)
  VAR_25 |= VAR_9;

 if (VAR_23 & VAR_18)
  VAR_25 |= VAR_1;




 if ((VAR_23 & VAR_16) &&
     (VAR_25 & VAR_8))
  VAR_25 |= VAR_2;

 return VAR_25;
}
