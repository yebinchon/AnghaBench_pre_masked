
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {scalar_t__ init_done; } ;
struct scsi_qla_host {TYPE_1__ flags; struct qla_hw_data* hw; } ;
struct qla_hw_data {int portnum; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct qla_hw_data*) ;
 int FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (struct qla_hw_data*) ;
 int FUNC_3 (struct qla_hw_data*) ;
 int FUNC_4 (struct scsi_qla_host*,int ) ;
 int FUNC_5 (struct scsi_qla_host*) ;
 int FUNC_6 (struct scsi_qla_host*) ;

__attribute__((used)) static int
FUNC_7(struct scsi_qla_host *VAR_4)
{
 uint32_t VAR_5;
 int VAR_6 = VAR_2;
 struct qla_hw_data *VAR_7 = VAR_4->hw;

 if (VAR_4->flags.init_done)
  goto exit_update_idc_reg;

 FUNC_2(VAR_7);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_4(VAR_4,
     VAR_0);



 if ((VAR_5 == (1 << VAR_7->portnum)) && !VAR_3)
  FUNC_1(VAR_4);

 VAR_6 = FUNC_6(VAR_4);
 if (VAR_6 == VAR_1)
  FUNC_0(VAR_7);
 FUNC_3(VAR_7);

exit_update_idc_reg:
 return VAR_6;
}
