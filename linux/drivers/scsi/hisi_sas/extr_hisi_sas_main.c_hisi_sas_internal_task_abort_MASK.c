
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hisi_sas_slot {size_t dlvry_queue; } ;
struct hisi_sas_dq {int dummy; } ;
struct hisi_sas_cq {struct cpumask* pci_irq_mask; } ;
struct hisi_hba {int cq_nvecs; struct hisi_sas_dq* dq; struct hisi_sas_cq* cq; struct hisi_sas_slot* slot_info; struct device* dev; } ;
struct domain_device {int dummy; } ;
struct device {int dummy; } ;
struct cpumask {int dummy; } ;


 int VAR_0 ;


 int FUNC_0 (struct hisi_hba*,struct domain_device*,int,int,struct hisi_sas_dq*) ;
 int VAR_1 ;
 int FUNC_1 (int ,struct cpumask const*) ;
 int FUNC_2 (struct device*,char*,int) ;

__attribute__((used)) static int
FUNC_3(struct hisi_hba *VAR_2,
        struct domain_device *VAR_3,
        int VAR_4, int VAR_5)
{
 struct hisi_sas_slot *VAR_6;
 struct device *VAR_7 = VAR_2->dev;
 struct hisi_sas_dq *VAR_8;
 int VAR_9, VAR_10;

 switch (VAR_4) {
 case 129:
  VAR_6 = &VAR_2->slot_info[VAR_5];
  VAR_8 = &VAR_2->dq[VAR_6->dlvry_queue];
  return FUNC_0(VAR_2, VAR_3,
           VAR_4, VAR_5, VAR_8);
 case 128:
  for (VAR_9 = 0; VAR_9 < VAR_2->cq_nvecs; VAR_9++) {
   struct hisi_sas_cq *VAR_11 = &VAR_2->cq[VAR_9];
   const struct cpumask *VAR_12 = VAR_11->pci_irq_mask;

   if (VAR_12 && !FUNC_1(VAR_1, VAR_12))
    continue;
   VAR_8 = &VAR_2->dq[VAR_9];
   VAR_10 = FUNC_0(VAR_2, VAR_3,
          VAR_4, VAR_5,
          VAR_8);
   if (VAR_10)
    return VAR_10;
  }
  break;
 default:
  FUNC_2(VAR_7, "Unrecognised internal abort flag (%d)\n",
   VAR_4);
  return -VAR_0;
 }

 return 0;
}
