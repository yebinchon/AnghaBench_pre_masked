
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pvr2_sysfs_ctl_item {int grp; scalar_t__ created_ok; struct pvr2_sysfs_ctl_item* item_next; } ;
struct pvr2_sysfs {TYPE_1__* class_dev; struct pvr2_sysfs_ctl_item* item_first; } ;
struct TYPE_2__ {int kobj; } ;


 int FUNC_0 (struct pvr2_sysfs_ctl_item*) ;
 int FUNC_1 (char*,struct pvr2_sysfs_ctl_item*) ;
 int FUNC_2 (int *,int *) ;

__attribute__((used)) static void FUNC_3(struct pvr2_sysfs *VAR_0)
{
 struct pvr2_sysfs_ctl_item *VAR_1,*VAR_2;
 for (VAR_1 = VAR_0->item_first; VAR_1; VAR_1 = VAR_2) {
  VAR_2 = VAR_1->item_next;
  if (VAR_1->created_ok) {
   FUNC_2(&VAR_0->class_dev->kobj,&VAR_1->grp);
  }
  FUNC_1("Destroying pvr2_sysfs_ctl_item id=%p",VAR_1);
  FUNC_0(VAR_1);
 }
}
