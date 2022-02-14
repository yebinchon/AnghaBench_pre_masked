
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
typedef int u64 ;
struct se_cmd {int dummy; } ;
struct qla_tgt_mgmt_cmd {struct se_cmd se_cmd; struct fc_port* sess; } ;
struct fc_port {int se_sess; TYPE_1__* vha; } ;
struct TYPE_2__ {int host_no; } ;


 int VAR_0 ;
 int VAR_1 ;







 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,int ,...) ;
 int FUNC_1 (struct se_cmd*,int ,int *,int ,struct qla_tgt_mgmt_cmd*,int,int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct qla_tgt_mgmt_cmd *VAR_10, u64 VAR_11,
 uint16_t VAR_12, uint32_t VAR_13)
{
 struct fc_port *VAR_14 = VAR_10->sess;
 struct se_cmd *VAR_15 = &VAR_10->se_cmd;
 int VAR_16 = 0;
 int VAR_17 = VAR_2;

 switch (VAR_12) {
 case 132:
  FUNC_0("%ld: ABTS received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_4;
  VAR_17 |= VAR_3;
  break;
 case 134:
  FUNC_0("%ld: 2G Abort Task received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_4;
  break;
 case 131:
  FUNC_0("%ld: CLEAR_ACA received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_6;
  break;
 case 128:
  FUNC_0("%ld: TARGET_RESET received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_9;
  break;
 case 129:
  FUNC_0("%ld: LUN_RESET received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_8;
  break;
 case 130:
  FUNC_0("%ld: CLEAR_TS received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_7;
  break;
 case 133:
  FUNC_0("%ld: ABORT_TS received\n", VAR_14->vha->host_no);
  VAR_16 = VAR_5;
  break;
 default:
  FUNC_0("%ld: Unknown task mgmt fn 0x%x\n",
      VAR_14->vha->host_no, VAR_12);
  return -VAR_0;
 }

 return FUNC_1(VAR_15, VAR_14->se_sess, ((void*)0), VAR_11, VAR_10,
     VAR_16, VAR_1, VAR_13, VAR_17);
}
