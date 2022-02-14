
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ulong ;
typedef scalar_t__ uint32_t ;
struct qla_hw_data {int dummy; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*,scalar_t__) ;
 int FUNC_2 (struct qla_hw_data*,scalar_t__,scalar_t__*) ;

int
FUNC_3(scsi_qla_host_t *VAR_1, uint32_t *VAR_2, uint32_t VAR_3,
    uint32_t VAR_4)
{
 ulong VAR_5;
 int VAR_6 = VAR_0;
 struct qla_hw_data *VAR_7 = VAR_1->hw;


 VAR_3 = FUNC_1(VAR_7, VAR_3);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++, VAR_3++, VAR_2++) {
  VAR_6 = FUNC_2(VAR_7, VAR_3, VAR_2);
  if (VAR_6 != VAR_0)
   break;
  FUNC_0(VAR_2);
 }

 return VAR_6;
}
