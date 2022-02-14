
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsg_opts {int lock; TYPE_2__* common; scalar_t__ refcnt; } ;
struct fsg_lun_opts {size_t lun_id; int lun; } ;
struct config_item {int dummy; } ;
struct TYPE_6__ {TYPE_1__* ci_parent; } ;
struct config_group {TYPE_3__ cg_item; } ;
struct TYPE_5__ {int ** luns; } ;
struct TYPE_4__ {struct config_item* ci_parent; } ;


 int FUNC_0 (struct config_item*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fsg_lun_opts* FUNC_4 (struct config_item*) ;
 struct fsg_opts* FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (struct config_item*) ;

__attribute__((used)) static void FUNC_7(struct config_group *VAR_0, struct config_item *VAR_1)
{
 struct fsg_lun_opts *VAR_2;
 struct fsg_opts *VAR_3;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_5(&VAR_0->cg_item);

 FUNC_2(&VAR_3->lock);
 if (VAR_3->refcnt) {
  struct config_item *VAR_4;

  VAR_4 = VAR_0->cg_item.ci_parent->ci_parent;
  FUNC_6(VAR_4);
 }

 FUNC_1(VAR_2->lun);
 VAR_3->common->luns[VAR_2->lun_id] = ((void*)0);
 VAR_2->lun_id = 0;
 FUNC_3(&VAR_3->lock);

 FUNC_0(VAR_1);
}
