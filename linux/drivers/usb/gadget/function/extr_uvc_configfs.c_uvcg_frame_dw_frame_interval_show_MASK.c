
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_14__ {int b_frame_interval_type; } ;
struct TYPE_13__ {TYPE_5__* ci_parent; TYPE_2__* ci_group; } ;
struct uvcg_frame {int* dw_frame_interval; TYPE_7__ frame; TYPE_6__ item; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_12__ {TYPE_4__* ci_parent; } ;
struct TYPE_11__ {TYPE_3__* ci_parent; } ;
struct TYPE_10__ {struct config_item* ci_parent; } ;
struct TYPE_9__ {TYPE_1__* cg_subsys; } ;
struct TYPE_8__ {struct mutex su_mutex; } ;


 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 scalar_t__ FUNC_2 (char*,char*,int) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;
 struct uvcg_frame* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_0,
       char *VAR_1)
{
 struct uvcg_frame *VAR_2 = FUNC_4(VAR_0);
 struct f_uvc_opts *VAR_3;
 struct config_item *VAR_4;
 struct mutex *VAR_5 = &VAR_2->item.ci_group->cg_subsys->su_mutex;
 int VAR_6, VAR_7;
 char *VAR_8 = VAR_1;

 FUNC_0(VAR_5);

 VAR_4 = VAR_2->item.ci_parent->ci_parent->ci_parent->ci_parent;
 VAR_3 = FUNC_3(VAR_4);

 FUNC_0(&VAR_3->lock);
 for (VAR_6 = 0, VAR_7 = 0; VAR_7 < VAR_2->frame.b_frame_interval_type; ++VAR_7) {
  VAR_6 += FUNC_2(VAR_8, "%u\n", VAR_2->dw_frame_interval[VAR_7]);
  VAR_8 = VAR_1 + VAR_6;
 }
 FUNC_1(&VAR_3->lock);

 FUNC_1(VAR_5);
 return VAR_6;
}
