
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u32 ;
struct mmc_ios {scalar_t__ bus_mode; int clock; } ;
struct mmc_host {int dummy; } ;
struct mmc_davinci_host {int ns_in_one_cycle; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (struct mmc_davinci_host*,int ) ;
 struct mmc_davinci_host* FUNC_1 (struct mmc_host*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 unsigned int VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9 = 0;
 struct mmc_davinci_host *VAR_10 = FUNC_1(VAR_5);

 if (VAR_6->bus_mode == VAR_4) {
  u32 VAR_11;




  VAR_7 = ((unsigned int)VAR_8
    / (2 * VAR_3)) - 1;

  if (VAR_7 > 0xFF)
   VAR_7 = 0xFF;

  VAR_11 = FUNC_2(VAR_10->base + VAR_0) & ~VAR_2;
  VAR_11 |= VAR_7;
  FUNC_4(VAR_11, VAR_10->base + VAR_0);


  VAR_10->ns_in_one_cycle = (1000000) / (VAR_3/1000);
 } else {
  u32 VAR_12;
  VAR_9 = FUNC_0(VAR_10, VAR_6->clock);

  if (VAR_9 > 0xFF)
   VAR_9 = 0xFF;

  VAR_12 = FUNC_2(VAR_10->base + VAR_0) & ~VAR_1;
  FUNC_4(VAR_12, VAR_10->base + VAR_0);

  FUNC_3(10);

  VAR_12 = FUNC_2(VAR_10->base + VAR_0) & ~VAR_2;
  VAR_12 |= VAR_9;
  FUNC_4(VAR_12, VAR_10->base + VAR_0);

  FUNC_4(VAR_12 | VAR_1, VAR_10->base + VAR_0);

  FUNC_3(10);
 }
}
