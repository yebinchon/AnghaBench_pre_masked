
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct lpfc_register {scalar_t__ word0; } ;
struct TYPE_4__ {struct lpfc_register wqe_com; } ;
union lpfc_wqe128 {TYPE_1__ generic; } ;
typedef union lpfc_wqe {int dummy; } lpfc_wqe ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ u32 ;
struct lpfc_queue {int host_index; int entry_count; scalar_t__ hba_index; int notify_interval; int queue_id; scalar_t__ entry_size; scalar_t__ dpp_regaddr; scalar_t__ db_format; int dpp_id; int db_regaddr; TYPE_3__* phba; scalar_t__ dpp_enable; int WQ_posted; int WQ_overflow; } ;
struct TYPE_5__ {int sli_intf; } ;
struct TYPE_6__ {int sli3_options; TYPE_2__ sli4_hba; scalar_t__ cfg_enable_dpp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,struct lpfc_register*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (union lpfc_wqe128*,union lpfc_wqe*,scalar_t__) ;
 union lpfc_wqe* FUNC_5 (struct lpfc_queue*,int) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_8 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_9(struct lpfc_queue *VAR_19, union lpfc_wqe128 *VAR_20)
{
 union lpfc_wqe *VAR_21;
 struct lpfc_register VAR_22;
 uint32_t VAR_23;
 uint32_t VAR_24;
 uint32_t VAR_25 = 0;
 uint8_t *VAR_26;
 u32 VAR_27;


 if (FUNC_6(!VAR_19))
  return -VAR_2;
 VAR_21 = FUNC_5(VAR_19, VAR_19->host_index);


 VAR_24 = ((VAR_19->host_index + 1) % VAR_19->entry_count);
 if (VAR_24 == VAR_19->hba_index) {
  VAR_19->WQ_overflow++;
  return -VAR_0;
 }
 VAR_19->WQ_posted++;

 if (!((VAR_19->host_index + 1) % VAR_19->notify_interval))
  FUNC_3(VAR_17, &VAR_20->generic.wqe_com, 1);
 else
  FUNC_3(VAR_17, &VAR_20->generic.wqe_com, 0);
 if (VAR_19->phba->sli3_options & VAR_5)
  FUNC_3(VAR_18, &VAR_20->generic.wqe_com, VAR_19->queue_id);
 FUNC_4(VAR_20, VAR_21, VAR_19->entry_size);
 if (VAR_19->dpp_enable && VAR_19->phba->cfg_enable_dpp) {

  VAR_26 = (uint8_t *)VAR_21;





  for (VAR_25 = 0; VAR_25 < VAR_19->entry_size; VAR_25 += sizeof(uint32_t))
   FUNC_0(*((uint32_t *)(VAR_26 + VAR_25)),
     VAR_19->dpp_regaddr + VAR_25);

 }

 FUNC_7();


 VAR_23 = VAR_19->host_index;

 VAR_19->host_index = VAR_24;


 VAR_22.word0 = 0;
 if (VAR_19->db_format == VAR_3) {
  if (VAR_19->dpp_enable && VAR_19->phba->cfg_enable_dpp) {
   FUNC_3(VAR_10, &VAR_22, 1);
   FUNC_3(VAR_7, &VAR_22, 1);
   FUNC_3(VAR_8, &VAR_22,
       VAR_19->dpp_id);
   FUNC_3(VAR_9, &VAR_22,
       VAR_19->queue_id);
  } else {
   FUNC_3(VAR_14, &VAR_22, 1);
   FUNC_3(VAR_12, &VAR_22, VAR_19->queue_id);


   VAR_27 = FUNC_2(VAR_11,
      &VAR_19->phba->sli4_hba.sli_intf);
   if (VAR_27 != VAR_6)
    FUNC_3(VAR_13, &VAR_22,
           VAR_23);
  }
 } else if (VAR_19->db_format == VAR_4) {
  FUNC_3(VAR_16, &VAR_22, 1);
  FUNC_3(VAR_15, &VAR_22, VAR_19->queue_id);
 } else {
  return -VAR_1;
 }
 FUNC_8(VAR_22.word0, VAR_19->db_regaddr);

 return 0;
}
