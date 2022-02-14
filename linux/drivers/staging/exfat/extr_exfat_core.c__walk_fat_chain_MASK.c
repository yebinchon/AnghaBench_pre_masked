
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct super_block {int dummy; } ;
struct fs_info_t {int cluster_size_bits; } ;
struct chain_t {int dir; int flags; } ;
typedef int s32 ;
struct TYPE_2__ {struct fs_info_t fs_info; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct super_block*,int,int*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static s32 FUNC_2(struct super_block *VAR_2, struct chain_t *VAR_3,
      s32 VAR_4, u32 *VAR_5)
{
 struct fs_info_t *VAR_6 = &(FUNC_0(VAR_2)->fs_info);
 s32 VAR_7;
 u32 VAR_8;

 VAR_7 = VAR_4 >> VAR_6->cluster_size_bits;
 VAR_8 = VAR_3->dir;

 if (VAR_3->flags == 0x03) {
  VAR_8 += VAR_7;
 } else {
  while (VAR_7 > 0) {
   if (FUNC_1(VAR_2, VAR_8, &VAR_8) == -1)
    return VAR_0;
   VAR_7--;
  }
 }

 if (VAR_5)
  *VAR_5 = VAR_8;
 return VAR_1;
}
