
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct qlcnic_back_channel {int bc_flr_wq; } ;
struct qlcnic_sriov {int num_vfs; TYPE_2__* vf_info; struct qlcnic_back_channel bc; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {int flr_work; } ;
struct TYPE_3__ {struct qlcnic_sriov* sriov; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct qlcnic_adapter *VAR_0)
{
 struct qlcnic_sriov *VAR_1 = VAR_0->ahw->sriov;
 struct qlcnic_back_channel *VAR_2 = &VAR_1->bc;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->num_vfs; VAR_3++)
  FUNC_0(&VAR_1->vf_info[VAR_3].flr_work);

 FUNC_1(VAR_2->bc_flr_wq);
}
