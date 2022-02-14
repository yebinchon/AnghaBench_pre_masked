
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct path {struct dentry* dentry; } ;
struct list_head {int dummy; } ;
struct kstat {int mode; } ;
struct inode {int dummy; } ;
struct dentry {struct inode* d_inode; TYPE_1__* d_parent; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dentry* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct dentry*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct dentry*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (struct dentry*) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (struct inode*,struct dentry*) ;
 int FUNC_11 (struct dentry*,struct list_head*) ;
 int FUNC_12 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_13 (struct dentry*,int ) ;
 struct dentry* FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (struct inode*,struct dentry*,struct inode*,struct dentry*,int ) ;
 int FUNC_16 (struct dentry*,struct dentry*) ;
 int FUNC_17 (struct dentry*,struct path*) ;
 int FUNC_18 (struct dentry*,struct kstat*) ;
 int FUNC_19 (struct dentry*,struct dentry*) ;
 struct dentry* FUNC_20 (struct dentry*) ;
 int FUNC_21 (struct dentry*,struct dentry*) ;
 int FUNC_22 (struct path*,struct kstat*,int ,int ) ;

__attribute__((used)) static struct dentry *FUNC_23(struct dentry *VAR_5,
          struct list_head *VAR_6)
{
 struct dentry *VAR_7 = FUNC_20(VAR_5);
 struct inode *VAR_8 = VAR_7->d_inode;
 struct dentry *VAR_9 = FUNC_14(VAR_5->d_parent);
 struct inode *VAR_10 = VAR_9->d_inode;
 struct path VAR_11;
 struct dentry *VAR_12;
 struct dentry *VAR_13;
 struct kstat VAR_14;
 int VAR_15;

 if (FUNC_5(!VAR_7))
  return FUNC_0(-VAR_1);

 VAR_15 = FUNC_16(VAR_7, VAR_9);
 if (VAR_15)
  goto out;

 FUNC_17(VAR_5, &VAR_11);
 VAR_15 = FUNC_22(&VAR_11, &VAR_14,
     VAR_4, VAR_0);
 if (VAR_15)
  goto out_unlock;

 VAR_15 = -VAR_2;
 if (!FUNC_4(VAR_14.mode))
  goto out_unlock;
 VAR_12 = VAR_11.dentry;
 if (VAR_12->d_parent->d_inode != VAR_10)
  goto out_unlock;

 VAR_13 = FUNC_13(VAR_7, FUNC_2(VAR_14.mode));
 VAR_15 = FUNC_3(VAR_13);
 if (FUNC_1(VAR_13))
  goto out_unlock;

 VAR_15 = FUNC_12(VAR_12, VAR_13);
 if (VAR_15)
  goto out_cleanup;

 VAR_15 = FUNC_19(VAR_5, VAR_13);
 if (VAR_15)
  goto out_cleanup;

 FUNC_8(VAR_13->d_inode);
 VAR_15 = FUNC_18(VAR_13, &VAR_14);
 FUNC_9(VAR_13->d_inode);
 if (VAR_15)
  goto out_cleanup;

 VAR_15 = FUNC_15(VAR_8, VAR_13, VAR_10, VAR_12, VAR_3);
 if (VAR_15)
  goto out_cleanup;

 FUNC_11(VAR_12, VAR_6);
 FUNC_10(VAR_8, VAR_12);
 FUNC_21(VAR_7, VAR_9);


 FUNC_6(VAR_5);

 return VAR_13;

out_cleanup:
 FUNC_10(VAR_8, VAR_13);
 FUNC_7(VAR_13);
out_unlock:
 FUNC_21(VAR_7, VAR_9);
out:
 return FUNC_0(VAR_15);
}
