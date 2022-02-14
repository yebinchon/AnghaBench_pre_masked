
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocfs2_lock_holder {int dummy; } ;
struct inode {int i_mode; int i_sb; } ;
struct dentry {int d_name; } ;
struct buffer_head {int dummy; } ;
struct TYPE_2__ {int ip_xattr_sem; int ip_alloc_sem; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dentry*,struct buffer_head*,struct inode*,int) ;
 int FUNC_3 (struct buffer_head*) ;
 struct inode* FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct inode*,int ,struct inode**) ;
 int FUNC_9 (struct inode*,struct inode*,int *) ;
 int FUNC_10 (struct inode*,struct buffer_head**,int) ;
 int FUNC_11 (struct inode*,int *,int,struct ocfs2_lock_holder*) ;
 int FUNC_12 (struct inode*,int) ;
 int FUNC_13 (struct inode*,int,struct ocfs2_lock_holder*,int) ;
 int FUNC_14 (struct inode*,struct inode*,struct dentry*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct inode*,int) ;
 int FUNC_18 (struct inode*,int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct dentry *VAR_1, struct inode *VAR_2,
    struct dentry *VAR_3, bool VAR_4)
{
 int VAR_5, VAR_6;
 struct inode *VAR_7 = FUNC_4(VAR_1);
 struct buffer_head *VAR_8 = ((void*)0);
 struct inode *VAR_9 = ((void*)0);
 struct ocfs2_lock_holder VAR_10;

 if (!FUNC_16(FUNC_1(VAR_7->i_sb)))
  return -VAR_0;


 VAR_5 = FUNC_8(VAR_2, VAR_7->i_mode,
          &VAR_9);
 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_17(VAR_7, 1);
 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out;
 }

 VAR_5 = FUNC_10(VAR_7, &VAR_8, 1);
 if (VAR_5) {
  FUNC_7(VAR_5);
  FUNC_18(VAR_7, 1);
  goto out;
 }

 FUNC_5(&FUNC_0(VAR_7)->ip_xattr_sem);
 FUNC_5(&FUNC_0(VAR_7)->ip_alloc_sem);
 VAR_5 = FUNC_2(VAR_1, VAR_8,
    VAR_9, VAR_4);
 FUNC_19(&FUNC_0(VAR_7)->ip_alloc_sem);
 FUNC_19(&FUNC_0(VAR_7)->ip_xattr_sem);

 FUNC_12(VAR_7, 1);
 FUNC_18(VAR_7, 1);
 FUNC_3(VAR_8);

 if (VAR_5) {
  FUNC_7(VAR_5);
  goto out;
 }

 VAR_6 = FUNC_11(VAR_9, ((void*)0), 1,
         &VAR_10);
 if (VAR_6 < 0) {
  VAR_5 = VAR_6;
  FUNC_7(VAR_5);
  goto out;
 }


 if (!VAR_4) {
  VAR_5 = FUNC_9(VAR_2, VAR_9,
          &VAR_3->d_name);
  if (VAR_5)
   FUNC_7(VAR_5);
 }
 if (!VAR_5) {
  VAR_5 = FUNC_14(VAR_2, VAR_9,
             VAR_3);
  if (VAR_5)
   FUNC_7(VAR_5);
 }
 FUNC_13(VAR_9, 1, &VAR_10, VAR_6);

out:
 if (VAR_9) {




  FUNC_15(VAR_9);
  if (VAR_5)
   FUNC_6(VAR_9);
 }

 return VAR_5;
}
