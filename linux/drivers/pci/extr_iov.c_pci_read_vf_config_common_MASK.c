
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* sriov; struct pci_dev* physfn; } ;
struct TYPE_2__ {int subsystem_device; int subsystem_vendor; int hdr_type; int class; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,int ,int *) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;
 int FUNC_2 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_4)
{
 struct pci_dev *VAR_5 = VAR_4->physfn;
 FUNC_1(VAR_4, VAR_0,
         &VAR_5->sriov->class);
 FUNC_0(VAR_4, VAR_1,
        &VAR_5->sriov->hdr_type);
 FUNC_2(VAR_4, VAR_3,
        &VAR_5->sriov->subsystem_vendor);
 FUNC_2(VAR_4, VAR_2,
        &VAR_5->sriov->subsystem_device);
}
