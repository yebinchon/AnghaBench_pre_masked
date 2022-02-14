
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct moxart_host {int sysclk; int rate; int lock; scalar_t__ base; } ;
struct mmc_ios {int clock; scalar_t__ power_mode; scalar_t__ vdd; int bus_width; } ;
struct mmc_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;


 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 struct moxart_host* FUNC_0 (struct mmc_host*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_12, struct mmc_ios *VAR_13)
{
 struct moxart_host *VAR_14 = FUNC_0(VAR_12);
 unsigned long VAR_15;
 u8 VAR_16, VAR_17;
 u32 VAR_18;

 FUNC_2(&VAR_14->lock, VAR_15);

 if (VAR_13->clock) {
  for (VAR_17 = 0; VAR_17 < VAR_3; ++VAR_17) {
   if (VAR_13->clock >= VAR_14->sysclk / (2 * (VAR_17 + 1)))
    break;
  }
  VAR_18 = VAR_5 | VAR_17;
  VAR_14->rate = VAR_14->sysclk / (2 * (VAR_17 + 1));
  if (VAR_14->rate > VAR_14->sysclk)
   VAR_18 |= VAR_4;
  FUNC_4(VAR_18, VAR_14->base + VAR_9);
 }

 if (VAR_13->power_mode == VAR_7) {
  FUNC_4(FUNC_1(VAR_14->base + VAR_10) & ~VAR_11,
         VAR_14->base + VAR_10);
 } else {
  if (VAR_13->vdd < VAR_6)
   VAR_16 = 0;
  else
   VAR_16 = VAR_13->vdd - VAR_6;

  FUNC_4(VAR_11 | (u32) VAR_16,
         VAR_14->base + VAR_10);
 }

 switch (VAR_13->bus_width) {
 case 129:
  FUNC_4(VAR_1, VAR_14->base + VAR_8);
  break;
 case 128:
  FUNC_4(VAR_2, VAR_14->base + VAR_8);
  break;
 default:
  FUNC_4(VAR_0, VAR_14->base + VAR_8);
  break;
 }

 FUNC_3(&VAR_14->lock, VAR_15);
}
