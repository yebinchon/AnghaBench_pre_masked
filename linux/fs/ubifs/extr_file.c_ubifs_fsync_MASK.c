
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ubifs_info {scalar_t__ ro_mount; } ;
struct inode {int i_state; TYPE_3__* i_sb; int i_ino; } ;
struct file {TYPE_2__* f_mapping; } ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_1__* s_op; struct ubifs_info* s_fs_info; } ;
struct TYPE_5__ {struct inode* host; } ;
struct TYPE_4__ {int (* write_inode ) (struct inode*,int *) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct file*,int ,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (struct inode*,int *) ;
 int FUNC_5 (struct ubifs_info*,struct inode*) ;

int FUNC_6(struct file *VAR_1, loff_t VAR_2, loff_t VAR_3, int VAR_4)
{
 struct inode *VAR_5 = VAR_1->f_mapping->host;
 struct ubifs_info *VAR_6 = VAR_5->i_sb->s_fs_info;
 int VAR_7;

 FUNC_0("syncing inode %lu", VAR_5->i_ino);

 if (VAR_6->ro_mount)




  return 0;

 VAR_7 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_7)
  return VAR_7;
 FUNC_2(VAR_5);


 if (!VAR_4 || (VAR_5->i_state & VAR_0)) {
  VAR_7 = VAR_5->i_sb->s_op->write_inode(VAR_5, ((void*)0));
  if (VAR_7)
   goto out;
 }





 VAR_7 = FUNC_5(VAR_6, VAR_5);
out:
 FUNC_3(VAR_5);
 return VAR_7;
}
