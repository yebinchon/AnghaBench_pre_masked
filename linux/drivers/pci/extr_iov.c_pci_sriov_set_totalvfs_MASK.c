
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct pci_dev {TYPE_1__* sriov; int is_physfn; } ;
struct TYPE_2__ {scalar_t__ total_VFs; int ctrl; scalar_t__ driver_max_VFs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int FUNC_0(struct pci_dev *VAR_4, u16 VAR_5)
{
 if (!VAR_4->is_physfn)
  return -VAR_2;

 if (VAR_5 > VAR_4->sriov->total_VFs)
  return -VAR_1;


 if (VAR_4->sriov->ctrl & VAR_3)
  return -VAR_0;

 VAR_4->sriov->driver_max_VFs = VAR_5;
 return 0;
}
