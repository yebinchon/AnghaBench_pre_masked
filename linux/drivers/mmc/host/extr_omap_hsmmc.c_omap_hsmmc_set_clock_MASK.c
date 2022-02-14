
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct omap_hsmmc_host {int base; int fclk; TYPE_2__* mmc; } ;
struct mmc_ios {scalar_t__ timing; int clock; } ;
struct TYPE_4__ {struct mmc_ios ios; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;
 unsigned long VAR_8 ;
 unsigned long VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 unsigned long FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,unsigned long) ;
 int VAR_13 ;
 unsigned long FUNC_2 (struct omap_hsmmc_host*,struct mmc_ios*) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int ) ;
 unsigned long VAR_14 ;
 int FUNC_6 (TYPE_2__*) ;
 TYPE_1__* FUNC_7 (struct omap_hsmmc_host*) ;
 unsigned long FUNC_8 (int ) ;
 int FUNC_9 (struct omap_hsmmc_host*) ;
 int FUNC_10 (struct omap_hsmmc_host*) ;
 scalar_t__ FUNC_11 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_12(struct omap_hsmmc_host *VAR_15)
{
 struct mmc_ios *VAR_16 = &VAR_15->mmc->ios;
 unsigned long VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19;

 FUNC_5(FUNC_6(VAR_15->mmc), "Set clock to %uHz\n", VAR_16->clock);

 FUNC_10(VAR_15);

 VAR_17 = FUNC_0(VAR_15->base, VAR_13);
 VAR_17 = VAR_17 & ~(VAR_1 | VAR_3);
 VAR_19 = FUNC_2(VAR_15, VAR_16);
 VAR_17 = VAR_17 | (VAR_19 << 6) | (VAR_2 << 16);
 FUNC_1(VAR_15->base, VAR_13, VAR_17);
 FUNC_1(VAR_15->base, VAR_13,
  FUNC_0(VAR_15->base, VAR_13) | VAR_8);


 VAR_18 = VAR_14 + FUNC_8(VAR_10);
 while ((FUNC_0(VAR_15->base, VAR_13) & VAR_9) != VAR_9
  && FUNC_11(VAR_14, VAR_18))
  FUNC_4();
 if ((FUNC_7(VAR_15)->features & VAR_5) &&
     (VAR_16->timing != VAR_11) &&
     (VAR_16->timing != VAR_12) &&
     ((FUNC_0(VAR_15->base, VAR_0) & VAR_7) == VAR_7)) {
  VAR_17 = FUNC_0(VAR_15->base, VAR_4);
  if (VAR_19 && (FUNC_3(VAR_15->fclk)/VAR_19) > 25000000)
   VAR_17 |= VAR_6;
  else
   VAR_17 &= ~VAR_6;

  FUNC_1(VAR_15->base, VAR_4, VAR_17);
 }

 FUNC_9(VAR_15);
}
