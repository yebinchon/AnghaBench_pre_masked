
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {char* fw_version; } ;
struct qla_hw_data {char* model_number; int fw_major_version; int fw_minor_version; int fw_subminor_version; TYPE_1__ mr; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 char* VAR_0 ;
 int FUNC_1 (int *,size_t,char*,char*,...) ;

void
FUNC_2(scsi_qla_host_t *VAR_1, uint8_t *VAR_2, size_t VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_1->hw;

 if (FUNC_0(VAR_4))
  FUNC_1(VAR_2, VAR_3, "%s FW:v%s DVR:v%s", VAR_4->model_number,
      VAR_4->mr.fw_version, VAR_0);
 else
  FUNC_1(VAR_2, VAR_3,
      "%s FW:v%d.%02d.%02d DVR:v%s", VAR_4->model_number,
      VAR_4->fw_major_version, VAR_4->fw_minor_version,
      VAR_4->fw_subminor_version, VAR_0);
}
