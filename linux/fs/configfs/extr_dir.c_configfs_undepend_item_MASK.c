
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct configfs_dirent {int s_dependent_count; } ;
struct config_item {TYPE_1__* ci_dentry; } ;
struct TYPE_2__ {struct configfs_dirent* d_fsdata; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct config_item *VAR_1)
{
 struct configfs_dirent *VAR_2;





 FUNC_1(&VAR_0);

 VAR_2 = VAR_1->ci_dentry->d_fsdata;
 FUNC_0(VAR_2->s_dependent_count < 1);

 VAR_2->s_dependent_count -= 1;





 FUNC_2(&VAR_0);
}
