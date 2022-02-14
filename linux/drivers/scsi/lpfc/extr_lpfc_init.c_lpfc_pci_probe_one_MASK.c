
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct lpfc_sli_intf {int word0; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,struct lpfc_sli_intf*) ;
 int FUNC_1 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_2 (struct pci_dev*,struct pci_device_id const*) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int
FUNC_4(struct pci_dev *VAR_6, const struct pci_device_id *VAR_7)
{
 int VAR_8;
 struct lpfc_sli_intf VAR_9;

 if (FUNC_3(VAR_6, VAR_1, &VAR_9.word0))
  return -VAR_0;

 if ((FUNC_0(VAR_5, &VAR_9) == VAR_3) &&
     (FUNC_0(VAR_4, &VAR_9) == VAR_2))
  VAR_8 = FUNC_2(VAR_6, VAR_7);
 else
  VAR_8 = FUNC_1(VAR_6, VAR_7);

 return VAR_8;
}
