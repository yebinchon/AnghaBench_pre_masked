
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ db_recovery_counter; int lock; int list; } ;
struct qed_hwfn {TYPE_1__ db_recovery_info; TYPE_2__* cdev; } ;
struct TYPE_4__ {int db_size; } ;


 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (struct qed_hwfn*,int ,char*) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct qed_hwfn *VAR_2)
{
 FUNC_1(VAR_2, VAR_1, "Setting up db recovery\n");


 if (!VAR_2->cdev->db_size) {
  FUNC_0(VAR_2->cdev, "db_size not set\n");
  return -VAR_0;
 }

 FUNC_2(&VAR_2->db_recovery_info.list);
 FUNC_3(&VAR_2->db_recovery_info.lock);
 VAR_2->db_recovery_info.db_recovery_counter = 0;

 return 0;
}
