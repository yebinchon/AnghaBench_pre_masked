
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct omap_hsmmc_host {int fclk; } ;
struct mmc_ios {scalar_t__ clock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static u16 FUNC_2(struct omap_hsmmc_host *VAR_1, struct mmc_ios *VAR_2)
{
 u16 VAR_3 = 0;

 if (VAR_2->clock) {
  VAR_3 = FUNC_0(FUNC_1(VAR_1->fclk), VAR_2->clock);
  if (VAR_3 > VAR_0)
   VAR_3 = VAR_0;
 }

 return VAR_3;
}
