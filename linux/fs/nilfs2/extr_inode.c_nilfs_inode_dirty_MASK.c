
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct the_nilfs {int ns_inode_lock; } ;
struct nilfs_inode_info {int i_state; int i_dirty; } ;
struct inode {TYPE_1__* i_sb; } ;
struct TYPE_2__ {struct the_nilfs* s_fs_info; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

int FUNC_5(struct inode *VAR_2)
{
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_2);
 struct the_nilfs *VAR_4 = VAR_2->i_sb->s_fs_info;
 int VAR_5 = 0;

 if (!FUNC_1(&VAR_3->i_dirty)) {
  FUNC_2(&VAR_4->ns_inode_lock);
  VAR_5 = FUNC_4(VAR_1, &VAR_3->i_state) ||
   FUNC_4(VAR_0, &VAR_3->i_state);
  FUNC_3(&VAR_4->ns_inode_lock);
 }
 return VAR_5;
}
