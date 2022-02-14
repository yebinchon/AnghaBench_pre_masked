
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvcg_control_header {int linked; } ;
struct uvc_descriptor_header {int dummy; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; scalar_t__ refcnt; } ;
struct config_item {struct config_item* ci_parent; TYPE_2__* ci_group; } ;
struct TYPE_4__ {TYPE_1__* cg_subsys; } ;
struct TYPE_3__ {struct mutex su_mutex; } ;


 struct config_item* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct config_item*) ;
 struct f_uvc_opts* FUNC_5 (struct config_item*) ;
 struct uvcg_control_header* FUNC_6 (struct config_item*) ;
 struct uvc_descriptor_header** FUNC_7 (struct config_item*,struct f_uvc_opts*) ;

__attribute__((used)) static void FUNC_8(struct config_item *VAR_0,
     struct config_item *VAR_1)
{
 struct config_item *VAR_2, *VAR_3;
 struct f_uvc_opts *VAR_4;
 struct mutex *VAR_5 = &VAR_0->ci_group->cg_subsys->su_mutex;
 struct uvc_descriptor_header **VAR_6;
 struct uvcg_control_header *VAR_7;

 FUNC_2(VAR_5);

 VAR_2 = VAR_0->ci_parent->ci_parent;
 VAR_3 = FUNC_0(FUNC_4(VAR_2), "header");
 if (!VAR_3 || VAR_1->ci_parent != VAR_3)
  goto out;

 VAR_4 = FUNC_5(VAR_2->ci_parent);

 FUNC_2(&VAR_4->lock);

 VAR_6 = FUNC_7(VAR_0, VAR_4);
 if (!VAR_6 || VAR_4->refcnt)
  goto unlock;

 VAR_7 = FUNC_6(VAR_1);
 --VAR_7->linked;
 VAR_6[0] = ((void*)0);

unlock:
 FUNC_3(&VAR_4->lock);
out:
 FUNC_1(VAR_3);
 FUNC_3(VAR_5);
}
