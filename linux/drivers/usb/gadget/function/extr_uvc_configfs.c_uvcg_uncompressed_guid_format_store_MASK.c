
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


struct TYPE_14__ {int guidFormat; } ;
struct TYPE_11__ {TYPE_3__* ci_parent; } ;
struct TYPE_12__ {TYPE_4__ cg_item; TYPE_1__* cg_subsys; } ;
struct TYPE_13__ {scalar_t__ linked; TYPE_5__ group; } ;
struct uvcg_uncompressed {TYPE_7__ desc; TYPE_6__ fmt; } ;
struct mutex {int dummy; } ;
struct f_uvc_opts {struct mutex lock; scalar_t__ refcnt; } ;
struct config_item {int dummy; } ;
typedef int ssize_t ;
struct TYPE_10__ {TYPE_2__* ci_parent; } ;
struct TYPE_9__ {struct config_item* ci_parent; } ;
struct TYPE_8__ {struct mutex su_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char const*,int ) ;
 int FUNC_1 (int,size_t) ;
 int FUNC_2 (struct mutex*) ;
 int FUNC_3 (struct mutex*) ;
 struct f_uvc_opts* FUNC_4 (struct config_item*) ;
 struct uvcg_uncompressed* FUNC_5 (struct config_item*) ;

__attribute__((used)) static ssize_t FUNC_6(struct config_item *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct uvcg_uncompressed *VAR_4 = FUNC_5(VAR_1);
 struct f_uvc_opts *VAR_5;
 struct config_item *VAR_6;
 struct mutex *VAR_7 = &VAR_4->fmt.group.cg_subsys->su_mutex;
 int VAR_8;

 FUNC_2(VAR_7);

 VAR_6 = VAR_4->fmt.group.cg_item.ci_parent->ci_parent->ci_parent;
 VAR_5 = FUNC_4(VAR_6);

 FUNC_2(&VAR_5->lock);
 if (VAR_4->fmt.linked || VAR_5->refcnt) {
  VAR_8 = -VAR_0;
  goto end;
 }

 FUNC_0(VAR_4->desc.guidFormat, VAR_2,
        FUNC_1(sizeof(VAR_4->desc.guidFormat), VAR_3));
 VAR_8 = sizeof(VAR_4->desc.guidFormat);

end:
 FUNC_3(&VAR_5->lock);
 FUNC_3(VAR_7);
 return VAR_8;
}
