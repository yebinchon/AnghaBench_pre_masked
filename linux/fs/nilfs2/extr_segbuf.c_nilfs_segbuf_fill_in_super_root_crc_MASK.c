
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct the_nilfs {int ns_inode_size; } ;
struct nilfs_super_root {int sr_sum; } ;
struct nilfs_segment_buffer {TYPE_2__* sb_super_root; TYPE_1__* sb_super; } ;
struct TYPE_4__ {scalar_t__ b_data; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,unsigned char*,unsigned int) ;

__attribute__((used)) static void
FUNC_3(struct nilfs_segment_buffer *VAR_0,
        u32 VAR_1)
{
 struct nilfs_super_root *VAR_2;
 struct the_nilfs *VAR_3 = VAR_0->sb_super->s_fs_info;
 unsigned int VAR_4;
 u32 VAR_5;

 VAR_2 = (struct nilfs_super_root *)VAR_0->sb_super_root->b_data;
 VAR_4 = FUNC_0(VAR_3->ns_inode_size);
 VAR_5 = FUNC_2(VAR_1,
         (unsigned char *)VAR_2 + sizeof(VAR_2->sr_sum),
         VAR_4 - sizeof(VAR_2->sr_sum));
 VAR_2->sr_sum = FUNC_1(VAR_5);
}
