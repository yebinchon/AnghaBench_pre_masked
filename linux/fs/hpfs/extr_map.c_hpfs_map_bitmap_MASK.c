
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct quad_buffer_head {int dummy; } ;
typedef int secno ;
typedef int __le32 ;
struct TYPE_2__ {int sb_fs_size; int * sb_bmp_dir; scalar_t__ sb_chk; } ;


 int FUNC_0 (struct super_block*,char*,unsigned int,...) ;
 int * FUNC_1 (struct super_block*,int,struct quad_buffer_head*,int) ;
 int FUNC_2 (struct super_block*,unsigned int) ;
 TYPE_1__* FUNC_3 (struct super_block*) ;
 int FUNC_4 (int ) ;

__le32 *FUNC_5(struct super_block *VAR_0, unsigned VAR_1,
    struct quad_buffer_head *VAR_2, char *VAR_3)
{
 secno VAR_4;
 __le32 *VAR_5;
 unsigned VAR_6 = (FUNC_3(VAR_0)->sb_fs_size + 0x3fff) >> 14;
 if (FUNC_3(VAR_0)->sb_chk) if (VAR_1 >= VAR_6) {
  FUNC_0(VAR_0, "hpfs_map_bitmap called with bad parameter: %08x at %s", VAR_1, VAR_3);
  return ((void*)0);
 }
 VAR_4 = FUNC_4(FUNC_3(VAR_0)->sb_bmp_dir[VAR_1]);
 if (!VAR_4 || VAR_4 > FUNC_3(VAR_0)->sb_fs_size-4) {
  FUNC_0(VAR_0, "invalid bitmap block pointer %08x -> %08x at %s", VAR_1, VAR_4, VAR_3);
  return ((void*)0);
 }
 VAR_5 = FUNC_1(VAR_0, VAR_4, VAR_2, 4);
 if (VAR_5) FUNC_2(VAR_0, VAR_1 + 1);
 return VAR_5;
}
