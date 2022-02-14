
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_hw_data {int r_a_tov; unsigned long login_timeout; } ;


 int VAR_0 ;
 int FUNC_0 (struct qla_hw_data*) ;
 scalar_t__ FUNC_1 (struct qla_hw_data*) ;

unsigned long
FUNC_2(struct scsi_qla_host *VAR_1)
{
 unsigned long VAR_2;
 struct qla_hw_data *VAR_3 = VAR_1->hw;


 VAR_2 = VAR_3->r_a_tov / 10 * 2;
 if (FUNC_1(VAR_3)) {
  VAR_2 = VAR_0 * 2;
 } else if (!FUNC_0(VAR_3)) {




  VAR_2 = VAR_3->login_timeout;
 }
 return VAR_2;
}
