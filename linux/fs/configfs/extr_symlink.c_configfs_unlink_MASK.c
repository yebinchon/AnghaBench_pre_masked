
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct dentry {int d_parent; struct configfs_dirent* d_fsdata; } ;
struct configfs_dirent {int s_type; int s_links; struct configfs_dirent* s_element; int s_sibling; } ;
struct config_item_type {TYPE_1__* ct_item_ops; } ;
struct config_item {struct config_item_type* ci_type; } ;
struct TYPE_2__ {int (* drop_link ) (struct config_item*,struct configfs_dirent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct config_item*) ;
 int VAR_2 ;
 int FUNC_1 (struct configfs_dirent*,int ) ;
 struct config_item* FUNC_2 (int ) ;
 int FUNC_3 (struct configfs_dirent*) ;
 int FUNC_4 (struct dentry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct config_item*,struct configfs_dirent*) ;

int FUNC_9(struct inode *VAR_3, struct dentry *VAR_4)
{
 struct configfs_dirent *VAR_5 = VAR_4->d_fsdata, *VAR_6;
 struct config_item *VAR_7;
 const struct config_item_type *VAR_8;
 int VAR_9;

 VAR_9 = -VAR_1;
 if (!(VAR_5->s_type & VAR_0))
  goto out;

 VAR_6 = VAR_5->s_element;

 VAR_7 = FUNC_2(VAR_4->d_parent);
 VAR_8 = VAR_7->ci_type;

 FUNC_6(&VAR_2);
 FUNC_5(&VAR_5->s_sibling);
 FUNC_7(&VAR_2);
 FUNC_1(VAR_5, VAR_4->d_parent);
 FUNC_4(VAR_4);
 FUNC_3(VAR_5);






 if (VAR_8 && VAR_8->ct_item_ops &&
     VAR_8->ct_item_ops->drop_link)
  VAR_8->ct_item_ops->drop_link(VAR_7,
            VAR_6->s_element);

 FUNC_6(&VAR_2);
 VAR_6->s_links--;
 FUNC_7(&VAR_2);
 FUNC_3(VAR_6);

 FUNC_0(VAR_7);

 VAR_9 = 0;

out:
 return VAR_9;
}
