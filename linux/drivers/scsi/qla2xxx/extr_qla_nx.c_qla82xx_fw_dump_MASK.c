
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int isp82xx_no_md_cap; } ;
struct qla_hw_data {TYPE_1__ flags; int allow_cna_fw_dump; } ;
struct TYPE_7__ {int host; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;

void
FUNC_6(scsi_qla_host_t *VAR_0, int VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_0->hw;

 if (!VAR_2->allow_cna_fw_dump)
  return;

 FUNC_4(VAR_0->host);
 VAR_2->flags.isp82xx_no_md_cap = 1;
 FUNC_1(VAR_2);
 FUNC_3(VAR_0);
 FUNC_2(VAR_2);
 FUNC_0(VAR_0);
 FUNC_5(VAR_0->host);
}
