
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct seq_file {struct scsi_qla_host* private; } ;
struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_2__ {int num_act_qpairs; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;


 int FUNC_0 (struct seq_file*,char*,int ) ;

__attribute__((used)) static int
FUNC_1(struct seq_file *VAR_0, void *VAR_1)
{
 struct scsi_qla_host *VAR_2 = VAR_0->private;
 struct qla_hw_data *VAR_3 = VAR_2->hw;

 FUNC_0(VAR_0, "%d\n", VAR_3->tgt.num_act_qpairs);
 return 0;
}
