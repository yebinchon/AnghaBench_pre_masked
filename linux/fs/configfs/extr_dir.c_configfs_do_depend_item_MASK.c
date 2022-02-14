
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dentry {int dummy; } ;
struct configfs_dirent {int s_dependent_count; } ;
struct config_item {TYPE_1__* ci_dentry; } ;
struct TYPE_2__ {struct configfs_dirent* d_fsdata; } ;


 int FUNC_0 (struct dentry*,struct config_item*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dentry *VAR_1,
       struct config_item *VAR_2)
{
 struct configfs_dirent *VAR_3;
 int VAR_4;

 FUNC_1(&VAR_0);

 VAR_4 = FUNC_0(VAR_1, VAR_2);
 if (VAR_4)
  goto out_unlock_dirent_lock;





 VAR_3 = VAR_2->ci_dentry->d_fsdata;
 VAR_3->s_dependent_count += 1;

out_unlock_dirent_lock:
 FUNC_2(&VAR_0);

 return VAR_4;
}
