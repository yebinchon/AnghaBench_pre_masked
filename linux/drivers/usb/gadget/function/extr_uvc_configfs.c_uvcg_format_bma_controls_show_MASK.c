
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
struct uvcg_format {int* bmaControls; TYPE_5__ group; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_8__ {TYPE_2__* ci_parent; } ;
struct TYPE_7__ {struct config_item* ci_parent; } ;
struct TYPE_6__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (struct mutex*) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (char*,char*,...) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_4(struct uvcg_format *VAR_1, char *VAR_2)
{
 struct f_uvc_opts *VAR_3;
 struct config_item *VAR_4;
 struct mutex *VAR_5 = &VAR_1->group.cg_subsys->su_mutex;
 int VAR_6, VAR_7;
 char *VAR_8 = VAR_2;

 FUNC_0(VAR_5);

 VAR_4 = VAR_1->group.cg_item.ci_parent->ci_parent->ci_parent;
 VAR_3 = FUNC_3(VAR_4);

 FUNC_0(&VAR_3->lock);
 VAR_6 = FUNC_2(VAR_8, "0x");
 VAR_8 += VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_0; ++VAR_7) {
  VAR_6 += FUNC_2(VAR_8, "%x\n", VAR_1->bmaControls[VAR_7]);
  VAR_8 = VAR_2 + VAR_6;
 }
 FUNC_1(&VAR_3->lock);

 FUNC_1(VAR_5);
 return VAR_6;
}
