
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ clu_srch_ptr; scalar_t__ num_clusters; scalar_t__ used_clusters; } ;
struct chain_t {scalar_t__ dir; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_3 (struct super_block*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (struct super_block*) ;

s32 FUNC_5(struct super_block *VAR_1, s32 VAR_2,
        struct chain_t *VAR_3)
{
 int VAR_4, VAR_5 = 0;
 u32 VAR_6, VAR_7 = FUNC_0(~0), VAR_8;
 struct fs_info_t *VAR_9 = &(FUNC_1(VAR_1)->fs_info);

 VAR_6 = VAR_3->dir;
 if (VAR_6 == FUNC_0(~0))
  VAR_6 = VAR_9->clu_srch_ptr;
 else if (VAR_6 >= VAR_9->num_clusters)
  VAR_6 = 2;

 FUNC_4(VAR_1);

 VAR_3->dir = FUNC_0(~0);

 for (VAR_4 = 2; VAR_4 < VAR_9->num_clusters; VAR_4++) {
  if (FUNC_2(VAR_1, VAR_6, &VAR_8) != 0)
   return -1;

  if (VAR_8 == FUNC_0(0)) {
   if (FUNC_3(VAR_1, VAR_6, FUNC_0(~0)) < 0)
    return -1;
   VAR_5++;

   if (VAR_3->dir == FUNC_0(~0)) {
    VAR_3->dir = VAR_6;
   } else {
    if (FUNC_3(VAR_1, VAR_7, VAR_6) < 0)
     return -1;
   }

   VAR_7 = VAR_6;

   if ((--VAR_2) == 0) {
    VAR_9->clu_srch_ptr = VAR_6;
    if (VAR_9->used_clusters != VAR_0)
     VAR_9->used_clusters += VAR_5;

    return VAR_5;
   }
  }
  if ((++VAR_6) >= VAR_9->num_clusters)
   VAR_6 = 2;
 }

 VAR_9->clu_srch_ptr = VAR_6;
 if (VAR_9->used_clusters != VAR_0)
  VAR_9->used_clusters += VAR_5;

 return VAR_5;
}
