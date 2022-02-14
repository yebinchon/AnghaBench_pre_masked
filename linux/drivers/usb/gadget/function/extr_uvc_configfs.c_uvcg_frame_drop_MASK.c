
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uvcg_format {int num_frames; } ;
struct f_uvc_opts {int lock; } ;
struct config_item {int dummy; } ;
struct TYPE_6__ {TYPE_2__* ci_parent; } ;
struct config_group {TYPE_3__ cg_item; } ;
struct TYPE_5__ {TYPE_1__* ci_parent; } ;
struct TYPE_4__ {struct config_item* ci_parent; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct f_uvc_opts* FUNC_3 (struct config_item*) ;
 struct uvcg_format* FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct uvcg_format *VAR_2;
 struct f_uvc_opts *VAR_3;
 struct config_item *VAR_4;

 VAR_4 = VAR_0->cg_item.ci_parent->ci_parent->ci_parent;
 VAR_3 = FUNC_3(VAR_4);

 FUNC_1(&VAR_3->lock);
 VAR_2 = FUNC_4(&VAR_0->cg_item);
 --VAR_2->num_frames;
 FUNC_2(&VAR_3->lock);

 FUNC_0(VAR_1);
}
