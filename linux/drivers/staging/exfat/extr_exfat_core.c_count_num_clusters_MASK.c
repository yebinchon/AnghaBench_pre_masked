
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int num_clusters; } ;
struct chain_t {scalar_t__ dir; int flags; int size; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,scalar_t__,scalar_t__*) ;

s32 FUNC_3(struct super_block *VAR_0, struct chain_t *VAR_1)
{
 int VAR_2, VAR_3 = 0;
 u32 VAR_4;
 struct fs_info_t *VAR_5 = &(FUNC_1(VAR_0)->fs_info);

 if ((VAR_1->dir == FUNC_0(0)) || (VAR_1->dir == FUNC_0(~0)))
  return 0;

 VAR_4 = VAR_1->dir;

 if (VAR_1->flags == 0x03) {
  VAR_3 = VAR_1->size;
 } else {
  for (VAR_2 = 2; VAR_2 < VAR_5->num_clusters; VAR_2++) {
   VAR_3++;
   if (FUNC_2(VAR_0, VAR_4, &VAR_4) != 0)
    return 0;
   if (VAR_4 == FUNC_0(~0))
    break;
  }
 }

 return VAR_3;
}
