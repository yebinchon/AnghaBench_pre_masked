
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_omap_slot {int id; int mmc; TYPE_1__* pdata; } ;
struct TYPE_2__ {int (* get_cover_state ) (int ,int ) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static inline
int FUNC_2(struct mmc_omap_slot *VAR_0)
{
 if (VAR_0->pdata->get_cover_state)
  return VAR_0->pdata->get_cover_state(FUNC_0(VAR_0->mmc),
          VAR_0->id);
 return 0;
}
