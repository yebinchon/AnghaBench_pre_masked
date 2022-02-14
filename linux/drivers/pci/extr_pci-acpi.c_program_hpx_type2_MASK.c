
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dummy; } ;
struct hpx_type2 {int revision; int pci_exp_devctl_and; int pci_exp_devctl_or; int pci_exp_lnkctl_and; int pci_exp_lnkctl_or; int unc_err_mask_and; int unc_err_mask_or; int unc_err_sever_and; int unc_err_sever_or; int cor_err_mask_and; int cor_err_mask_or; int adv_err_cap_and; int adv_err_cap_or; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_3 (struct pci_dev*,char*,int) ;
 int FUNC_4 (struct pci_dev*,scalar_t__,int) ;
 scalar_t__ FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*,int ,int,int) ;
 scalar_t__ FUNC_7 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_14, struct hpx_type2 *VAR_15)
{
 int VAR_16;
 u32 VAR_17;

 if (!VAR_15)
  return;

 if (!FUNC_1(VAR_14))
  return;

 if (VAR_15->revision > 1) {
  FUNC_3(VAR_14, "PCIe settings rev %d not supported\n",
    VAR_15->revision);
  return;
 }






 VAR_15->pci_exp_devctl_and |= VAR_9 |
        VAR_10;
 VAR_15->pci_exp_devctl_or &= ~(VAR_9 |
        VAR_10);


 FUNC_6(VAR_14, VAR_8,
   ~VAR_15->pci_exp_devctl_and, VAR_15->pci_exp_devctl_or);


 if (FUNC_5(VAR_14)) {





  VAR_15->pci_exp_lnkctl_and |= VAR_12;
  VAR_15->pci_exp_lnkctl_or &= ~VAR_12;
  if (FUNC_7(VAR_14))
   VAR_15->pci_exp_lnkctl_or |= VAR_12;

  FUNC_6(VAR_14, VAR_11,
   ~VAR_15->pci_exp_lnkctl_and, VAR_15->pci_exp_lnkctl_or);
 }


 VAR_16 = FUNC_0(VAR_14, VAR_13);
 if (!VAR_16)
  return;


 FUNC_2(VAR_14, VAR_16 + VAR_6, &VAR_17);
 VAR_17 = (VAR_17 & VAR_15->unc_err_mask_and) | VAR_15->unc_err_mask_or;
 FUNC_4(VAR_14, VAR_16 + VAR_6, VAR_17);


 FUNC_2(VAR_14, VAR_16 + VAR_7, &VAR_17);
 VAR_17 = (VAR_17 & VAR_15->unc_err_sever_and) | VAR_15->unc_err_sever_or;
 FUNC_4(VAR_14, VAR_16 + VAR_7, VAR_17);


 FUNC_2(VAR_14, VAR_16 + VAR_5, &VAR_17);
 VAR_17 = (VAR_17 & VAR_15->cor_err_mask_and) | VAR_15->cor_err_mask_or;
 FUNC_4(VAR_14, VAR_16 + VAR_5, VAR_17);


 FUNC_2(VAR_14, VAR_16 + VAR_0, &VAR_17);
 VAR_17 = (VAR_17 & VAR_15->adv_err_cap_and) | VAR_15->adv_err_cap_or;


 if (!(VAR_17 & VAR_3))
  VAR_17 &= ~VAR_4;
 if (!(VAR_17 & VAR_1))
  VAR_17 &= ~VAR_2;
 FUNC_4(VAR_14, VAR_16 + VAR_0, VAR_17);







}
