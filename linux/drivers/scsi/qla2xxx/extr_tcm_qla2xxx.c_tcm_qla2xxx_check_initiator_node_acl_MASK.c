
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tcm_qla2xxx_tpg {int se_tpg; } ;
struct tcm_qla2xxx_lport {struct tcm_qla2xxx_tpg* tpg_1; } ;
struct se_session {int dummy; } ;
struct qla_tgt_cmd {int dummy; } ;
struct qla_hw_data {int cur_fw_xcb_count; } ;
struct fc_port {int dummy; } ;
struct TYPE_4__ {struct tcm_qla2xxx_lport* target_lport_ptr; } ;
struct TYPE_5__ {TYPE_1__ vha_tgt; struct qla_hw_data* hw; } ;
typedef TYPE_2__ scsi_qla_host_t ;
typedef int port_name ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct se_session*) ;
 int FUNC_1 (struct se_session*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned char**,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (unsigned char*,int,char*,unsigned char*) ;
 struct se_session* FUNC_6 (int *,int,int,int ,unsigned char*,struct fc_port*,int ) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_7(
 scsi_qla_host_t *VAR_4,
 unsigned char *VAR_5,
 struct fc_port *VAR_6)
{
 struct qla_hw_data *VAR_7 = VAR_4->hw;
 struct tcm_qla2xxx_lport *VAR_8;
 struct tcm_qla2xxx_tpg *VAR_9;
 struct se_session *VAR_10;
 unsigned char VAR_11[36];
 int VAR_12 = (VAR_7->cur_fw_xcb_count) ? VAR_7->cur_fw_xcb_count :
         VAR_2;

 VAR_8 = VAR_4->vha_tgt.target_lport_ptr;
 if (!VAR_8) {
  FUNC_4("Unable to locate struct tcm_qla2xxx_lport\n");
  FUNC_2();
  return -VAR_0;
 }



 VAR_9 = VAR_8->tpg_1;
 if (!VAR_9) {
  FUNC_4("Unable to locate struct tcm_qla2xxx_lport->tpg_1\n");
  return -VAR_0;
 }




 FUNC_3(&VAR_11, 0, 36);
 FUNC_5(VAR_11, sizeof(VAR_11), "%8phC", VAR_5);




 VAR_10 = FUNC_6(&VAR_9->se_tpg, VAR_12,
           sizeof(struct qla_tgt_cmd),
           VAR_1, VAR_11,
           VAR_6, VAR_3);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 return 0;
}
