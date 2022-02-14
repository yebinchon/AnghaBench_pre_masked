
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int work_func_t ;
struct qlcnic_vf_info {int trans_work; TYPE_1__* adapter; int state; } ;
struct TYPE_4__ {int bc_trans_wq; } ;
struct qlcnic_sriov {TYPE_2__ bc; } ;
struct TYPE_3__ {scalar_t__ need_fw_reset; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_sriov *VAR_1,
      struct qlcnic_vf_info *VAR_2,
      work_func_t VAR_3)
{
 if (FUNC_1(VAR_0, &VAR_2->state) ||
     VAR_2->adapter->need_fw_reset)
  return;

 FUNC_0(VAR_1->bc.bc_trans_wq, &VAR_2->trans_work);
}
