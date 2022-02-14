
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct proc_dir_entry {TYPE_1__* proc_fops; scalar_t__ proc_iops; scalar_t__ nlink; scalar_t__ size; int gid; int uid; scalar_t__ mode; int low_ino; } ;
struct inode {TYPE_1__* i_fop; scalar_t__ i_mode; scalar_t__ i_op; scalar_t__ i_size; int i_gid; int i_uid; int i_ctime; int i_atime; int i_mtime; int i_ino; } ;
struct TYPE_5__ {struct proc_dir_entry* pde; } ;
struct TYPE_4__ {int compat_ioctl; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct inode*) ;
 scalar_t__ FUNC_4 (struct proc_dir_entry*) ;
 int FUNC_5 (struct inode*) ;
 struct inode* FUNC_6 (struct super_block*) ;
 int FUNC_7 (struct proc_dir_entry*) ;
 TYPE_1__ VAR_0 ;
 TYPE_1__ VAR_1 ;
 int FUNC_8 (struct inode*,scalar_t__) ;

struct inode *FUNC_9(struct super_block *VAR_2, struct proc_dir_entry *VAR_3)
{
 struct inode *VAR_4 = FUNC_6(VAR_2);

 if (VAR_4) {
  VAR_4->i_ino = VAR_3->low_ino;
  VAR_4->i_mtime = VAR_4->i_atime = VAR_4->i_ctime = FUNC_3(VAR_4);
  FUNC_0(VAR_4)->pde = VAR_3;

  if (FUNC_4(VAR_3)) {
   FUNC_5(VAR_4);
   return VAR_4;
  }
  if (VAR_3->mode) {
   VAR_4->i_mode = VAR_3->mode;
   VAR_4->i_uid = VAR_3->uid;
   VAR_4->i_gid = VAR_3->gid;
  }
  if (VAR_3->size)
   VAR_4->i_size = VAR_3->size;
  if (VAR_3->nlink)
   FUNC_8(VAR_4, VAR_3->nlink);
  FUNC_2(!VAR_3->proc_iops);
  VAR_4->i_op = VAR_3->proc_iops;
  if (VAR_3->proc_fops) {
   if (FUNC_1(VAR_4->i_mode)) {






     VAR_4->i_fop = &VAR_0;
   } else {
    VAR_4->i_fop = VAR_3->proc_fops;
   }
  }
 } else
        FUNC_7(VAR_3);
 return VAR_4;
}
