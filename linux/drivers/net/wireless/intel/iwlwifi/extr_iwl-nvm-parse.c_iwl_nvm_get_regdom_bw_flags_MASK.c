
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct iwl_cfg {int dummy; } ;


 scalar_t__ const VAR_0 ;
 scalar_t__ const VAR_1 ;
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
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;

__attribute__((used)) static u32 FUNC_0(const u16 *VAR_19,
           int VAR_20, u16 VAR_21,
           const struct iwl_cfg *VAR_22)
{
 u32 VAR_23 = VAR_6;

 if (VAR_20 < VAR_11 &&
     (VAR_21 & VAR_13)) {
  if (VAR_19[VAR_20] <= VAR_1)
   VAR_23 &= ~VAR_8;
  if (VAR_19[VAR_20] >= VAR_0)
   VAR_23 &= ~VAR_7;
 } else if (VAR_21 & VAR_13) {
  if ((VAR_20 - VAR_11) % 2 == 0)
   VAR_23 &= ~VAR_8;
  else
   VAR_23 &= ~VAR_7;
 }

 if (!(VAR_21 & VAR_14))
  VAR_23 |= VAR_5;
 if (!(VAR_21 & VAR_12))
  VAR_23 |= VAR_4;

 if (!(VAR_21 & VAR_15))
  VAR_23 |= VAR_9;

 if (VAR_21 & VAR_18)
  VAR_23 |= VAR_2;

 if (VAR_21 & VAR_17)
  VAR_23 |= VAR_10;




 if ((VAR_21 & VAR_16) &&
     (VAR_23 & VAR_9))
  VAR_23 |= VAR_3;

 return VAR_23;
}
