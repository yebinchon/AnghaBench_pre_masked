
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct scsi_cmnd {TYPE_1__* device; } ;
struct qla_hw_data {TYPE_2__* isp_ops; } ;
struct TYPE_8__ {struct qla_hw_data* hw; } ;
typedef TYPE_3__ scsi_qla_host_t ;
struct TYPE_7__ {int target_reset; } ;
struct TYPE_6__ {int host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ,struct scsi_cmnd*,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (struct qla_hw_data*) ;
 TYPE_3__* FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(struct scsi_cmnd *VAR_3)
{
 scsi_qla_host_t *VAR_4 = FUNC_3(VAR_3->device->host);
 struct qla_hw_data *VAR_5 = VAR_4->hw;

 if (FUNC_2(VAR_5)) {
  FUNC_1(VAR_2, VAR_4, 0x803f,
      "PCI/Register disconnect, exiting.\n");
  return VAR_0;
 }

 return FUNC_0("TARGET", VAR_1, VAR_3,
     VAR_5->isp_ops->target_reset);
}
