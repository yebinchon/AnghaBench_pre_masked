
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct hisi_sas_cq {int cq_nvecs; struct hisi_sas_cq* cq; } ;
struct hisi_hba {int cq_nvecs; struct hisi_hba* cq; } ;


 int FUNC_0 (int ,struct hisi_sas_cq*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int) ;

__attribute__((used)) static void
FUNC_3(struct pci_dev *VAR_1, struct hisi_hba *VAR_2)
{
 int VAR_3;

 FUNC_0(FUNC_2(VAR_1, 1), VAR_2);
 FUNC_0(FUNC_2(VAR_1, 2), VAR_2);
 FUNC_0(FUNC_2(VAR_1, 11), VAR_2);
 for (VAR_3 = 0; VAR_3 < VAR_2->cq_nvecs; VAR_3++) {
  struct hisi_sas_cq *VAR_4 = &VAR_2->cq[VAR_3];
  int VAR_5 = VAR_0 ? 16 : 16 + VAR_3;

  FUNC_0(FUNC_2(VAR_1, VAR_5), VAR_4);
 }
 FUNC_1(VAR_1);
}
