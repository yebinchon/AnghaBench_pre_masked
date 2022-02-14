
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {scalar_t__ fclk_freq; TYPE_1__* host; } ;
struct TYPE_2__ {scalar_t__ fclk_enabled; } ;


 unsigned long FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(struct mmc_omap_slot *VAR_1)
{
 unsigned long VAR_2;

 if (VAR_1 != ((void*)0) && VAR_1->host->fclk_enabled && VAR_1->fclk_freq > 0) {
  VAR_2 = FUNC_0(VAR_0, VAR_1->fclk_freq);
  FUNC_1(8 * VAR_2);
 }
}
