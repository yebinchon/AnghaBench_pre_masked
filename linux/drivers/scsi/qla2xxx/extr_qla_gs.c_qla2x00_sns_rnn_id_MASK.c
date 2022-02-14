
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int * param; } ;
struct TYPE_14__ {int* rnn_data; TYPE_3__ cmd; } ;
struct sns_cmd_pkt {TYPE_4__ p; } ;
struct qla_hw_data {int sns_cmd_dma; } ;
struct TYPE_11__ {int domain; int area; int al_pa; } ;
struct TYPE_12__ {TYPE_1__ b; } ;
struct TYPE_15__ {int * node_name; TYPE_2__ d_id; struct qla_hw_data* hw; } ;
typedef TYPE_5__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__,TYPE_5__*,int,char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (scalar_t__,TYPE_5__*,int,int*,int) ;
 struct sns_cmd_pkt* FUNC_2 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_3 (TYPE_5__*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(scsi_qla_host_t *VAR_8)
{
 int VAR_9;
 struct qla_hw_data *VAR_10 = VAR_8->hw;
 struct sns_cmd_pkt *VAR_11;



 VAR_11 = FUNC_2(VAR_8, VAR_2, VAR_5,
     VAR_4);


 VAR_11->p.cmd.param[0] = VAR_8->d_id.b.al_pa;
 VAR_11->p.cmd.param[1] = VAR_8->d_id.b.area;
 VAR_11->p.cmd.param[2] = VAR_8->d_id.b.domain;

 VAR_11->p.cmd.param[4] = VAR_8->node_name[7];
 VAR_11->p.cmd.param[5] = VAR_8->node_name[6];
 VAR_11->p.cmd.param[6] = VAR_8->node_name[5];
 VAR_11->p.cmd.param[7] = VAR_8->node_name[4];
 VAR_11->p.cmd.param[8] = VAR_8->node_name[3];
 VAR_11->p.cmd.param[9] = VAR_8->node_name[2];
 VAR_11->p.cmd.param[10] = VAR_8->node_name[1];
 VAR_11->p.cmd.param[11] = VAR_8->node_name[0];


 VAR_9 = FUNC_3(VAR_8, VAR_10->sns_cmd_dma, VAR_3 / 2,
     sizeof(struct sns_cmd_pkt));
 if (VAR_9 != VAR_1) {

  FUNC_0(VAR_7, VAR_8, 0x204a,
      "RNN_ID Send SNS failed (%d).\n", VAR_9);
 } else if (VAR_11->p.rnn_data[8] != 0x80 ||
     VAR_11->p.rnn_data[9] != 0x02) {
  FUNC_0(VAR_7 + VAR_6, VAR_8, 0x207b,
      "RNN_ID failed, rejected request, rnn_rsp:\n");
  FUNC_1(VAR_7 + VAR_6, VAR_8, 0x207c,
      VAR_11->p.rnn_data, 16);
  VAR_9 = VAR_0;
 } else {
  FUNC_0(VAR_7, VAR_8, 0x204c,
      "RNN_ID exiting normally.\n");
 }

 return (VAR_9);
}
