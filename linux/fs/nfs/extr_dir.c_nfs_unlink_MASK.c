
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_ino; TYPE_1__* i_sb; } ;
struct dentry {int d_lock; } ;
struct TYPE_2__ {int s_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dentry*) ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int ,char*,int ,int ,struct dentry*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct inode*) ;
 int FUNC_8 (struct dentry*,int ) ;
 int FUNC_9 (struct inode*,struct dentry*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct inode*,struct dentry*) ;
 int FUNC_13 (struct inode*,struct dentry*,int) ;
 int FUNC_14 (int ,int ) ;

int FUNC_15(struct inode *VAR_2, struct dentry *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 FUNC_5(VAR_1, "NFS: unlink(%s/%lu, %pd)\n", VAR_2->i_sb->s_id,
  VAR_2->i_ino, VAR_3);

 FUNC_12(VAR_2, VAR_3);
 FUNC_10(&VAR_3->d_lock);
 if (FUNC_1(VAR_3) > 1) {
  FUNC_11(&VAR_3->d_lock);

  FUNC_14(FUNC_2(VAR_3), 0);
  VAR_4 = FUNC_9(VAR_2, VAR_3);
  goto out;
 }
 if (!FUNC_4(VAR_3)) {
  FUNC_0(VAR_3);
  VAR_5 = 1;
 }
 FUNC_11(&VAR_3->d_lock);
 VAR_4 = FUNC_6(VAR_3);
 if (!VAR_4 || VAR_4 == -VAR_0) {
  FUNC_8(VAR_3, FUNC_7(VAR_2));
 } else if (VAR_5)
  FUNC_3(VAR_3);
out:
 FUNC_13(VAR_2, VAR_3, VAR_4);
 return VAR_4;
}
