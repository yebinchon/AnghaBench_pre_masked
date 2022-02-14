
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_lpss {int active_ltr; scalar_t__ priv; } ;
struct device {int dummy; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct intel_lpss* FUNC_0 (struct device*) ;
 int FUNC_1 (struct intel_lpss*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_8, s32 VAR_9)
{
 struct intel_lpss *VAR_10 = FUNC_0(VAR_8);
 u32 VAR_11;






 VAR_11 = FUNC_2(VAR_10->priv + VAR_0);

 if (VAR_9 == VAR_7 || VAR_9 < 0) {
  VAR_11 &= ~VAR_2;
 } else {
  VAR_11 |= VAR_2;
  VAR_11 &= ~VAR_5;
  VAR_11 &= ~VAR_6;

  if (VAR_9 > VAR_6)
   VAR_11 |= VAR_4 | VAR_9 >> 5;
  else
   VAR_11 |= VAR_3 | VAR_9;
 }

 if (VAR_11 == VAR_10->active_ltr)
  return;

 FUNC_3(VAR_11, VAR_10->priv + VAR_0);
 FUNC_3(VAR_11, VAR_10->priv + VAR_1);


 FUNC_1(VAR_10);
}
