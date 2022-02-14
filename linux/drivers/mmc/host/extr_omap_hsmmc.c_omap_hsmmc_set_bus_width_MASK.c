
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_hsmmc_host {int base; TYPE_1__* mmc; } ;
struct mmc_ios {scalar_t__ timing; int bus_width; } ;
struct TYPE_2__ {struct mmc_ios ios; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct omap_hsmmc_host *VAR_7)
{
 struct mmc_ios *VAR_8 = &VAR_7->mmc->ios;
 u32 VAR_9;

 VAR_9 = FUNC_0(VAR_7->base, VAR_0);
 if (VAR_8->timing == VAR_5 ||
     VAR_8->timing == VAR_6)
  VAR_9 |= VAR_1;
 else
  VAR_9 &= ~VAR_1;
 switch (VAR_8->bus_width) {
 case 128:
  FUNC_1(VAR_7->base, VAR_0, VAR_9 | VAR_2);
  break;
 case 129:
  FUNC_1(VAR_7->base, VAR_0, VAR_9 & ~VAR_2);
  FUNC_1(VAR_7->base, VAR_4,
   FUNC_0(VAR_7->base, VAR_4) | VAR_3);
  break;
 case 130:
  FUNC_1(VAR_7->base, VAR_0, VAR_9 & ~VAR_2);
  FUNC_1(VAR_7->base, VAR_4,
   FUNC_0(VAR_7->base, VAR_4) & ~VAR_3);
  break;
 }
}
