
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ffs_dev {int desc_ready; struct f_fs_opts* opts; int (* ffs_closed_callback ) (struct ffs_data*) ;int * ffs_data; } ;
struct ffs_data {int flags; struct ffs_dev* private_data; } ;
struct TYPE_6__ {TYPE_1__* ci_parent; int ci_kref; } ;
struct TYPE_7__ {TYPE_2__ cg_item; } ;
struct TYPE_8__ {TYPE_3__ group; } ;
struct f_fs_opts {TYPE_4__ func_inst; scalar_t__ no_configfs; } ;
struct config_item {int dummy; } ;
struct TYPE_5__ {struct config_item* ci_parent; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ffs_data*) ;
 scalar_t__ FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (struct config_item*) ;

__attribute__((used)) static void FUNC_8(struct ffs_data *VAR_2)
{
 struct ffs_dev *VAR_3;
 struct f_fs_opts *VAR_4;
 struct config_item *VAR_5;

 FUNC_0();
 FUNC_1();

 VAR_3 = VAR_2->private_data;
 if (!VAR_3)
  goto done;

 VAR_3->desc_ready = 0;
 VAR_3->ffs_data = ((void*)0);

 if (FUNC_5(VAR_1, &VAR_2->flags) &&
     VAR_3->ffs_closed_callback)
  VAR_3->ffs_closed_callback(VAR_2);

 if (VAR_3->opts)
  VAR_4 = VAR_3->opts;
 else
  goto done;

 if (VAR_4->no_configfs || !VAR_4->func_inst.group.cg_item.ci_parent
     || !FUNC_3(&VAR_4->func_inst.group.cg_item.ci_kref))
  goto done;

 VAR_5 = VAR_4->func_inst.group.cg_item.ci_parent->ci_parent;
 FUNC_2();

 if (FUNC_6(VAR_0, &VAR_2->flags))
  FUNC_7(VAR_5);
 return;
done:
 FUNC_2();
}
