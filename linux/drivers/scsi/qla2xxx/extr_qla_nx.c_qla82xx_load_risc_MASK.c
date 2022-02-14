
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_6__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct qla_hw_data*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

int FUNC_7(scsi_qla_host_t *VAR_0, uint32_t *VAR_1)
{
 int VAR_2 = -1;
 struct qla_hw_data *VAR_3 = VAR_0->hw;

 if (FUNC_1(VAR_3))
  VAR_2 = FUNC_5(VAR_0);
 else if (FUNC_0(VAR_3)) {
  FUNC_3(VAR_3);

  FUNC_6(VAR_0);
  FUNC_4(VAR_3);
  VAR_2 = FUNC_2(VAR_0);
 }
 return VAR_2;
}
