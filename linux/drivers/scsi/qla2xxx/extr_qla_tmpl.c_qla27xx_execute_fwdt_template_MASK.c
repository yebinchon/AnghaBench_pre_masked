
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ulong ;
struct scsi_qla_host {int dummy; } ;
struct qla27xx_fwdt_template {int template_size; } ;


 struct qla27xx_fwdt_template* FUNC_0 (void*,struct qla27xx_fwdt_template*,int ) ;
 int FUNC_1 (struct scsi_qla_host*,struct qla27xx_fwdt_template*) ;
 scalar_t__ FUNC_2 (struct qla27xx_fwdt_template*) ;
 int FUNC_3 (struct scsi_qla_host*,struct qla27xx_fwdt_template*,void*,int *) ;

__attribute__((used)) static ulong
FUNC_4(struct scsi_qla_host *VAR_0,
    struct qla27xx_fwdt_template *VAR_1, void *VAR_2)
{
 ulong VAR_3 = 0;

 if (FUNC_2(VAR_1)) {
  VAR_3 = VAR_1->template_size;
  VAR_1 = FUNC_0(VAR_2, VAR_1, VAR_3);
  FUNC_1(VAR_0, VAR_1);
  FUNC_3(VAR_0, VAR_1, VAR_2, &VAR_3);
 }

 return VAR_3;
}
