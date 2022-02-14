
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct scsi_qla_host {struct qla_hw_data* hw; } ;
struct TYPE_2__ {int tgt_node_name; scalar_t__ node_name_set; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;
struct init_cb_81xx {int firmware_options_1; int node_name; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int ) ;

void
FUNC_3(struct scsi_qla_host *VAR_2,
 struct init_cb_81xx *VAR_3)
{
 struct qla_hw_data *VAR_4 = VAR_2->hw;

 if (!FUNC_0())
  return;

 if (VAR_4->tgt.node_name_set) {
  FUNC_2(VAR_3->node_name, VAR_4->tgt.tgt_node_name, VAR_1);
  VAR_3->firmware_options_1 |= FUNC_1(VAR_0);
 }
}
