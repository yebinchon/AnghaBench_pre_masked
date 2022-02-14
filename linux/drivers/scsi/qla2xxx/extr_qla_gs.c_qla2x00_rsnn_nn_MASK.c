
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_2 (int ,TYPE_1__*,int,char*) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*) ;

int
FUNC_4(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 if (FUNC_0(VAR_3) || FUNC_1(VAR_3)) {
  FUNC_2(VAR_1, VAR_2, 0x2050,
      "RSNN_ID call unsupported on ISP2100/ISP2200.\n");
  return (VAR_0);
 }

 return FUNC_3(VAR_2);
}
