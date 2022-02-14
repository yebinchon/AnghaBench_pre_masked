
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int work_func_t ;
struct qlcnic_vf_info {int flr_work; TYPE_1__* adapter; } ;
struct TYPE_4__ {int bc_flr_wq; } ;
struct qlcnic_sriov {TYPE_2__ bc; } ;
struct TYPE_3__ {int state; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct qlcnic_sriov *VAR_1,
          struct qlcnic_vf_info *VAR_2,
          work_func_t VAR_3)
{
 if (FUNC_2(VAR_0, &VAR_2->adapter->state))
  return;

 FUNC_0(&VAR_2->flr_work, VAR_3);
 FUNC_1(VAR_1->bc.bc_flr_wq, &VAR_2->flr_work);
}
