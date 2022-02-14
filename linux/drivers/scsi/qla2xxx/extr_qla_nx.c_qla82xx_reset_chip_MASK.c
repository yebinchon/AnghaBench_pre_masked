
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct qla_hw_data {TYPE_1__* isp_ops; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
struct TYPE_4__ {int (* disable_intrs ) (struct qla_hw_data*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;

int
FUNC_1(scsi_qla_host_t *VAR_1)
{
 struct qla_hw_data *VAR_2 = VAR_1->hw;

 VAR_2->isp_ops->disable_intrs(VAR_2);

 return VAR_0;
}
