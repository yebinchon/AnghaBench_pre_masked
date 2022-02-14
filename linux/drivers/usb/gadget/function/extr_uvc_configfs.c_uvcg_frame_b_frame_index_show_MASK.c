
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int b_frame_index; } ;
struct TYPE_9__ {struct config_item* ci_parent; TYPE_2__* ci_group; } ;
struct uvcg_frame {TYPE_6__ frame; TYPE_3__ item; } ;
struct uvcg_format {int linked; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; } ;
struct config_item {TYPE_5__* ci_parent; } ;
typedef int ssize_t ;
struct TYPE_11__ {TYPE_4__* ci_parent; } ;
struct TYPE_10__ {struct config_item* ci_parent; } ;
struct TYPE_8__ {TYPE_1__* cg_subsys; } ;
struct TYPE_7__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (char*,char*,int) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;
 struct uvcg_format* FUNC_4 (struct config_item*) ;
 struct uvcg_frame* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_1,
          char *VAR_2)
{
 struct uvcg_frame *VAR_3 = FUNC_5(VAR_1);
 struct uvcg_format *VAR_4;
 struct f_uvc_opts *VAR_5;
 struct config_item *VAR_6;
 struct config_item *VAR_7;
 struct mutex *VAR_8 = &VAR_3->item.ci_group->cg_subsys->su_mutex;
 int VAR_9;

 FUNC_0(VAR_8);

 VAR_7 = VAR_3->item.ci_parent;
 VAR_4 = FUNC_4(VAR_7);

 if (!VAR_4->linked) {
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_6 = VAR_7->ci_parent->ci_parent->ci_parent;
 VAR_5 = FUNC_3(VAR_6);

 FUNC_0(&VAR_5->lock);
 VAR_9 = FUNC_2(VAR_2, "%u\n", VAR_3->frame.b_frame_index);
 FUNC_1(&VAR_5->lock);

out:
 FUNC_1(VAR_8);
 return VAR_9;
}
