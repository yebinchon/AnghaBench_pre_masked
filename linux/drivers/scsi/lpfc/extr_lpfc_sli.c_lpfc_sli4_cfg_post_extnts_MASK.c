
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef union lpfc_sli4_cfg_shdr {int dummy; } lpfc_sli4_cfg_shdr ;
typedef int uint32_t ;
typedef int uint16_t ;
struct mbox_header {int dummy; } ;
struct TYPE_2__ {int intr_enable; } ;
struct lpfc_hba {TYPE_1__ sli4_hba; } ;
typedef int MAILBOX_t ;
typedef int LPFC_MBOXQ_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct lpfc_hba*,int *) ;
 int FUNC_1 (struct lpfc_hba*,int ,int ,char*,int,int) ;
 int FUNC_2 (struct lpfc_hba*,int *,int ,int ,int,int) ;
 int FUNC_3 (struct lpfc_hba*,int *,int,int,int) ;
 int FUNC_4 (struct lpfc_hba*,int *,int ) ;
 int FUNC_5 (struct lpfc_hba*,int *,int) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int
FUNC_7(struct lpfc_hba *VAR_9, uint16_t VAR_10,
     uint16_t VAR_11, bool *VAR_12, LPFC_MBOXQ_t *VAR_13)
{
 int VAR_14 = 0;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17, VAR_18;


 VAR_15 = VAR_10 * sizeof(uint16_t);





 VAR_16 = sizeof(MAILBOX_t) - sizeof(struct mbox_header) -
  sizeof(uint32_t);





 *VAR_12 = VAR_6;
 if (VAR_15 > VAR_16) {
  VAR_15 = VAR_10 * sizeof(uint16_t) +
   sizeof(union lpfc_sli4_cfg_shdr) +
   sizeof(uint32_t);
  *VAR_12 = VAR_7;
 }

 VAR_17 = FUNC_2(VAR_9, VAR_13, VAR_5,
         VAR_4,
         VAR_15, *VAR_12);
 if (VAR_17 < VAR_15) {
  FUNC_1(VAR_9, VAR_2, VAR_3,
   "2982 Allocated DMA memory size (x%x) is "
   "less than the requested DMA memory "
   "size (x%x)\n", VAR_17, VAR_15);
  return -VAR_1;
 }
 VAR_14 = FUNC_3(VAR_9, VAR_13, VAR_10, VAR_11, *VAR_12);
 if (FUNC_6(VAR_14))
  return -VAR_0;

 if (!VAR_9->sli4_hba.intr_enable)
  VAR_14 = FUNC_4(VAR_9, VAR_13, VAR_8);
 else {
  VAR_18 = FUNC_0(VAR_9, VAR_13);
  VAR_14 = FUNC_5(VAR_9, VAR_13, VAR_18);
 }

 if (FUNC_6(VAR_14))
  VAR_14 = -VAR_0;
 return VAR_14;
}
