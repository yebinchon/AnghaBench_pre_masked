
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct exynos_tmu_data {scalar_t__ soc; int reference_voltage; int gain; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;

__attribute__((used)) static u32 FUNC_0(struct exynos_tmu_data *VAR_11, u32 VAR_12)
{
 if (VAR_11->soc == VAR_10 ||
     VAR_11->soc == VAR_9)
  VAR_12 |= (VAR_1 << VAR_0);

 VAR_12 &= ~(VAR_5 << VAR_6);
 VAR_12 |= VAR_11->reference_voltage << VAR_6;

 VAR_12 &= ~(VAR_3 << VAR_4);
 VAR_12 |= (VAR_11->gain << VAR_4);

 VAR_12 &= ~(VAR_7 << VAR_8);
 VAR_12 |= (VAR_2 << VAR_8);

 return VAR_12;
}
