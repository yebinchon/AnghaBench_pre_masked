
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mmc_omap_slot {int fclk_freq; } ;
struct mmc_omap_host {struct mmc_omap_slot* current_slot; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int,int ) ;
 int FUNC_1 (struct mmc_omap_host*,int ) ;
 int VAR_1 ;
 int FUNC_2 (struct mmc_omap_host*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct mmc_omap_host *VAR_4, int VAR_5)
{
 struct mmc_omap_slot *VAR_6 = VAR_4->current_slot;
 unsigned int VAR_7, VAR_8, VAR_9;
 u16 VAR_10 = 0;


 VAR_9 = FUNC_0(120 * VAR_3, VAR_6->fclk_freq);
 VAR_7 = 0;
 while (VAR_7 < VAR_5) {
  FUNC_2(VAR_4, VAR_2, 0xFFFF);
  FUNC_2(VAR_4, VAR_0, (3 << 12) | (1 << 7));

  VAR_8 = 0;
  while (VAR_8 < VAR_9) {
   VAR_10 = FUNC_1(VAR_4, VAR_2);
   if (VAR_10 & VAR_1)
    goto out;
   FUNC_3(1);
   VAR_8++;
  }

  VAR_7++;
 }
out:
 FUNC_2(VAR_4, VAR_2, VAR_10);
}
