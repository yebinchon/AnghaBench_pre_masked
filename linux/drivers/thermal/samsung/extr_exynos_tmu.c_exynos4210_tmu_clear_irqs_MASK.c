
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct exynos_tmu_data {scalar_t__ soc; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct exynos_tmu_data *VAR_9)
{
 unsigned int VAR_10;
 u32 VAR_11, VAR_12;

 if (VAR_9->soc == VAR_6) {
  VAR_11 = VAR_1;
  VAR_12 = VAR_0;
 } else if (VAR_9->soc == VAR_8) {
  VAR_11 = VAR_3;
  VAR_12 = VAR_3;
 } else if (VAR_9->soc == VAR_7) {
  VAR_11 = VAR_2;
  VAR_12 = VAR_2;
 } else {
  VAR_11 = VAR_5;
  VAR_12 = VAR_4;
 }

 VAR_10 = FUNC_0(VAR_9->base + VAR_11);
 FUNC_1(VAR_10, VAR_9->base + VAR_12);
}
