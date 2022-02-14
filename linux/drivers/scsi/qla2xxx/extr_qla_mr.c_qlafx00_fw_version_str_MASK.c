
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_2__ {char* fw_version; } ;
struct qla_hw_data {TYPE_1__ mr; } ;


 int FUNC_0 (char*,size_t,char*,char*) ;

char *
FUNC_1(struct scsi_qla_host *VAR_0, char *VAR_1, size_t VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_0->hw;

 FUNC_0(VAR_1, VAR_2, "%s", VAR_3->mr.fw_version);
 return VAR_1;
}
