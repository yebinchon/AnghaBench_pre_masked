
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int device; } ;
struct nvme_dev {TYPE_1__ ctrl; } ;
typedef int pci_ers_result_t ;
typedef int pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct nvme_dev*,int) ;



 struct nvme_dev* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static pci_ers_result_t FUNC_3(struct pci_dev *VAR_3,
      pci_channel_state_t VAR_4)
{
 struct nvme_dev *VAR_5 = FUNC_2(VAR_3);






 switch (VAR_4) {
 case 129:
  return VAR_0;
 case 130:
  FUNC_0(VAR_5->ctrl.device,
   "frozen state error detected, reset controller\n");
  FUNC_1(VAR_5, 0);
  return VAR_2;
 case 128:
  FUNC_0(VAR_5->ctrl.device,
   "failure state error detected, request disconnect\n");
  return VAR_1;
 }
 return VAR_2;
}
