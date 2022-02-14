
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct list_head {int dummy; } ;
struct inode {int dummy; } ;
struct TYPE_2__ {int len; int name; } ;
struct dentry {int d_parent; TYPE_1__ d_name; struct inode* d_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dentry*) ;
 int VAR_1 ;
 int FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;
 int FUNC_3 (struct dentry*) ;
 int FUNC_4 (struct inode*,int ) ;
 int FUNC_5 (struct inode*) ;
 int FUNC_6 (struct list_head*) ;
 struct dentry* FUNC_7 (int ,struct dentry*,int ) ;
 struct dentry* FUNC_8 (struct dentry*,struct list_head*) ;
 struct dentry* FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct dentry*,struct dentry*) ;
 int FUNC_12 (struct dentry*) ;
 int FUNC_13 (struct inode*,struct dentry*) ;
 int FUNC_14 (struct inode*,struct dentry*,int *) ;

__attribute__((used)) static int FUNC_15(struct dentry *VAR_2, bool VAR_3,
       struct list_head *VAR_4)
{
 struct dentry *VAR_5 = FUNC_9(VAR_2->d_parent);
 struct inode *VAR_6 = VAR_5->d_inode;
 struct dentry *VAR_7;
 struct dentry *VAR_8 = ((void*)0);
 int VAR_9;

 if (!FUNC_6(VAR_4)) {
  VAR_8 = FUNC_8(VAR_2, VAR_4);
  VAR_9 = FUNC_1(VAR_8);
  if (FUNC_0(VAR_8))
   goto out;
 }

 FUNC_4(VAR_6, VAR_1);
 VAR_7 = FUNC_7(VAR_2->d_name.name, VAR_5,
          VAR_2->d_name.len);
 VAR_9 = FUNC_1(VAR_7);
 if (FUNC_0(VAR_7))
  goto out_unlock;

 VAR_9 = -VAR_0;
 if ((VAR_8 && VAR_7 != VAR_8) ||
     (!VAR_8 && !FUNC_11(VAR_2, VAR_7)))
  goto out_dput_upper;

 if (VAR_3)
  VAR_9 = FUNC_13(VAR_6, VAR_7);
 else
  VAR_9 = FUNC_14(VAR_6, VAR_7, ((void*)0));
 FUNC_10(VAR_2->d_parent, FUNC_12(VAR_2));







 if (!VAR_9)
  FUNC_2(VAR_2);
out_dput_upper:
 FUNC_3(VAR_7);
out_unlock:
 FUNC_5(VAR_6);
 FUNC_3(VAR_8);
out:
 return VAR_9;
}
