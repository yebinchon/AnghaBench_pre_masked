
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mmc_ios {scalar_t__ clock; scalar_t__ bus_width; } ;
struct mmc_host {int dummy; } ;
struct bcm2835_host {scalar_t__ clock; int mutex; scalar_t__ ioaddr; int hcfg; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bcm2835_host*,scalar_t__) ;
 struct bcm2835_host* FUNC_1 (struct mmc_host*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct mmc_host *VAR_5, struct mmc_ios *VAR_6)
{
 struct bcm2835_host *VAR_7 = FUNC_1(VAR_5);

 FUNC_2(&VAR_7->mutex);

 if (!VAR_6->clock || VAR_6->clock != VAR_7->clock) {
  FUNC_0(VAR_7, VAR_6->clock);
  VAR_7->clock = VAR_6->clock;
 }


 VAR_7->hcfg &= ~VAR_3;
 if (VAR_6->bus_width == VAR_0)
  VAR_7->hcfg |= VAR_3;

 VAR_7->hcfg |= VAR_4;


 VAR_7->hcfg |= VAR_2;

 FUNC_4(VAR_7->hcfg, VAR_7->ioaddr + VAR_1);

 FUNC_3(&VAR_7->mutex);
}
