
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int sectors_per_clu; scalar_t__ used_clusters; scalar_t__ dev_ejected; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (struct super_block*) ;
 int FUNC_6 (struct super_block*,scalar_t__) ;

void FUNC_7(struct super_block *VAR_1, struct chain_t *VAR_2,
        s32 VAR_3)
{
 s32 VAR_4 = 0;
 u32 VAR_5, VAR_6;
 struct fs_info_t *VAR_7 = &(FUNC_1(VAR_1)->fs_info);
 int VAR_8;
 sector_t VAR_9;

 if ((VAR_2->dir == FUNC_0(0)) || (VAR_2->dir == FUNC_0(~0)))
  return;
 FUNC_5(VAR_1);
 VAR_5 = VAR_2->dir;

 if (VAR_2->size <= 0)
  return;

 do {
  if (VAR_7->dev_ejected)
   break;

  if (VAR_3) {
   VAR_9 = FUNC_4(VAR_5);
   for (VAR_8 = 0; VAR_8 < VAR_7->sectors_per_clu; VAR_8++)
    FUNC_6(VAR_1, VAR_9 + VAR_8);
  }

  VAR_6 = VAR_5;
  if (FUNC_2(VAR_1, VAR_5, &VAR_5) == -1)
   break;

  if (FUNC_3(VAR_1, VAR_6, FUNC_0(0)) < 0)
   break;
  VAR_4++;

 } while (VAR_5 != FUNC_0(~0));

 if (VAR_7->used_clusters != VAR_0)
  VAR_7->used_clusters -= VAR_4;
}
