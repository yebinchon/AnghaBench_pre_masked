
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct qlcnic_vf_info {size_t pci_func; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {size_t num_vfs; struct qlcnic_vf_info* vf_info; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*) ;

int FUNC_1(struct qlcnic_adapter *VAR_1, u8 VAR_2)
{
 struct qlcnic_vf_info *VAR_3 = VAR_1->ahw->sriov->vf_info;
 u8 VAR_4;

 if (FUNC_0(VAR_1))
  return 0;

 for (VAR_4 = 0; VAR_4 < VAR_1->ahw->sriov->num_vfs; VAR_4++) {
  if (VAR_3[VAR_4].pci_func == VAR_2)
   return VAR_4;
 }

 return -VAR_0;
}
