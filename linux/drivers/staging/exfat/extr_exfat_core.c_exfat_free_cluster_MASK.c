
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int sectors_per_clu; scalar_t__ used_clusters; scalar_t__ dev_ejected; } ;
struct chain_t {scalar_t__ dir; scalar_t__ size; int flags; } ;
typedef scalar_t__ sector_t ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 int FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct super_block*) ;
 int FUNC_5 (struct super_block*,scalar_t__) ;
 scalar_t__ FUNC_6 (struct super_block*,scalar_t__) ;
 int FUNC_7 (char*,scalar_t__) ;

void FUNC_8(struct super_block *VAR_2, struct chain_t *VAR_3,
   s32 VAR_4)
{
 s32 VAR_5 = 0;
 u32 VAR_6;
 struct fs_info_t *VAR_7 = &(FUNC_1(VAR_2)->fs_info);
 int VAR_8;
 sector_t VAR_9;

 if ((VAR_3->dir == FUNC_0(0)) || (VAR_3->dir == FUNC_0(~0)))
  return;

 if (VAR_3->size <= 0) {
  FUNC_7("[EXFAT] free_cluster : skip free-req clu:%u, because of zero-size truncation\n",
         VAR_3->dir);
  return;
 }

 FUNC_4(VAR_2);
 VAR_6 = VAR_3->dir;

 if (VAR_3->flags == 0x03) {
  do {
   if (VAR_4) {
    VAR_9 = FUNC_3(VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_7->sectors_per_clu; VAR_8++)
     FUNC_5(VAR_2, VAR_9 + VAR_8);
   }

   if (FUNC_6(VAR_2, VAR_6 - 2) != VAR_0)
    break;
   VAR_6++;

   VAR_5++;
  } while (VAR_5 < VAR_3->size);
 } else {
  do {
   if (VAR_7->dev_ejected)
    break;

   if (VAR_4) {
    VAR_9 = FUNC_3(VAR_6);
    for (VAR_8 = 0; VAR_8 < VAR_7->sectors_per_clu; VAR_8++)
     FUNC_5(VAR_2, VAR_9 + VAR_8);
   }

   if (FUNC_6(VAR_2, VAR_6 - 2) != VAR_0)
    break;

   if (FUNC_2(VAR_2, VAR_6, &VAR_6) == -1)
    break;
   VAR_5++;
  } while ((VAR_6 != FUNC_0(0)) && (VAR_6 != FUNC_0(~0)));
 }

 if (VAR_7->used_clusters != VAR_1)
  VAR_7->used_clusters -= VAR_5;
}
