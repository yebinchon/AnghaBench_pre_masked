
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int umode_t ;
struct inode {int * i_fop; int * i_op; } ;
struct TYPE_2__ {int name; } ;
struct dentry {int d_fsdata; TYPE_1__ d_name; struct dentry* d_parent; } ;
struct configfs_fragment {int dummy; } ;
struct config_item {struct dentry* ci_dentry; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct inode* FUNC_3 (struct dentry*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,struct dentry*,struct config_item*,int,int,struct configfs_fragment*) ;
 int FUNC_6 (struct dentry*) ;
 int FUNC_7 (int ,int ) ;
 struct inode* FUNC_8 (struct dentry*) ;
 int FUNC_9 (struct dentry*,struct inode*) ;
 int FUNC_10 (struct dentry*) ;
 int FUNC_11 (struct inode*) ;
 scalar_t__ FUNC_12 (int) ;

__attribute__((used)) static int FUNC_13(struct config_item *VAR_8, struct dentry *VAR_9,
    struct configfs_fragment *VAR_10)
{
 int VAR_11;
 umode_t VAR_12 = VAR_2| VAR_4 | VAR_3 | VAR_5;
 struct dentry *VAR_13 = VAR_9->d_parent;
 struct inode *VAR_14;

 FUNC_0(!VAR_8);

 VAR_11 = FUNC_4(VAR_13->d_fsdata, VAR_9->d_name.name);
 if (FUNC_12(VAR_11))
  return VAR_11;

 VAR_11 = FUNC_5(VAR_13->d_fsdata, VAR_9, VAR_8, VAR_12,
         VAR_0 | VAR_1,
         VAR_10);
 if (FUNC_12(VAR_11))
  return VAR_11;

 FUNC_7(VAR_13->d_fsdata, VAR_9->d_fsdata);
 VAR_14 = FUNC_3(VAR_9, VAR_12);
 if (FUNC_1(VAR_14))
  goto out_remove;

 VAR_14->i_op = &VAR_6;
 VAR_14->i_fop = &VAR_7;

 FUNC_11(VAR_14);
 FUNC_9(VAR_9, VAR_14);

 FUNC_10(VAR_9);
 FUNC_11(FUNC_8(VAR_13));
 VAR_8->ci_dentry = VAR_9;
 return 0;

out_remove:
 FUNC_6(VAR_9);
 return FUNC_2(VAR_14);
}
