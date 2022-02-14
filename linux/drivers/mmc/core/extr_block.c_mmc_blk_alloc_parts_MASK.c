
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_card {int nr_parts; TYPE_1__* part; } ;
struct mmc_blk_data {int dummy; } ;
struct TYPE_2__ {int area_type; int size; int name; int force_ro; int part_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (struct mmc_card*,struct mmc_blk_data*,int ,int,int ,int ,int) ;
 int FUNC_1 (struct mmc_card*,struct mmc_blk_data*,int ,int,int ) ;
 int FUNC_2 (struct mmc_card*) ;

__attribute__((used)) static int FUNC_3(struct mmc_card *VAR_1, struct mmc_blk_data *VAR_2)
{
 int VAR_3, VAR_4;

 if (!FUNC_2(VAR_1))
  return 0;

 for (VAR_3 = 0; VAR_3 < VAR_1->nr_parts; VAR_3++) {
  if (VAR_1->part[VAR_3].area_type & VAR_0) {






   VAR_4 = FUNC_1(VAR_1, VAR_2,
    VAR_1->part[VAR_3].part_cfg,
    VAR_1->part[VAR_3].size >> 9,
    VAR_1->part[VAR_3].name);
   if (VAR_4)
    return VAR_4;
  } else if (VAR_1->part[VAR_3].size) {
   VAR_4 = FUNC_0(VAR_1, VAR_2,
    VAR_1->part[VAR_3].part_cfg,
    VAR_1->part[VAR_3].size >> 9,
    VAR_1->part[VAR_3].force_ro,
    VAR_1->part[VAR_3].name,
    VAR_1->part[VAR_3].area_type);
   if (VAR_4)
    return VAR_4;
  }
 }

 return 0;
}
