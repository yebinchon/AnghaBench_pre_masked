
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mutex {int dummy; } ;
struct f_uvc_opts {int control_interface; struct mutex lock; } ;
struct config_item {struct config_item* ci_parent; } ;
struct config_group {TYPE_1__* cg_subsys; } ;
typedef int ssize_t ;
struct TYPE_2__ {struct mutex su_mutex; } ;


 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct config_group* FUNC_3 (struct config_item*) ;
 struct f_uvc_opts* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(
 struct config_item *VAR_0, char *VAR_1)
{
 struct config_group *VAR_2 = FUNC_3(VAR_0);
 struct mutex *VAR_3 = &VAR_2->cg_subsys->su_mutex;
 struct config_item *VAR_4;
 struct f_uvc_opts *VAR_5;
 int VAR_6 = 0;

 FUNC_0(VAR_3);

 VAR_4 = VAR_0->ci_parent;
 VAR_5 = FUNC_4(VAR_4);

 FUNC_0(&VAR_5->lock);
 VAR_6 += FUNC_2(VAR_1, "%u\n", VAR_5->control_interface);
 FUNC_1(&VAR_5->lock);

 FUNC_1(VAR_3);

 return VAR_6;
}
