
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct qla_ddb_index {int fw_ddb_idx; int list; int fw_ddb; int * flash_isid; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {struct dev_db_entry* isid; int ddb_link; scalar_t__ iscsi_name; } ;
struct ddb_entry {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct dev_db_entry* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int *,struct dev_db_entry*,int) ;
 int FUNC_7 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_8 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int*) ;
 int FUNC_9 (struct scsi_qla_host*,struct list_head*,struct dev_db_entry*) ;
 int FUNC_10 (struct scsi_qla_host*,struct dev_db_entry*,int*) ;
 struct ddb_entry* FUNC_11 (struct scsi_qla_host*,int) ;
 int FUNC_12 (struct scsi_qla_host*,struct dev_db_entry*,int,int) ;
 int FUNC_13 (struct scsi_qla_host*,struct list_head*,struct dev_db_entry*) ;
 int FUNC_14 (struct scsi_qla_host*,struct ddb_entry*,struct dev_db_entry*) ;
 int FUNC_15 (struct scsi_qla_host*,int) ;
 scalar_t__ FUNC_16 (char*) ;
 int FUNC_17 (struct qla_ddb_index*) ;
 struct qla_ddb_index* FUNC_18 (int) ;

__attribute__((used)) static void FUNC_19(struct scsi_qla_host *VAR_11,
      struct list_head *VAR_12,
      struct list_head *VAR_13,
      int VAR_14)
{
 struct dev_db_entry *VAR_15;
 struct ddb_entry *VAR_16 = ((void*)0);
 dma_addr_t VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;
 uint32_t VAR_21 = 0, VAR_22 = 0;
 uint32_t VAR_23 = 0, VAR_24 = 0;
 uint32_t VAR_25 = -1;
 uint16_t VAR_26 = 0;
 uint16_t VAR_27 = -1;
 struct qla_ddb_index *VAR_28;

 VAR_15 = FUNC_1(VAR_11->fw_ddb_dma_pool, VAR_2,
          &VAR_17);
 if (VAR_15 == ((void*)0)) {
  FUNC_0(FUNC_7(VAR_4, VAR_11, "Out of memory\n"));
  goto exit_nt_list;
 }
 VAR_18 = FUNC_3(VAR_11) ? VAR_7 :
         VAR_6;
 VAR_19 = sizeof(struct qla_ddb_index);

 for (VAR_21 = 0; VAR_21 < VAR_18; VAR_21 = VAR_22) {
  VAR_20 = FUNC_8(VAR_11, VAR_21, VAR_15, VAR_17,
           ((void*)0), &VAR_22, &VAR_23,
           &VAR_24, ((void*)0), &VAR_26);
  if (VAR_20 == VAR_8)
   break;

  if (FUNC_15(VAR_11, VAR_21) != VAR_9)
   goto continue_next_nt;


  if (FUNC_16((char *) VAR_15->iscsi_name) == 0)
   goto continue_next_nt;

  VAR_27 = FUNC_4(VAR_15->ddb_link);
  if (VAR_27 < VAR_18)
   FUNC_13(VAR_11, VAR_13, VAR_15);

  if (!(VAR_23 == VAR_0 ||
      VAR_23 == VAR_1) &&
      (VAR_14 == VAR_3))
   goto continue_next_nt;

  FUNC_0(FUNC_7(VAR_5, VAR_11,
      "Adding  DDB to session = 0x%x\n", VAR_21));

  if (VAR_14 == VAR_3) {
   VAR_28 = FUNC_18(VAR_19);
   if (!VAR_28)
    break;

   VAR_28->fw_ddb_idx = VAR_21;





   FUNC_6(&VAR_28->flash_isid[0],
          &VAR_15->isid[0],
          sizeof(VAR_28->flash_isid));

   VAR_20 = FUNC_9(VAR_11, VAR_12,
         VAR_15);
   if (VAR_20 == VAR_9) {

    FUNC_17(VAR_28);
    goto continue_next_nt;
   }


   FUNC_6(&VAR_28->fw_ddb, VAR_15,
          sizeof(struct dev_db_entry));

   FUNC_5(&VAR_28->list, VAR_12);
  } else if (VAR_14 == VAR_10) {
   VAR_20 = FUNC_10(VAR_11, VAR_15,
       &VAR_25);
   if (VAR_20 == VAR_9) {
    VAR_16 = FUNC_11(VAR_11,
               VAR_25);
    if (VAR_16 != ((void*)0))
     FUNC_14(VAR_11,
             VAR_16,
          VAR_15);
    goto continue_next_nt;
   }
  }

  VAR_20 = FUNC_12(VAR_11, VAR_15, VAR_14, VAR_21);
  if (VAR_20 == VAR_8)
   goto exit_nt_list;

continue_next_nt:
  if (VAR_22 == 0)
   break;
 }

exit_nt_list:
 if (VAR_15)
  FUNC_2(VAR_11->fw_ddb_dma_pool, VAR_15, VAR_17);
}
