
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_reject {void* max_cmdsn; void* exp_cmdsn; void* statsn; void* ffffffff; int dlength; int flags; int reason; int opcode; } ;
struct iscsi_conn {TYPE_1__* sess; int stat_sn; } ;
struct iscsi_cmd {int stat_sn; int reject_reason; } ;
struct TYPE_2__ {int exp_cmd_sn; int max_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;

void
FUNC_3(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4,
      struct iscsi_reject *VAR_5)
{
 VAR_5->opcode = VAR_2;
 VAR_5->reason = VAR_3->reject_reason;
 VAR_5->flags |= VAR_0;
 FUNC_2(VAR_5->dlength, VAR_1);
 VAR_5->ffffffff = FUNC_1(0xffffffff);
 VAR_3->stat_sn = VAR_4->stat_sn++;
 VAR_5->statsn = FUNC_1(VAR_3->stat_sn);
 VAR_5->exp_cmdsn = FUNC_1(VAR_4->sess->exp_cmd_sn);
 VAR_5->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_4->sess->max_cmd_sn));

}
