
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lpfc_hba {TYPE_1__* pcidev; } ;
struct TYPE_3__ {int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct lpfc_hba*,int ,int ,char*,...) ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ,int ,int ,struct lpfc_hba*) ;

__attribute__((used)) static int
FUNC_4(struct lpfc_hba *VAR_5)
{
 int VAR_6;

 VAR_6 = FUNC_2(VAR_5->pcidev);
 if (!VAR_6)
  FUNC_0(VAR_5, VAR_0, VAR_2,
    "0462 PCI enable MSI mode success.\n");
 else {
  FUNC_0(VAR_5, VAR_0, VAR_2,
    "0471 PCI enable MSI mode failed (%d)\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5->pcidev->irq, VAR_4,
    0, VAR_3, VAR_5);
 if (VAR_6) {
  FUNC_1(VAR_5->pcidev);
  FUNC_0(VAR_5, VAR_1, VAR_2,
    "0478 MSI request_irq failed (%d)\n", VAR_6);
 }
 return VAR_6;
}
