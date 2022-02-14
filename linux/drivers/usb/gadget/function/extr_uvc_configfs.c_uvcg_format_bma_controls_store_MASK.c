
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* ci_parent; } ;
struct TYPE_10__ {TYPE_4__ cg_item; TYPE_1__* cg_subsys; } ;
struct uvcg_format {int bmaControls; scalar_t__ linked; TYPE_5__ group; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* ci_parent; } ;
struct TYPE_7__ {struct config_item* ci_parent; } ;
struct TYPE_6__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*,int) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct uvcg_format *VAR_2,
           const char *VAR_3, size_t VAR_4)
{
 struct f_uvc_opts *VAR_5;
 struct config_item *VAR_6;
 struct mutex *VAR_7 = &VAR_2->group.cg_subsys->su_mutex;
 int VAR_8 = -VAR_1;

 FUNC_1(VAR_7);

 VAR_6 = VAR_2->group.cg_item.ci_parent->ci_parent->ci_parent;
 VAR_5 = FUNC_3(VAR_6);

 FUNC_1(&VAR_5->lock);
 if (VAR_2->linked || VAR_5->refcnt) {
  VAR_8 = -VAR_0;
  goto end;
 }

 if (VAR_4 < 4 || *VAR_3 != '0' ||
     (*(VAR_3 + 1) != 'x' && *(VAR_3 + 1) != 'X'))
  goto end;
 VAR_8 = FUNC_0(VAR_2->bmaControls, VAR_3 + 2, 1);
 if (VAR_8 < 0)
  goto end;
 VAR_8 = VAR_4;
end:
 FUNC_2(&VAR_5->lock);
 FUNC_2(VAR_7);
 return VAR_8;
}
