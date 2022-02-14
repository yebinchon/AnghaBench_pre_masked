
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct the_nilfs {int ns_dev_kobj; TYPE_1__* ns_dev_subgroups; } ;
struct TYPE_4__ {int kset; } ;
struct nilfs_root {int cno; TYPE_2__ snapshot_kobj; int snapshot_kobj_unregister; struct the_nilfs* nilfs; } ;
struct kobject {int dummy; } ;
struct TYPE_3__ {struct kobject sg_mounted_snapshots_kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,int *,struct kobject*,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_2(struct nilfs_root *VAR_3)
{
 struct the_nilfs *VAR_4;
 struct kobject *VAR_5;
 int VAR_6;

 VAR_4 = VAR_3->nilfs;
 VAR_5 = &VAR_4->ns_dev_subgroups->sg_mounted_snapshots_kobj;
 VAR_3->snapshot_kobj.kset = VAR_1;
 FUNC_0(&VAR_3->snapshot_kobj_unregister);

 if (VAR_3->cno == VAR_0) {
  VAR_6 = FUNC_1(&VAR_3->snapshot_kobj,
         &VAR_2,
         &VAR_4->ns_dev_kobj,
         "current_checkpoint");
 } else {
  VAR_6 = FUNC_1(&VAR_3->snapshot_kobj,
         &VAR_2,
         VAR_5,
         "%llu", VAR_3->cno);
 }

 if (VAR_6)
  return VAR_6;

 return 0;
}
