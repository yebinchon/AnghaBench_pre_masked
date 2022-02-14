
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct qlcnic_vf_info {TYPE_2__* vp; } ;
struct qlcnic_sriov {int vp_handle; struct qlcnic_vf_info* vf_info; } ;
struct qlcnic_adapter {TYPE_1__* ahw; } ;
struct TYPE_4__ {int handle; } ;
struct TYPE_3__ {scalar_t__ pci_func; struct qlcnic_sriov* sriov; } ;


 int VAR_0 ;
 int FUNC_0 (struct qlcnic_adapter*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct qlcnic_adapter *VAR_1,
         u8 VAR_2)
{
 struct qlcnic_sriov *VAR_3 = VAR_1->ahw->sriov;
 struct qlcnic_vf_info *VAR_4;
 int VAR_5;

 if (VAR_1->ahw->pci_func == VAR_2) {
  return VAR_3->vp_handle;
 } else {
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5 >= 0) {
   VAR_4 = &VAR_3->vf_info[VAR_5];
   return VAR_4->vp->handle;
  }
 }

 return -VAR_0;
}
