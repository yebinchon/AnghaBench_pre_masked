
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int num_clusters; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 scalar_t__ FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,int,scalar_t__*) ;

s32 FUNC_3(struct super_block *VAR_0)
{
 int VAR_1, VAR_2 = 0;
 u32 VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_1(VAR_0)->fs_info);

 for (VAR_1 = 2; VAR_1 < VAR_4->num_clusters; VAR_1++) {
  if (FUNC_2(VAR_0, VAR_1, &VAR_3) != 0)
   break;
  if (VAR_3 != FUNC_0(0))
   VAR_2++;
 }

 return VAR_2;
}
