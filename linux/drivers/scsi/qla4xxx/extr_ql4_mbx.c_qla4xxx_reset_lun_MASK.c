
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct scsi_qla_host {int host_no; } ;
struct scsi_lun {int dummy; } ;
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
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,struct scsi_lun*) ;
 int FUNC_3 (scalar_t__**,int ,int) ;
 int FUNC_4 (char*,int ,scalar_t__,int ) ;
 int FUNC_5 (struct scsi_qla_host*,int,int,scalar_t__*,scalar_t__*) ;

int FUNC_6(struct scsi_qla_host * VAR_6, struct ddb_entry * VAR_7,
        uint64_t VAR_8)
{
 uint32_t VAR_9[VAR_1];
 uint32_t VAR_10[VAR_1];
 uint32_t VAR_11[2];
 int VAR_12 = VAR_5;

 FUNC_0(FUNC_4("scsi%ld:%d:%llu: lun reset issued\n", VAR_6->host_no,
        VAR_7->fw_ddb_index, VAR_8));





 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 FUNC_3(&VAR_10, 0, sizeof(VAR_10));
 FUNC_2(VAR_8, (struct scsi_lun *) VAR_11);

 VAR_9[0] = VAR_0;
 VAR_9[1] = VAR_7->fw_ddb_index;


 VAR_9[2] = FUNC_1(VAR_11[0]);


 VAR_9[3] = FUNC_1(VAR_11[1]);
 VAR_9[5] = 0x01;

 FUNC_5(VAR_6, VAR_1, 1, &VAR_9[0], &VAR_10[0]);
 if (VAR_10[0] != VAR_2 &&
     VAR_10[0] != VAR_3)
  VAR_12 = VAR_4;

 return VAR_12;
}
