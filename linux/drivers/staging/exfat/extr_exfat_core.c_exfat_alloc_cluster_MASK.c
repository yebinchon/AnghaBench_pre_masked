
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int clu_srch_ptr; int num_clusters; scalar_t__ used_clusters; } ;
struct chain_t {int dir; int flags; int size; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,int,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (struct super_block*) ;
 int FUNC_4 (struct super_block*,int,int) ;
 scalar_t__ FUNC_5 (struct super_block*,int) ;
 int FUNC_6 (struct super_block*,int) ;

s32 FUNC_7(struct super_block *VAR_2, s32 VAR_3,
   struct chain_t *VAR_4)
{
 s32 VAR_5 = 0;
 u32 VAR_6, VAR_7, VAR_8 = FUNC_0(~0);
 struct fs_info_t *VAR_9 = &(FUNC_1(VAR_2)->fs_info);

 VAR_6 = VAR_4->dir;
 if (VAR_6 == FUNC_0(~0)) {
  VAR_6 = FUNC_6(VAR_2, VAR_9->clu_srch_ptr - 2);
  if (VAR_6 == FUNC_0(~0))
   return 0;
 } else if (VAR_6 >= VAR_9->num_clusters) {
  VAR_6 = 2;
  VAR_4->flags = 0x01;
 }

 FUNC_3(VAR_2);

 VAR_4->dir = FUNC_0(~0);

 while ((VAR_7 = FUNC_6(VAR_2, VAR_6 - 2)) != FUNC_0(~0)) {
  if (VAR_7 != VAR_6) {
   if (VAR_4->flags == 0x03) {
    FUNC_4(VAR_2, VAR_4->dir,
        VAR_5);
    VAR_4->flags = 0x01;
   }
  }

  if (FUNC_5(VAR_2, VAR_7 - 2) != VAR_0)
   return -1;

  VAR_5++;

  if (VAR_4->flags == 0x01) {
   if (FUNC_2(VAR_2, VAR_7, FUNC_0(~0)) < 0)
    return -1;
  }

  if (VAR_4->dir == FUNC_0(~0)) {
   VAR_4->dir = VAR_7;
  } else {
   if (VAR_4->flags == 0x01) {
    if (FUNC_2(VAR_2, VAR_8, VAR_7) < 0)
     return -1;
   }
  }
  VAR_8 = VAR_7;

  if ((--VAR_3) == 0) {
   VAR_9->clu_srch_ptr = VAR_6;
   if (VAR_9->used_clusters != VAR_1)
    VAR_9->used_clusters += VAR_5;

   VAR_4->size += VAR_5;
   return VAR_5;
  }

  VAR_6 = VAR_7 + 1;
  if (VAR_6 >= VAR_9->num_clusters) {
   VAR_6 = 2;

   if (VAR_4->flags == 0x03) {
    FUNC_4(VAR_2, VAR_4->dir,
        VAR_5);
    VAR_4->flags = 0x01;
   }
  }
 }

 VAR_9->clu_srch_ptr = VAR_6;
 if (VAR_9->used_clusters != VAR_1)
  VAR_9->used_clusters += VAR_5;

 VAR_4->size += VAR_5;
 return VAR_5;
}
