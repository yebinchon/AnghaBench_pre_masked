
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct qla_qpair {int dummy; } ;
struct TYPE_2__ {scalar_t__ num_pend_cmds; } ;
struct qla_hw_data {int hardware_lock; TYPE_1__ tgt; } ;
struct atio_from_isp {int dummy; } ;


 scalar_t__ FUNC_0 (struct qla_hw_data*) ;
 int VAR_0 ;
 int FUNC_1 (struct qla_qpair*,struct atio_from_isp*,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int
FUNC_4(struct scsi_qla_host *VAR_1, struct qla_qpair *VAR_2,
 struct atio_from_isp *VAR_3, uint8_t VAR_4)
{
 struct qla_hw_data *VAR_5 = VAR_1->hw;
 unsigned long VAR_6;

 if (VAR_5->tgt.num_pend_cmds < FUNC_0(VAR_5))
  return 0;

 if (!VAR_4)
  FUNC_2(&VAR_5->hardware_lock, VAR_6);
 FUNC_1(VAR_2, VAR_3, VAR_0);
 if (!VAR_4)
  FUNC_3(&VAR_5->hardware_lock, VAR_6);

 return 1;
}
