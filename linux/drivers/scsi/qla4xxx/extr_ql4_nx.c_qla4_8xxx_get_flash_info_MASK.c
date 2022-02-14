
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*,int *) ;
 int FUNC_7 (struct scsi_qla_host*,int ) ;

int
FUNC_8(struct scsi_qla_host *VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_6(VAR_1, &VAR_3);
 if (VAR_2 != VAR_0)
  return VAR_2;

 FUNC_7(VAR_1, VAR_3);
 if (FUNC_0(VAR_1)) {
  FUNC_3(VAR_1);
  FUNC_4(VAR_1);
 } else if (FUNC_1(VAR_1) || FUNC_2(VAR_1)) {
  FUNC_5(VAR_1);
 }

 return VAR_0;
}
