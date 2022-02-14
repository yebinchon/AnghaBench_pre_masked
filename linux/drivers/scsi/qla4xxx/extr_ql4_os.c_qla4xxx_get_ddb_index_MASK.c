
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct scsi_qla_host {int ddb_idx_map; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int FUNC_2 (int ,struct scsi_qla_host*,char*,...) ;
 int FUNC_3 (struct scsi_qla_host*,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__,int ) ;

int FUNC_5(struct scsi_qla_host *VAR_4, uint16_t *VAR_5)
{
 uint32_t VAR_6 = 0;
 uint16_t VAR_7;
 int VAR_8;

get_ddb_index:
 VAR_7 = FUNC_1(VAR_4->ddb_idx_map, VAR_1);

 if (VAR_7 >= VAR_1) {
  FUNC_0(FUNC_2(VAR_0, VAR_4,
      "Free DDB index not available\n"));
  VAR_8 = VAR_3;
  goto exit_get_ddb_index;
 }

 if (FUNC_4(VAR_7, VAR_4->ddb_idx_map))
  goto get_ddb_index;

 FUNC_0(FUNC_2(VAR_0, VAR_4,
     "Found a free DDB index at %d\n", VAR_7));
 VAR_8 = FUNC_3(VAR_4, VAR_7, &VAR_6);
 if (VAR_8 == VAR_3) {
  if (VAR_6 == VAR_2) {
   FUNC_2(VAR_0, VAR_4,
       "DDB index = %d not available trying next\n",
       VAR_7);
   goto get_ddb_index;
  }
  FUNC_0(FUNC_2(VAR_0, VAR_4,
      "Free FW DDB not available\n"));
 }

 *VAR_5 = VAR_7;

exit_get_ddb_index:
 return VAR_8;
}
