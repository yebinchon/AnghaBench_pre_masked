
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ocfs2_super {struct inode* root_inode; } ;
struct inode {scalar_t__ i_nlink; int i_mode; } ;
struct TYPE_3__ {int name; int len; } ;
struct dentry {scalar_t__ d_fsdata; TYPE_1__ d_name; int d_lock; struct dentry* d_parent; int d_sb; } ;
struct TYPE_4__ {unsigned long ip_dir_lock_gen; int ip_flags; scalar_t__ ip_blkno; int ip_lock; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 TYPE_2__* FUNC_1 (struct inode*) ;
 int VAR_2 ;
 struct ocfs2_super* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct inode* FUNC_4 (struct dentry*) ;
 scalar_t__ FUNC_5 (struct inode*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dentry*,int ,int ) ;
 int FUNC_9 (unsigned long long) ;
 int FUNC_10 (int ,int ,unsigned long,unsigned long) ;
 int FUNC_11 (unsigned long long) ;
 int FUNC_12 (unsigned long long,int ) ;
 int FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct dentry *VAR_3, unsigned int VAR_4)
{
 struct inode *VAR_5;
 int VAR_6 = 0;
 struct ocfs2_super *VAR_7;

 if (VAR_4 & VAR_1)
  return -VAR_0;

 VAR_5 = FUNC_4(VAR_3);
 VAR_7 = FUNC_2(VAR_3->d_sb);

 FUNC_8(VAR_3, VAR_3->d_name.len,
          VAR_3->d_name.name);





 if (VAR_5 == ((void*)0)) {
  unsigned long VAR_8 = (unsigned long) VAR_3->d_fsdata;
  unsigned long VAR_9;
  FUNC_6(&VAR_3->d_lock);
  VAR_9 = FUNC_1(FUNC_4(VAR_3->d_parent))->ip_dir_lock_gen;
  FUNC_7(&VAR_3->d_lock);
  FUNC_10(VAR_3->d_name.len,
             VAR_3->d_name.name,
             VAR_9, VAR_8);
  if (VAR_8 != VAR_9)
   goto bail;
  goto valid;
 }

 FUNC_0(!VAR_7);

 if (VAR_5 == VAR_7->root_inode || FUNC_5(VAR_5))
  goto bail;

 FUNC_6(&FUNC_1(VAR_5)->ip_lock);

 if (FUNC_1(VAR_5)->ip_flags & VAR_2) {
  FUNC_7(&FUNC_1(VAR_5)->ip_lock);
  FUNC_9(
    (unsigned long long)FUNC_1(VAR_5)->ip_blkno);
  goto bail;
 }
 FUNC_7(&FUNC_1(VAR_5)->ip_lock);





 if (VAR_5->i_nlink == 0) {
  FUNC_12(
   (unsigned long long)FUNC_1(VAR_5)->ip_blkno,
   FUNC_3(VAR_5->i_mode));
  goto bail;
 }





 if (!VAR_3->d_fsdata) {
  FUNC_11(
    (unsigned long long)FUNC_1(VAR_5)->ip_blkno);
  goto bail;
 }

valid:
 VAR_6 = 1;

bail:
 FUNC_13(VAR_6);
 return VAR_6;
}
