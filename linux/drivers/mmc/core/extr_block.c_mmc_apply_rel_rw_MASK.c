
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {int dummy; } ;
struct TYPE_4__ {int rel_param; int rel_sectors; } ;
struct mmc_card {TYPE_2__ ext_csd; } ;
struct TYPE_3__ {int blocks; } ;
struct mmc_blk_request {TYPE_1__ data; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct request*) ;

__attribute__((used)) static inline void FUNC_2(struct mmc_blk_request *VAR_1,
        struct mmc_card *VAR_2,
        struct request *VAR_3)
{
 if (!(VAR_2->ext_csd.rel_param & VAR_0)) {

  if (!FUNC_0(FUNC_1(VAR_3), VAR_2->ext_csd.rel_sectors))
   VAR_1->data.blocks = 1;

  if (VAR_1->data.blocks > VAR_2->ext_csd.rel_sectors)
   VAR_1->data.blocks = VAR_2->ext_csd.rel_sectors;
  else if (VAR_1->data.blocks < VAR_2->ext_csd.rel_sectors)
   VAR_1->data.blocks = 1;
 }
}
