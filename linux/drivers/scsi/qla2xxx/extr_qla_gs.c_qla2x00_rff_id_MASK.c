
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct qla_hw_data {int dummy; } ;
struct TYPE_6__ {int d_id; struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;
 int VAR_1 ;
 int FUNC_2 (int ,TYPE_1__*,int,char*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ) ;
 int FUNC_4 (TYPE_1__*) ;

int
FUNC_5(scsi_qla_host_t *VAR_3, u8 VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_3->hw;

 if (FUNC_0(VAR_5) || FUNC_1(VAR_5)) {
  FUNC_2(VAR_2, VAR_3, 0x2046,
      "RFF_ID call not supported on ISP2100/ISP2200.\n");
  return (VAR_1);
 }

 return FUNC_3(VAR_3, &VAR_3->d_id, FUNC_4(VAR_3),
     VAR_0);
}
