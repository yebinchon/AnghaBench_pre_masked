
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_nopin {void* max_cmdsn; void* exp_cmdsn; void* statsn; void* ttt; int itt; int lun; int dlength; int flags; int opcode; } ;
struct iscsi_conn {TYPE_1__* sess; int stat_sn; } ;
struct iscsi_cmd {int buf_ptr_size; int stat_sn; int targ_xfer_tag; int init_task_tag; } ;
struct TYPE_2__ {int max_cmd_sn; int exp_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct iscsi_cmd*,TYPE_1__*) ;
 int FUNC_4 (char*,char*,int ,int ,int ,int ) ;
 int FUNC_5 (int,int *) ;

void
FUNC_6(struct iscsi_cmd *VAR_2, struct iscsi_conn *VAR_3,
         struct iscsi_nopin *VAR_4, bool VAR_5)
{
 VAR_4->opcode = VAR_1;
 VAR_4->flags |= VAR_0;
        FUNC_2(VAR_4->dlength, VAR_2->buf_ptr_size);
 if (VAR_5)
  FUNC_5(0xFFFFFFFFFFFFFFFFULL, &VAR_4->lun);
 VAR_4->itt = VAR_2->init_task_tag;
 VAR_4->ttt = FUNC_1(VAR_2->targ_xfer_tag);
 VAR_2->stat_sn = (VAR_5) ? VAR_3->stat_sn++ :
      VAR_3->stat_sn;
 VAR_4->statsn = FUNC_1(VAR_2->stat_sn);

 if (VAR_5)
  FUNC_3(VAR_2, VAR_3->sess);

 VAR_4->exp_cmdsn = FUNC_1(VAR_3->sess->exp_cmd_sn);
 VAR_4->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_3->sess->max_cmd_sn));

 FUNC_4("Built NOPIN %s Response ITT: 0x%08x, TTT: 0x%08x,"
  " StatSN: 0x%08x, Length %u\n", (VAR_5) ?
  "Solicited" : "Unsolicited", VAR_2->init_task_tag,
  VAR_2->targ_xfer_tag, VAR_2->stat_sn, VAR_2->buf_ptr_size);
}
