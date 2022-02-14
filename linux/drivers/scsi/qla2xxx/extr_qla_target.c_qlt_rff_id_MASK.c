
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct scsi_qla_host {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 scalar_t__ FUNC_2 (struct scsi_qla_host*) ;

u8
FUNC_3(struct scsi_qla_host *VAR_2)
{
 u8 VAR_3 = 0;



 if (FUNC_2(VAR_2)) {
  VAR_3 = VAR_0;
 } else if (FUNC_1(VAR_2)) {
  VAR_3 = VAR_1;
 } else if (FUNC_0(VAR_2))
  VAR_3 = VAR_0 | VAR_1;

 return VAR_3;
}
