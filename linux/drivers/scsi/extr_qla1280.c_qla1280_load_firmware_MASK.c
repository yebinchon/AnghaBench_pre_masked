
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;


 scalar_t__ FUNC_0 (struct scsi_qla_host*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (struct scsi_qla_host*) ;
 int FUNC_4 (struct scsi_qla_host*) ;

__attribute__((used)) static int
FUNC_5(struct scsi_qla_host *VAR_0)
{

 int VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 if (VAR_1)
  goto out;
 if (FUNC_0(VAR_0))
  VAR_1 = FUNC_3(VAR_0);
 else
  VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  goto out;
 VAR_1 = FUNC_4(VAR_0);
 out:
 return VAR_1;
}
