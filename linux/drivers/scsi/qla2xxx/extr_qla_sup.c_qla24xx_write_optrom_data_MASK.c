
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct scsi_qla_host {int host; struct qla_hw_data* hw; } ;
struct qla_hw_data {int mbx_cmd_flags; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct scsi_qla_host*,int*,int,int) ;
 int FUNC_3 (struct scsi_qla_host*,int*,int,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int *) ;

int
FUNC_7(struct scsi_qla_host *VAR_1, void *VAR_2,
    uint32_t VAR_3, uint32_t VAR_4)
{
 int VAR_5;
 struct qla_hw_data *VAR_6 = VAR_1->hw;


 FUNC_4(VAR_1->host);
 FUNC_6(VAR_0, &VAR_6->mbx_cmd_flags);


 if (FUNC_0(VAR_6))
  VAR_5 = FUNC_3(VAR_1, (uint32_t *)VAR_2,
      VAR_3 >> 2, VAR_4 >> 2);
 else
  VAR_5 = FUNC_2(VAR_1, (uint32_t *)VAR_2,
      VAR_3 >> 2, VAR_4 >> 2);

 FUNC_1(VAR_0, &VAR_6->mbx_cmd_flags);
 FUNC_5(VAR_1->host);

 return VAR_5;
}
