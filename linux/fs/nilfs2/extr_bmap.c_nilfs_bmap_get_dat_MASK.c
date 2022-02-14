
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {struct inode* ns_dat; } ;
struct nilfs_bmap {TYPE_2__* b_inode; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* i_sb; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;



struct inode *FUNC_0(const struct nilfs_bmap *VAR_0)
{
 struct the_nilfs *VAR_1 = VAR_0->b_inode->i_sb->s_fs_info;

 return VAR_1->ns_dat;
}
