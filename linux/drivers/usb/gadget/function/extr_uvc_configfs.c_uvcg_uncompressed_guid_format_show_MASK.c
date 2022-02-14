
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


struct TYPE_11__ {int guidFormat; } ;
struct TYPE_10__ {TYPE_2__* ci_parent; } ;
struct TYPE_14__ {TYPE_3__ cg_item; TYPE_5__* cg_subsys; } ;
struct TYPE_13__ {TYPE_7__ group; } ;
struct uvcg_uncompressed {TYPE_4__ desc; TYPE_6__ fmt; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_12__ {struct mutex su_mutex; } ;
struct TYPE_9__ {TYPE_1__* ci_parent; } ;
struct TYPE_8__ {struct config_item* ci_parent; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (struct mutex*) ;
 int FUNC_2 (struct mutex*) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;
 struct uvcg_uncompressed* FUNC_4 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_5(struct config_item *VAR_0,
       char *VAR_1)
{
 struct uvcg_uncompressed *VAR_2 = FUNC_4(VAR_0);
 struct f_uvc_opts *VAR_3;
 struct config_item *VAR_4;
 struct mutex *VAR_5 = &VAR_2->fmt.group.cg_subsys->su_mutex;

 FUNC_1(VAR_5);

 VAR_4 = VAR_2->fmt.group.cg_item.ci_parent->ci_parent->ci_parent;
 VAR_3 = FUNC_3(VAR_4);

 FUNC_1(&VAR_3->lock);
 FUNC_0(VAR_1, VAR_2->desc.guidFormat, sizeof(VAR_2->desc.guidFormat));
 FUNC_2(&VAR_3->lock);

 FUNC_2(VAR_5);

 return sizeof(VAR_2->desc.guidFormat);
}
