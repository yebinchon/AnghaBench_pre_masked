
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct pci_dev {int dev; } ;
struct TYPE_4__ {int word0; } ;
struct TYPE_3__ {void* conf_regs_memmap_p; void* ctrl_regs_memmap_p; void* drbl_regs_memmap_p; int sli4_write_cq_db; int sli4_write_eq_db; int sli4_eq_clr_intr; void* dpp_regs_memmap_p; TYPE_2__ sli_intf; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; void* pci_bar4_memmap_p; void* pci_bar2_map; void* pci_bar2_memmap_p; void* pci_bar1_map; void* pci_bar0_map; void* pci_bar0_memmap_p; struct pci_dev* pcidev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;



 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_1 (int ,TYPE_2__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,int *,char*) ;
 int FUNC_4 (int *,int ) ;
 void* FUNC_5 (void*,unsigned long) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (struct lpfc_hba*,int ,int ,char*,int ) ;
 int FUNC_8 (struct lpfc_hba*,int) ;
 int FUNC_9 (struct lpfc_hba*,int) ;
 int FUNC_10 (struct lpfc_hba*,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ FUNC_11 (struct pci_dev*,int ,int *) ;
 unsigned long FUNC_12 (struct pci_dev*,int) ;
 void* FUNC_13 (struct pci_dev*,int) ;

__attribute__((used)) static int
FUNC_14(struct lpfc_hba *VAR_18)
{
 struct pci_dev *VAR_19 = VAR_18->pcidev;
 unsigned long VAR_20, VAR_21, VAR_22;
 int VAR_23;
 uint32_t VAR_24;

 if (!VAR_19)
  return -VAR_0;


 VAR_23 = FUNC_4(&VAR_19->dev, FUNC_0(64));
 if (VAR_23)
  VAR_23 = FUNC_4(&VAR_19->dev, FUNC_0(32));
 if (VAR_23)
  return VAR_23;





 if (FUNC_11(VAR_19, VAR_4,
      &VAR_18->sli4_hba.sli_intf.word0)) {
  return -VAR_0;
 }


 if (FUNC_1(VAR_17, &VAR_18->sli4_hba.sli_intf) !=
     VAR_5) {
  FUNC_7(VAR_18, VAR_2, VAR_3,
    "2894 SLI_INTF reg contents invalid "
    "sli_intf reg 0x%x\n",
    VAR_18->sli4_hba.sli_intf.word0);
  return -VAR_0;
 }

 VAR_24 = FUNC_1(VAR_16, &VAR_18->sli4_hba.sli_intf);






 if (FUNC_13(VAR_19, VAR_7)) {
  VAR_18->pci_bar0_map = FUNC_13(VAR_19, VAR_7);
  VAR_20 = FUNC_12(VAR_19, VAR_7);





  VAR_18->sli4_hba.conf_regs_memmap_p =
   FUNC_5(VAR_18->pci_bar0_map, VAR_20);
  if (!VAR_18->sli4_hba.conf_regs_memmap_p) {
   FUNC_3(VAR_2, &VAR_19->dev,
       "ioremap failed for SLI4 PCI config "
       "registers.\n");
   return -VAR_0;
  }
  VAR_18->pci_bar0_memmap_p = VAR_18->sli4_hba.conf_regs_memmap_p;

  FUNC_8(VAR_18, VAR_24);
 } else {
  VAR_18->pci_bar0_map = FUNC_13(VAR_19, 1);
  VAR_20 = FUNC_12(VAR_19, 1);
  if (VAR_24 >= 129) {
   FUNC_3(VAR_2, &VAR_19->dev,
      "FATAL - No BAR0 mapping for SLI4, if_type 2\n");
   return -VAR_0;
  }
  VAR_18->sli4_hba.conf_regs_memmap_p =
    FUNC_5(VAR_18->pci_bar0_map, VAR_20);
  if (!VAR_18->sli4_hba.conf_regs_memmap_p) {
   FUNC_3(VAR_2, &VAR_19->dev,
    "ioremap failed for SLI4 PCI config "
    "registers.\n");
   return -VAR_0;
  }
  FUNC_8(VAR_18, VAR_24);
 }

 if (VAR_24 == 130) {
  if (FUNC_13(VAR_19, VAR_8)) {




   VAR_18->pci_bar1_map = FUNC_13(VAR_19,
        VAR_8);
   VAR_21 = FUNC_12(VAR_19, VAR_8);
   VAR_18->sli4_hba.ctrl_regs_memmap_p =
     FUNC_5(VAR_18->pci_bar1_map,
      VAR_21);
   if (!VAR_18->sli4_hba.ctrl_regs_memmap_p) {
    FUNC_2(&VAR_19->dev,
        "ioremap failed for SLI4 HBA "
         "control registers.\n");
    VAR_23 = -VAR_1;
    goto out_iounmap_conf;
   }
   VAR_18->pci_bar2_memmap_p =
      VAR_18->sli4_hba.ctrl_regs_memmap_p;
   FUNC_9(VAR_18, VAR_24);
  } else {
   VAR_23 = -VAR_1;
   goto out_iounmap_conf;
  }
 }

 if ((VAR_24 == 128) &&
     (FUNC_13(VAR_19, VAR_8))) {




  VAR_18->pci_bar1_map = FUNC_13(VAR_19, VAR_8);
  VAR_21 = FUNC_12(VAR_19, VAR_8);
  VAR_18->sli4_hba.drbl_regs_memmap_p =
    FUNC_5(VAR_18->pci_bar1_map, VAR_21);
  if (!VAR_18->sli4_hba.drbl_regs_memmap_p) {
   FUNC_2(&VAR_19->dev,
      "ioremap failed for SLI4 HBA doorbell registers.\n");
   VAR_23 = -VAR_1;
   goto out_iounmap_conf;
  }
  VAR_18->pci_bar2_memmap_p = VAR_18->sli4_hba.drbl_regs_memmap_p;
  FUNC_9(VAR_18, VAR_24);
 }

 if (VAR_24 == 130) {
  if (FUNC_13(VAR_19, VAR_9)) {




   VAR_18->pci_bar2_map = FUNC_13(VAR_19,
        VAR_9);
   VAR_22 = FUNC_12(VAR_19, VAR_9);
   VAR_18->sli4_hba.drbl_regs_memmap_p =
     FUNC_5(VAR_18->pci_bar2_map,
      VAR_22);
   if (!VAR_18->sli4_hba.drbl_regs_memmap_p) {
    FUNC_2(&VAR_19->dev,
        "ioremap failed for SLI4 HBA"
        " doorbell registers.\n");
    VAR_23 = -VAR_1;
    goto out_iounmap_ctrl;
   }
   VAR_18->pci_bar4_memmap_p =
     VAR_18->sli4_hba.drbl_regs_memmap_p;
   VAR_23 = FUNC_10(VAR_18, VAR_6);
   if (VAR_23)
    goto out_iounmap_all;
  } else {
   VAR_23 = -VAR_1;
   goto out_iounmap_all;
  }
 }

 if (VAR_24 == 128 &&
     FUNC_13(VAR_19, VAR_9)) {




  VAR_18->pci_bar2_map = FUNC_13(VAR_19, VAR_9);
  VAR_22 = FUNC_12(VAR_19, VAR_9);
  VAR_18->sli4_hba.dpp_regs_memmap_p =
    FUNC_5(VAR_18->pci_bar2_map, VAR_22);
  if (!VAR_18->sli4_hba.dpp_regs_memmap_p) {
   FUNC_2(&VAR_19->dev,
      "ioremap failed for SLI4 HBA dpp registers.\n");
   VAR_23 = -VAR_1;
   goto out_iounmap_ctrl;
  }
  VAR_18->pci_bar4_memmap_p = VAR_18->sli4_hba.dpp_regs_memmap_p;
 }


 switch (VAR_24) {
 case 130:
 case 129:
  VAR_18->sli4_hba.sli4_eq_clr_intr = VAR_10;
  VAR_18->sli4_hba.sli4_write_eq_db = VAR_15;
  VAR_18->sli4_hba.sli4_write_cq_db = VAR_14;
  break;
 case 128:
  VAR_18->sli4_hba.sli4_eq_clr_intr = VAR_11;
  VAR_18->sli4_hba.sli4_write_eq_db = VAR_13;
  VAR_18->sli4_hba.sli4_write_cq_db = VAR_12;
  break;
 default:
  break;
 }

 return 0;

out_iounmap_all:
 FUNC_6(VAR_18->sli4_hba.drbl_regs_memmap_p);
out_iounmap_ctrl:
 FUNC_6(VAR_18->sli4_hba.ctrl_regs_memmap_p);
out_iounmap_conf:
 FUNC_6(VAR_18->sli4_hba.conf_regs_memmap_p);

 return VAR_23;
}
