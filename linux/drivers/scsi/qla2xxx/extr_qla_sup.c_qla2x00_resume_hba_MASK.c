
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {int host; int dpc_flags; struct qla_hw_data* hw; } ;
struct qla_hw_data {int mbx_cmd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct scsi_qla_host*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static inline void
FUNC_5(struct scsi_qla_host *VAR_2)
{
 struct qla_hw_data *VAR_3 = VAR_2->hw;


 FUNC_0(VAR_1, &VAR_3->mbx_cmd_flags);
 FUNC_4(VAR_0, &VAR_2->dpc_flags);
 FUNC_2(VAR_2);
 FUNC_1(VAR_2);
 FUNC_3(VAR_2->host);
}
