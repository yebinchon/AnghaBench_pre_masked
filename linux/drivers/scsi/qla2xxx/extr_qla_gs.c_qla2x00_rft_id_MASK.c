
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_5__ {int d_id; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

int
FUNC_4(scsi_qla_host_t *VAR_0)
{
 struct qla_hw_data *VAR_1 = VAR_0->hw;

 if (FUNC_0(VAR_1) || FUNC_1(VAR_1))
  return FUNC_2(VAR_0);

 return FUNC_3(VAR_0, &VAR_0->d_id);
}
