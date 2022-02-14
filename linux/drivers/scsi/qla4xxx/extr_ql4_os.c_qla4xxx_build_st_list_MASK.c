
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int uint16_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct qla_ddb_index {int flash_ddb_idx; int fw_ddb_idx; int list; } ;
struct list_head {int dummy; } ;
struct dev_db_entry {scalar_t__ iscsi_name; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct dev_db_entry* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_6 (struct scsi_qla_host*,struct dev_db_entry*,int,int*) ;
 int FUNC_7 (struct scsi_qla_host*,int,struct dev_db_entry*,int ,int *,int*,int*,int*,int *,int *) ;
 scalar_t__ FUNC_8 (char*) ;
 struct qla_ddb_index* FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(struct scsi_qla_host *VAR_7,
      struct list_head *VAR_8)
{
 struct qla_ddb_index *VAR_9;
 int VAR_10;
 int VAR_11;
 struct dev_db_entry *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14;
 uint32_t VAR_15 = 0, VAR_16 = 0;
 uint32_t VAR_17 = 0, VAR_18 = 0;
 uint32_t VAR_19 = -1;
 uint16_t VAR_20 = 0;

 VAR_12 = FUNC_1(VAR_7->fw_ddb_dma_pool, VAR_1,
          &VAR_13);
 if (VAR_12 == ((void*)0)) {
  FUNC_0(FUNC_5(VAR_2, VAR_7, "Out of memory\n"));
  goto exit_st_list;
 }

 VAR_10 = FUNC_3(VAR_7) ? VAR_5 :
         VAR_4;
 VAR_11 = sizeof(struct qla_ddb_index);

 for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15 = VAR_16) {
  VAR_14 = FUNC_7(VAR_7, VAR_15, VAR_12, VAR_13,
           ((void*)0), &VAR_16, &VAR_17,
           &VAR_18, ((void*)0), &VAR_20);
  if (VAR_14 == VAR_6)
   break;


  if (VAR_17 == VAR_0)
   goto continue_next_st;


  if (FUNC_8((char *) VAR_12->iscsi_name) != 0)
   goto continue_next_st;

  VAR_9 = FUNC_9(VAR_11);
  if (!VAR_9)
   break;

  VAR_14 = FUNC_6(VAR_7, VAR_12, VAR_15,
      &VAR_19);
  if (VAR_14 == VAR_6) {
   FUNC_5(VAR_2, VAR_7,
       "No flash entry for ST at idx [%d]\n", VAR_15);
   VAR_9->flash_ddb_idx = VAR_15;
  } else {
   FUNC_5(VAR_3, VAR_7,
       "ST at idx [%d] is stored at flash [%d]\n",
       VAR_15, VAR_19);
   VAR_9->flash_ddb_idx = VAR_19;
  }

  VAR_9->fw_ddb_idx = VAR_15;

  FUNC_4(&VAR_9->list, VAR_8);
continue_next_st:
  if (VAR_16 == 0)
   break;
 }

exit_st_list:
 if (VAR_12)
  FUNC_2(VAR_7->fw_ddb_dma_pool, VAR_12, VAR_13);
}
