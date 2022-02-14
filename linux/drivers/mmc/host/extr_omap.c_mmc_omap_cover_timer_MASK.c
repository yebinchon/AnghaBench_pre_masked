
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timer_list {int dummy; } ;
struct mmc_omap_slot {int cover_tasklet; } ;


 int VAR_0 ;
 struct mmc_omap_slot* FUNC_0 (int ,struct timer_list*,int ) ;
 struct mmc_omap_slot* VAR_1 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct timer_list *VAR_2)
{
 struct mmc_omap_slot *VAR_3 = FUNC_0(VAR_3, VAR_2, VAR_0);
 FUNC_1(&VAR_3->cover_tasklet);
}
