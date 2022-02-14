
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct scsi_qla_host {int dummy; } ;
struct qla27xx_fwdt_template {int template_size; } ;


 scalar_t__ FUNC_0 (struct qla27xx_fwdt_template*) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla27xx_fwdt_template*,int *,int *) ;

ulong
FUNC_2(struct scsi_qla_host *VAR_0, void *VAR_1)
{
 struct qla27xx_fwdt_template *VAR_2 = VAR_1;
 ulong VAR_3 = 0;

 if (FUNC_0(VAR_2)) {
  VAR_3 = VAR_2->template_size;
  FUNC_1(VAR_0, VAR_2, ((void*)0), &VAR_3);
 }

 return VAR_3;
}
