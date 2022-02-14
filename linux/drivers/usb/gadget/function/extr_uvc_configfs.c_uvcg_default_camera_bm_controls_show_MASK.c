
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uvc_camera_terminal_descriptor {int bControlSize; int* bmControls; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; struct uvc_camera_terminal_descriptor uvc_camera_terminal; } ;
struct config_item {int dummy; } ;
struct TYPE_10__ {TYPE_4__* ci_parent; } ;
struct config_group {TYPE_5__ cg_item; TYPE_1__* cg_subsys; } ;
typedef int ssize_t ;
struct TYPE_9__ {TYPE_3__* ci_parent; } ;
struct TYPE_8__ {TYPE_2__* ci_parent; } ;
struct TYPE_7__ {struct config_item* ci_parent; } ;
struct TYPE_6__ {struct mutex su_mutex; } ;


 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct config_group* FUNC_3 (struct config_item*) ;
 struct f_uvc_opts* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(
 struct config_item *VAR_0, char *VAR_1)
{
 struct config_group *VAR_2 = FUNC_3(VAR_0);
 struct f_uvc_opts *VAR_3;
 struct config_item *VAR_4;
 struct mutex *VAR_5 = &VAR_2->cg_subsys->su_mutex;
 struct uvc_camera_terminal_descriptor *VAR_6;
 int VAR_7, VAR_8;
 char *VAR_9 = VAR_1;

 FUNC_0(VAR_5);

 VAR_4 = VAR_2->cg_item.ci_parent->ci_parent->ci_parent->
   ci_parent;
 VAR_3 = FUNC_4(VAR_4);
 VAR_6 = &VAR_3->uvc_camera_terminal;

 FUNC_0(&VAR_3->lock);
 for (VAR_7 = 0, VAR_8 = 0; VAR_8 < VAR_6->bControlSize; ++VAR_8) {
  VAR_7 += FUNC_2(VAR_9, "%u\n", VAR_6->bmControls[VAR_8]);
  VAR_9 = VAR_1 + VAR_7;
 }
 FUNC_1(&VAR_3->lock);

 FUNC_1(VAR_5);
 return VAR_7;
}
