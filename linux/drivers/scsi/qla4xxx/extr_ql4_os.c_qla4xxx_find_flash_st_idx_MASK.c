
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int fw_ddb_dma_pool; } ;
struct dev_db_entry {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dev_db_entry* FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ,struct dev_db_entry*,int ) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_4 (struct dev_db_entry*,struct dev_db_entry*) ;
 int FUNC_5 (struct scsi_qla_host*,struct dev_db_entry*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct scsi_qla_host *VAR_6,
         struct dev_db_entry *VAR_7,
         uint32_t VAR_8, uint32_t *VAR_9)
{
 struct dev_db_entry *VAR_10;
 dma_addr_t VAR_11;
 uint32_t VAR_12 = 0;
 int VAR_13;
 int VAR_14 = VAR_4, VAR_15;

 VAR_13 = FUNC_2(VAR_6) ? VAR_3 :
         VAR_2;

 VAR_10 = FUNC_0(VAR_6->fw_ddb_dma_pool, VAR_0,
      &VAR_11);
 if (VAR_10 == ((void*)0) || VAR_7 == ((void*)0)) {
  FUNC_3(VAR_1, VAR_6, "Out of memory\n");
  goto exit_find_st_idx;
 }

 VAR_15 = FUNC_5(VAR_6, VAR_10,
       VAR_11, VAR_8);
 if (VAR_15 == VAR_5) {
  VAR_15 = FUNC_4(VAR_7, VAR_10);
  if (VAR_15 == VAR_5) {
   *VAR_9 = VAR_8;
   VAR_14 = VAR_5;
   goto exit_find_st_idx;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_13; VAR_12++) {
  VAR_15 = FUNC_5(VAR_6, VAR_10,
        VAR_11, VAR_12);
  if (VAR_15 == VAR_4)
   continue;

  VAR_15 = FUNC_4(VAR_7, VAR_10);
  if (VAR_15 == VAR_5) {
   *VAR_9 = VAR_12;
   VAR_14 = VAR_5;
   goto exit_find_st_idx;
  }
 }

 if (VAR_12 == VAR_13)
  FUNC_3(VAR_1, VAR_6, "Failed to find ST [%d] in flash\n",
      VAR_8);

exit_find_st_idx:
 if (VAR_10)
  FUNC_1(VAR_6->fw_ddb_dma_pool, VAR_10,
         VAR_11);

 return VAR_14;
}
