
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct iscsi_text_rsp {int flags; void* max_cmdsn; void* exp_cmdsn; void* statsn; void* ttt; int itt; int dlength; int opcode; } ;
struct iscsi_conn {int cid; TYPE_1__* sess; int stat_sn; } ;
struct iscsi_cmd {int read_data_done; int targ_xfer_tag; int stat_sn; int init_task_tag; scalar_t__ maxcmdsn_inc; } ;
typedef enum iscsit_transport_type { ____Placeholder_iscsit_transport_type } iscsit_transport_type ;
struct TYPE_3__ {int exp_cmd_sn; int max_cmd_sn; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (struct iscsi_cmd*,int,int,int*) ;
 int FUNC_4 (struct iscsi_cmd*,TYPE_1__*) ;
 int FUNC_5 (char*,int ,int,int,int,int ,int,int) ;
 int FUNC_6 (TYPE_1__*) ;

int
FUNC_7(struct iscsi_cmd *VAR_3, struct iscsi_conn *VAR_4,
        struct iscsi_text_rsp *VAR_5,
        enum iscsit_transport_type VAR_6)
{
 int VAR_7, VAR_8;
 bool VAR_9 = 1;

 VAR_7 = FUNC_3(VAR_3, VAR_6,
       VAR_3->read_data_done,
       &VAR_9);
 if (VAR_7 < 0)
  return VAR_7;

 if (VAR_9) {
  VAR_5->flags = VAR_0;
 } else {
  VAR_5->flags = VAR_1;
  VAR_3->read_data_done += VAR_7;
  if (VAR_3->targ_xfer_tag == 0xFFFFFFFF)
   VAR_3->targ_xfer_tag = FUNC_6(VAR_4->sess);
 }
 VAR_5->opcode = VAR_2;
 VAR_8 = ((-VAR_7) & 3);
 FUNC_2(VAR_5->dlength, VAR_7);
 VAR_5->itt = VAR_3->init_task_tag;
 VAR_5->ttt = FUNC_1(VAR_3->targ_xfer_tag);
 VAR_3->stat_sn = VAR_4->stat_sn++;
 VAR_5->statsn = FUNC_1(VAR_3->stat_sn);

 FUNC_4(VAR_3, VAR_4->sess);





 VAR_3->maxcmdsn_inc = 0;
 VAR_5->exp_cmdsn = FUNC_1(VAR_4->sess->exp_cmd_sn);
 VAR_5->max_cmdsn = FUNC_1((u32) FUNC_0(&VAR_4->sess->max_cmd_sn));

 FUNC_5("Built Text Response: ITT: 0x%08x, TTT: 0x%08x, StatSN: 0x%08x,"
  " Length: %u, CID: %hu F: %d C: %d\n", VAR_3->init_task_tag,
  VAR_3->targ_xfer_tag, VAR_3->stat_sn, VAR_7, VAR_4->cid,
  !!(VAR_5->flags & VAR_0),
  !!(VAR_5->flags & VAR_1));

 return VAR_7 + VAR_8;
}
