
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct qla_ddb_index {int fw_ddb_idx; int list; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {int ddb_link; scalar_t__ iscsi_name; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int) ;
 struct dev_db_entry* FUNC_2 (int ,int ,int *) ;
 int FUNC_3 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (int *,struct list_head*) ;
 int FUNC_6 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_7 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int*) ;
 int FUNC_8 (struct scsi_qla_host*,struct dev_db_entry*,int *) ;
 int FUNC_9 (struct scsi_qla_host*,struct dev_db_entry*,int ,int) ;
 scalar_t__ FUNC_10 (char*) ;
 int FUNC_11 (struct qla_ddb_index*) ;
 struct qla_ddb_index* FUNC_12 (int) ;

__attribute__((used)) static void FUNC_13(struct scsi_qla_host *VAR_9,
          struct list_head *VAR_10,
          uint16_t VAR_11)
{
 struct dev_db_entry *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;
 uint32_t VAR_17 = 0, VAR_18 = 0;
 uint32_t VAR_19 = 0, VAR_20 = 0;
 uint16_t VAR_21 = 0;
 struct qla_ddb_index *VAR_22;

 VAR_12 = FUNC_2(VAR_9->fw_ddb_dma_pool, VAR_1,
          &VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(FUNC_6(VAR_2, VAR_9, "Out of memory\n"));
  goto exit_new_nt_list;
 }
 VAR_14 = FUNC_4(VAR_9) ? VAR_5 :
         VAR_4;
 VAR_15 = sizeof(struct qla_ddb_index);

 for (VAR_17 = 0; VAR_17 < VAR_14; VAR_17 = VAR_18) {
  VAR_16 = FUNC_7(VAR_9, VAR_17, VAR_12, VAR_13,
           ((void*)0), &VAR_18, &VAR_19,
           &VAR_20, ((void*)0), &VAR_21);
  if (VAR_16 == VAR_6)
   break;


  if (FUNC_10((char *)VAR_12->iscsi_name) == 0)
   goto continue_next_new_nt;

  if (!(VAR_19 == VAR_0))
   goto continue_next_new_nt;

  FUNC_0(FUNC_6(VAR_3, VAR_9,
      "Adding  DDB to session = 0x%x\n", VAR_17));

  VAR_22 = FUNC_12(VAR_15);
  if (!VAR_22)
   break;

  VAR_22->fw_ddb_idx = VAR_17;

  VAR_16 = FUNC_8(VAR_9, VAR_12, ((void*)0));
  if (VAR_16 == VAR_7) {

   FUNC_11(VAR_22);
   goto continue_next_new_nt;
  }

  if (VAR_11 < VAR_14)
   VAR_12->ddb_link = FUNC_1(VAR_11);

  FUNC_5(&VAR_22->list, VAR_10);

  VAR_16 = FUNC_9(VAR_9, VAR_12, VAR_8,
           VAR_17);
  if (VAR_16 == VAR_6)
   goto exit_new_nt_list;

continue_next_new_nt:
  if (VAR_18 == 0)
   break;
 }

exit_new_nt_list:
 if (VAR_12)
  FUNC_3(VAR_9->fw_ddb_dma_pool, VAR_12, VAR_13);
}
