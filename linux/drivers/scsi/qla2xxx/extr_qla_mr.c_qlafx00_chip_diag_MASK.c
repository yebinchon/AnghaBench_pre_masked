
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct req_que {int length; } ;
struct qla_hw_data {int fw_transfer_size; struct req_que** req_q_map; } ;
struct TYPE_5__ {struct qla_hw_data* hw; } ;
typedef TYPE_1__ scsi_qla_host_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_1__*,int,char*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;

int
FUNC_2(scsi_qla_host_t *VAR_3)
{
 int VAR_4 = 0;
 struct qla_hw_data *VAR_5 = VAR_3->hw;
 struct req_que *VAR_6 = VAR_5->req_q_map[0];

 VAR_5->fw_transfer_size = VAR_1 * VAR_6->length;

 VAR_4 = FUNC_1(VAR_3);
 if (VAR_4) {
  FUNC_0(VAR_2, VAR_3, 0x1165,
      "Failed mailbox send register test\n");
 } else {

  VAR_4 = VAR_0;
 }
 return VAR_4;
}
