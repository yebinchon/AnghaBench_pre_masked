
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct path {int dummy; } ;
struct inode {int dummy; } ;
struct dentry {scalar_t__ d_inode; int d_sb; TYPE_2__* d_parent; } ;
struct configfs_dirent {int dummy; } ;
struct config_item_type {TYPE_1__* ct_item_ops; } ;
struct config_item {struct config_item_type* ci_type; } ;
struct TYPE_4__ {struct configfs_dirent* d_fsdata; } ;
struct TYPE_3__ {int (* allow_link ) (struct config_item*,struct config_item*) ;int (* drop_link ) (struct config_item*,struct config_item*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (struct configfs_dirent*) ;
 struct config_item* FUNC_2 (TYPE_2__*) ;
 int VAR_5 ;
 int FUNC_3 (struct config_item*,struct config_item*,struct dentry*) ;
 scalar_t__ FUNC_4 (struct dentry*) ;
 int FUNC_5 (char const*,struct path*,struct config_item**,int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct inode*,int) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct path*) ;
 int FUNC_12 (struct config_item*,struct config_item*) ;
 int FUNC_13 (struct config_item*,struct config_item*) ;

int FUNC_14(struct inode *VAR_6, struct dentry *VAR_7, const char *VAR_8)
{
 int VAR_9;
 struct path VAR_10;
 struct configfs_dirent *VAR_11;
 struct config_item *VAR_12;
 struct config_item *VAR_13 = ((void*)0);
 const struct config_item_type *VAR_14;

 VAR_11 = VAR_7->d_parent->d_fsdata;




 if (!FUNC_1(VAR_11))
  return -VAR_1;

 VAR_12 = FUNC_2(VAR_7->d_parent);
 VAR_14 = VAR_12->ci_type;

 VAR_9 = -VAR_2;
 if (!VAR_14 || !VAR_14->ct_item_ops ||
     !VAR_14->ct_item_ops->allow_link)
  goto out_put;
 FUNC_8(VAR_6);
 VAR_9 = FUNC_5(VAR_8, &VAR_10, &VAR_13, VAR_7->d_sb);
 FUNC_6(VAR_6);
 if (VAR_9)
  goto out_put;

 if (VAR_7->d_inode || FUNC_4(VAR_7))
  VAR_9 = -VAR_0;
 else
  VAR_9 = FUNC_7(VAR_6, VAR_4 | VAR_3);
 if (!VAR_9)
  VAR_9 = VAR_14->ct_item_ops->allow_link(VAR_12, VAR_13);
 if (!VAR_9) {
  FUNC_9(&VAR_5);
  VAR_9 = FUNC_3(VAR_12, VAR_13, VAR_7);
  FUNC_10(&VAR_5);
  if (VAR_9 && VAR_14->ct_item_ops->drop_link)
   VAR_14->ct_item_ops->drop_link(VAR_12,
           VAR_13);
 }

 FUNC_0(VAR_13);
 FUNC_11(&VAR_10);

out_put:
 FUNC_0(VAR_12);
 return VAR_9;
}
