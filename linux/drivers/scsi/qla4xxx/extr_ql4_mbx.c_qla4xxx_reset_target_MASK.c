
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int host_no; } ;
struct ddb_entry {scalar_t__ fw_ddb_index; } ;
typedef int mbox_sts ;
typedef int mbox_cmd ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__**,int ,int) ;
 int FUNC_2 (char*,int ,scalar_t__) ;
 int FUNC_3 (struct scsi_qla_host*,int,int,scalar_t__*,scalar_t__*) ;

int FUNC_4(struct scsi_qla_host *VAR_6,
    struct ddb_entry *VAR_7)
{
 uint32_t VAR_8[VAR_1];
 uint32_t VAR_9[VAR_1];
 int VAR_10 = VAR_5;

 FUNC_0(FUNC_2("scsi%ld:%d: target reset issued\n", VAR_6->host_no,
        VAR_7->fw_ddb_index));





 FUNC_1(&VAR_8, 0, sizeof(VAR_8));
 FUNC_1(&VAR_9, 0, sizeof(VAR_9));

 VAR_8[0] = VAR_0;
 VAR_8[1] = VAR_7->fw_ddb_index;
 VAR_8[5] = 0x01;

 FUNC_3(VAR_6, VAR_1, 1, &VAR_8[0],
    &VAR_9[0]);
 if (VAR_9[0] != VAR_2 &&
     VAR_9[0] != VAR_3)
  VAR_10 = VAR_4;

 return VAR_10;
}
