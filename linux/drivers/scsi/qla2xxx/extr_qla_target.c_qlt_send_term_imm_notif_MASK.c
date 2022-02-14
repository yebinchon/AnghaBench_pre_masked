
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int dummy; } ;
struct imm_ntfy_from_isp {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct scsi_qla_host*,struct imm_ntfy_from_isp*) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void FUNC_3(struct scsi_qla_host *VAR_0,
 struct imm_ntfy_from_isp *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(!VAR_2);
 VAR_3 = FUNC_1(VAR_0, VAR_1);
 FUNC_2("rc = %d\n", VAR_3);
}
