
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mvumi_hw_regs {unsigned int int_comaout; unsigned int int_comaerr; unsigned int cl_pointer_toggle; int outb_copy_baseh; int outb_copy_basel; int inb_aval_count_baseh; int inb_aval_count_basel; int enpointa_mask_reg; int pciea_to_arm_drbl_reg; int pciea_to_arm_msg0; int arm_to_pciea_msg1; int pciea_to_arm_msg1; int arm_to_pciea_msg0; } ;
struct mvumi_hs_page1 {int total_pages; } ;
struct mvumi_hs_header {int page_code; } ;
struct mvumi_hba {scalar_t__ fw_state; unsigned int list_num_io; int ib_cur_slot; int ob_cur_slot; TYPE_1__* pdev; int ob_shadow_phys; int ob_shadow; int ib_shadow_phys; int ib_shadow; int hba_total_pages; scalar_t__ handshake_page; int handshake_page_phys; struct mvumi_hw_regs* regs; } ;
struct TYPE_2__ {int dev; int device; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int FUNC_0 (unsigned int) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (unsigned int,int const) ;
 int FUNC_3 (unsigned int,scalar_t__) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;






 int VAR_9 ;
 int FUNC_4 (int *,char*,unsigned int) ;
 int FUNC_5 (int *,char*,unsigned int) ;
 unsigned int FUNC_6 (int ) ;
 int FUNC_7 (unsigned int,int ) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (struct mvumi_hba*,struct mvumi_hs_header*) ;
 int FUNC_10 (struct mvumi_hba*,struct mvumi_hs_header*) ;
 int FUNC_11 (struct mvumi_hba*) ;
 unsigned int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct mvumi_hba *VAR_10)
{
 unsigned int VAR_11, VAR_12, VAR_13;
 struct mvumi_hs_header *VAR_14;
 struct mvumi_hw_regs *VAR_15 = VAR_10->regs;

 if (VAR_10->fw_state == VAR_3)
  VAR_11 = 128;
 else {
  VAR_12 = FUNC_6(VAR_15->arm_to_pciea_msg0);
  VAR_11 = FUNC_0(VAR_12);
  FUNC_4(&VAR_10->pdev->dev, "handshake state[0x%x].\n", VAR_11);
  if (FUNC_1(VAR_12) != VAR_7) {
   VAR_10->fw_state = VAR_3;
   return -1;
  }
 }

 VAR_13 = 0;
 switch (VAR_11) {
 case 128:
  VAR_10->fw_state = VAR_1;
  FUNC_3(VAR_13, VAR_7);
  FUNC_2(VAR_13, 130);
  FUNC_7(VAR_4, VAR_15->pciea_to_arm_msg1);
  FUNC_7(VAR_13, VAR_15->pciea_to_arm_msg0);
  FUNC_7(VAR_0, VAR_15->pciea_to_arm_drbl_reg);
  break;

 case 130:
  FUNC_7(FUNC_8(VAR_10->handshake_page_phys),
     VAR_15->pciea_to_arm_msg1);
  FUNC_7(FUNC_12(VAR_10->handshake_page_phys),
     VAR_15->arm_to_pciea_msg1);
  FUNC_3(VAR_13, VAR_7);
  FUNC_2(VAR_13, 132);
  FUNC_7(VAR_13, VAR_15->pciea_to_arm_msg0);
  FUNC_7(VAR_0, VAR_15->pciea_to_arm_drbl_reg);
  break;

 case 132:
 case 131:
 case 129:
  VAR_14 = (struct mvumi_hs_header *) VAR_10->handshake_page;
  if (VAR_14->page_code == VAR_5) {
   VAR_10->hba_total_pages =
   ((struct mvumi_hs_page1 *) VAR_14)->total_pages;

   if (VAR_10->hba_total_pages == 0)
    VAR_10->hba_total_pages = VAR_6-1;
  }

  if (VAR_11 == 131) {
   if (FUNC_10(VAR_10, VAR_14)) {
    FUNC_2(VAR_13, VAR_8);
    return -1;
   }
   if (FUNC_11(VAR_10)) {
    FUNC_2(VAR_13, VAR_8);
    return -1;
   }
  } else if (VAR_11 == 132) {
   VAR_14->page_code = 0;
   VAR_10->hba_total_pages = VAR_6-1;
  }

  if ((VAR_14->page_code + 1) <= VAR_10->hba_total_pages) {
   VAR_14->page_code++;
   if (VAR_14->page_code != VAR_5) {
    FUNC_9(VAR_10, VAR_14);
    FUNC_2(VAR_13, 129);
   } else
    FUNC_2(VAR_13, 131);
  } else
   FUNC_2(VAR_13, 133);

  FUNC_3(VAR_13, VAR_7);
  FUNC_7(VAR_13, VAR_15->pciea_to_arm_msg0);
  FUNC_7(VAR_0, VAR_15->pciea_to_arm_drbl_reg);
  break;

 case 133:

  VAR_12 = FUNC_6(VAR_15->enpointa_mask_reg);
  VAR_12 |= VAR_15->int_comaout | VAR_15->int_comaerr;
  FUNC_7(VAR_12, VAR_15->enpointa_mask_reg);
  FUNC_7(VAR_10->list_num_io, VAR_10->ib_shadow);

  FUNC_7(FUNC_8(VAR_10->ib_shadow_phys),
     VAR_15->inb_aval_count_basel);
  FUNC_7(FUNC_12(VAR_10->ib_shadow_phys),
     VAR_15->inb_aval_count_baseh);

  if (VAR_10->pdev->device == VAR_9) {

   FUNC_7((VAR_10->list_num_io-1) |
       VAR_15->cl_pointer_toggle,
       VAR_10->ob_shadow);
   FUNC_7(FUNC_8(VAR_10->ob_shadow_phys),
       VAR_15->outb_copy_basel);
   FUNC_7(FUNC_12(VAR_10->ob_shadow_phys),
       VAR_15->outb_copy_baseh);
  }

  VAR_10->ib_cur_slot = (VAR_10->list_num_io - 1) |
       VAR_15->cl_pointer_toggle;
  VAR_10->ob_cur_slot = (VAR_10->list_num_io - 1) |
       VAR_15->cl_pointer_toggle;
  VAR_10->fw_state = VAR_2;

  break;
 default:
  FUNC_5(&VAR_10->pdev->dev, "unknown handshake state [0x%x].\n",
        VAR_11);
  return -1;
 }
 return 0;
}
