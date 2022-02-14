
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvcg_control_header {int desc; int linked; } ;
struct uvc_descriptor_header {int dummy; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; scalar_t__ refcnt; } ;
struct config_item {struct config_item* ci_parent; TYPE_2__* ci_group; } ;
struct TYPE_4__ {TYPE_1__* cg_subsys; } ;
struct TYPE_3__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct config_item* FUNC_0 (int ,char*) ;
 int FUNC_1 (struct config_item*) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 int FUNC_4 (struct config_item*) ;
 struct f_uvc_opts* FUNC_5 (struct config_item*) ;
 struct uvcg_control_header* FUNC_6 (struct config_item*) ;
 struct uvc_descriptor_header** FUNC_7 (struct config_item*,struct f_uvc_opts*) ;

__attribute__((used)) static int FUNC_8(struct config_item *VAR_2,
      struct config_item *VAR_3)
{
 struct config_item *VAR_4, *VAR_5;
 struct f_uvc_opts *VAR_6;
 struct mutex *VAR_7 = &VAR_2->ci_group->cg_subsys->su_mutex;
 struct uvc_descriptor_header **VAR_8;
 struct uvcg_control_header *VAR_9;
 int VAR_10 = -VAR_1;

 FUNC_2(VAR_7);

 VAR_4 = VAR_2->ci_parent->ci_parent;
 VAR_5 = FUNC_0(FUNC_4(VAR_4), "header");
 if (!VAR_5 || VAR_3->ci_parent != VAR_5)
  goto out;

 VAR_6 = FUNC_5(VAR_4->ci_parent);

 FUNC_2(&VAR_6->lock);

 VAR_8 = FUNC_7(VAR_2, VAR_6);
 if (!VAR_8)
  goto unlock;
 if (VAR_6->refcnt || VAR_8[0]) {
  VAR_10 = -VAR_0;
  goto unlock;
 }

 VAR_9 = FUNC_6(VAR_3);
 ++VAR_9->linked;
 VAR_8[0] = (struct uvc_descriptor_header *)&VAR_9->desc;
 VAR_10 = 0;

unlock:
 FUNC_3(&VAR_6->lock);
out:
 FUNC_1(VAR_5);
 FUNC_3(VAR_7);
 return VAR_10;
}
