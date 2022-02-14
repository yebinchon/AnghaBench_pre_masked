
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct qla_hw_data {int dummy; } ;
struct TYPE_3__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct qla_hw_data*,int ) ;
 int FUNC_1 (struct qla_hw_data*,int ,int) ;

__attribute__((used)) static void
FUNC_2(scsi_qla_host_t *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;


 FUNC_1(VAR_3, VAR_0, 0xFF);
 FUNC_0(VAR_3, VAR_1);
}
