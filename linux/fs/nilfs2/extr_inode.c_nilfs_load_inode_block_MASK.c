
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_inode_lock; } ;
struct nilfs_inode_info {struct buffer_head* i_bh; TYPE_2__* i_root; } ;
struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct buffer_head {int dummy; } ;
struct TYPE_4__ {int ifile; } ;
struct TYPE_3__ {struct the_nilfs* s_fs_info; } ;


 struct nilfs_inode_info* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int ,int ,struct buffer_head**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

int FUNC_7(struct inode *VAR_0, struct buffer_head **VAR_1)
{
 struct the_nilfs *VAR_2 = VAR_0->i_sb->s_fs_info;
 struct nilfs_inode_info *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;

 FUNC_4(&VAR_2->ns_inode_lock);
 if (VAR_3->i_bh == ((void*)0)) {
  FUNC_5(&VAR_2->ns_inode_lock);
  VAR_4 = FUNC_3(VAR_3->i_root->ifile,
        VAR_0->i_ino, VAR_1);
  if (FUNC_6(VAR_4))
   return VAR_4;
  FUNC_4(&VAR_2->ns_inode_lock);
  if (VAR_3->i_bh == ((void*)0))
   VAR_3->i_bh = *VAR_1;
  else {
   FUNC_1(*VAR_1);
   *VAR_1 = VAR_3->i_bh;
  }
 } else
  *VAR_1 = VAR_3->i_bh;

 FUNC_2(*VAR_1);
 FUNC_5(&VAR_2->ns_inode_lock);
 return 0;
}
