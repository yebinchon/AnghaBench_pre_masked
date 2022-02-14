
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int s_blocksize; } ;
struct ext2_super_block {int s_free_blocks_count; } ;
struct ext2_group_desc {int bg_free_blocks_count; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int s_groups_count; struct ext2_super_block* s_es; } ;


 TYPE_1__* FUNC_0 (struct super_block*) ;
 int FUNC_1 (struct buffer_head*) ;
 unsigned long FUNC_2 (struct buffer_head*,int ) ;
 struct ext2_group_desc* FUNC_3 (struct super_block*,int,int *) ;
 unsigned long FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*,long,unsigned long,unsigned long) ;
 struct buffer_head* FUNC_7 (struct super_block*,int) ;

unsigned long FUNC_8 (struct super_block * VAR_0)
{
 struct ext2_group_desc * VAR_1;
 unsigned long VAR_2 = 0;
 int VAR_3;
        for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_0)->s_groups_count; VAR_3++) {
                VAR_1 = FUNC_3 (VAR_0, VAR_3, ((void*)0));
                if (!VAR_1)
                        continue;
                VAR_2 += FUNC_4(VAR_1->bg_free_blocks_count);
 }
 return VAR_2;

}
