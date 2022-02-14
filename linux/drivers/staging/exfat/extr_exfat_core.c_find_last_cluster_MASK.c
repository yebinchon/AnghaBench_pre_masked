
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {scalar_t__ dev_ejected; } ;
struct chain_t {int dir; int flags; int size; } ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (struct super_block*) ;
 scalar_t__ FUNC_2 (struct super_block*,int,int*) ;

u32 FUNC_3(struct super_block *VAR_0, struct chain_t *VAR_1)
{
 u32 VAR_2, VAR_3;
 struct fs_info_t *VAR_4 = &(FUNC_1(VAR_0)->fs_info);

 VAR_2 = VAR_1->dir;

 if (VAR_1->flags == 0x03) {
  VAR_2 += VAR_1->size - 1;
 } else {
  while ((FUNC_2(VAR_0, VAR_2, &VAR_3) == 0) &&
         (VAR_3 != FUNC_0(~0))) {
   if (VAR_4->dev_ejected)
    break;
   VAR_2 = VAR_3;
  }
 }

 return VAR_2;
}
