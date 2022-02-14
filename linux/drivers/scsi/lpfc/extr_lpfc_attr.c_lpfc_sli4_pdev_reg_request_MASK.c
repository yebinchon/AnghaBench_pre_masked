
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct pci_dev {int dummy; } ;
struct TYPE_4__ {scalar_t__ conf_regs_memmap_p; int sli_intf; } ;
struct lpfc_hba {scalar_t__ sli_rev; scalar_t__ cfg_sriov_nr_virtfn; TYPE_2__ sli4_hba; int hba_flag; TYPE_1__* pport; int cfg_enable_hba_reset; struct pci_dev* pcidev; } ;
struct completion {int dummy; } ;
typedef int ssize_t ;
struct TYPE_3__ {scalar_t__ fc_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_0 (int ,int *) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (struct lpfc_hba*,int ) ;
 int FUNC_3 (struct lpfc_hba*,int ,int ,char*,scalar_t__) ;
 int FUNC_4 (struct lpfc_hba*) ;
 int VAR_19 ;
 int FUNC_5 (struct lpfc_hba*,scalar_t__) ;
 int FUNC_6 (struct lpfc_hba*,int*,struct completion*,int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct pci_dev*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (struct completion*) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;

__attribute__((used)) static ssize_t
FUNC_12(struct lpfc_hba *VAR_20, uint32_t VAR_21)
{
 struct completion VAR_22;
 struct pci_dev *VAR_23 = VAR_20->pcidev;
 uint32_t VAR_24;
 uint32_t VAR_25;
 uint32_t VAR_26;
 int VAR_27 = 0, VAR_28 = 0;
 int VAR_29 = 1, VAR_30;

 if (!VAR_20->cfg_enable_hba_reset)
  return -VAR_0;

 if ((VAR_20->sli_rev < VAR_18) ||
     (FUNC_0(VAR_19, &VAR_20->sli4_hba.sli_intf) <
      VAR_17))
  return -VAR_3;


 VAR_24 = VAR_20->pport->fc_flag;
 VAR_25 = VAR_20->cfg_sriov_nr_virtfn;


 if (VAR_20->cfg_sriov_nr_virtfn) {
  FUNC_8(VAR_23);
  VAR_20->cfg_sriov_nr_virtfn = 0;
 }

 if (VAR_21 == VAR_14)
  VAR_20->hba_flag |= VAR_5;

 VAR_27 = FUNC_2(VAR_20, VAR_12);

 if (VAR_27 != 0) {
  VAR_20->hba_flag &= ~VAR_5;
  return VAR_27;
 }


 FUNC_7(100);

 VAR_26 = FUNC_9(VAR_20->sli4_hba.conf_regs_memmap_p +
   VAR_10);

 if (VAR_21 == VAR_14)
  VAR_26 |= VAR_15;
 else if (VAR_21 == VAR_16)
  VAR_26 |= VAR_9;
 else if (VAR_21 == VAR_11)
  VAR_26 |= VAR_8;

 FUNC_11(VAR_26, VAR_20->sli4_hba.conf_regs_memmap_p +
        VAR_10);

 FUNC_9(VAR_20->sli4_hba.conf_regs_memmap_p + VAR_10);


 VAR_28 = FUNC_4(VAR_20);

 if (VAR_28 == -VAR_3) {

  FUNC_3(VAR_20, VAR_6, VAR_7,
    "3150 No privilege to perform the requested "
    "access: x%x\n", VAR_26);
 } else if (VAR_28 == -VAR_1) {

  FUNC_3(VAR_20, VAR_6, VAR_7,
    "3153 Fail to perform the requested "
    "access: x%x\n", VAR_26);
  return VAR_28;
 }


 if (VAR_24 & VAR_4)
  goto out;

 FUNC_1(&VAR_22);
 VAR_29 = FUNC_6(VAR_20, &VAR_27, &VAR_22,
        VAR_13);
 if (!VAR_29)
  goto out;

 FUNC_10(&VAR_22);

out:

 if (VAR_25) {
  VAR_30 =
   FUNC_5(VAR_20, VAR_25);
  if (!VAR_30)
   VAR_20->cfg_sriov_nr_virtfn = VAR_25;
 }


 if (!VAR_28) {
  if (!VAR_29)
   VAR_28 = -VAR_2;
  else if (VAR_27)
   VAR_28 = -VAR_1;
 }
 return VAR_28;
}
