
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct se_session {scalar_t__ sess_cmd_map; int sess_tag_pool; } ;
struct ft_sess {TYPE_2__* tport; struct se_session* se_sess; } ;
struct TYPE_6__ {int map_tag; int map_cpu; } ;
struct ft_cmd {int work; struct fc_frame* req_frame; TYPE_3__ se_cmd; int seq; struct ft_sess* sess; } ;
struct fc_lport {int dummy; } ;
struct fc_frame {int dummy; } ;
struct TYPE_5__ {TYPE_1__* tpg; struct fc_lport* lport; } ;
struct TYPE_4__ {int workqueue; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct fc_frame*) ;
 int FUNC_2 (struct fc_lport*,struct fc_frame*) ;
 int FUNC_3 (struct fc_lport*,struct fc_frame*,int ,int ) ;
 int VAR_1 ;
 int FUNC_4 (struct ft_sess*) ;
 int FUNC_5 (struct ft_cmd*,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int*) ;
 int FUNC_9 (struct se_session*,TYPE_3__*) ;

__attribute__((used)) static void FUNC_10(struct ft_sess *VAR_2, struct fc_frame *VAR_3)
{
 struct ft_cmd *VAR_4;
 struct fc_lport *VAR_5 = VAR_2->tport->lport;
 struct se_session *VAR_6 = VAR_2->se_sess;
 int VAR_7, VAR_8;

 VAR_7 = FUNC_8(&VAR_6->sess_tag_pool, &VAR_8);
 if (VAR_7 < 0)
  goto busy;

 VAR_4 = &((struct ft_cmd *)VAR_6->sess_cmd_map)[VAR_7];
 FUNC_5(VAR_4, 0, sizeof(struct ft_cmd));

 VAR_4->se_cmd.map_tag = VAR_7;
 VAR_4->se_cmd.map_cpu = VAR_8;
 VAR_4->sess = VAR_2;
 VAR_4->seq = FUNC_2(VAR_5, VAR_3);
 if (!VAR_4->seq) {
  FUNC_9(VAR_6, &VAR_4->se_cmd);
  goto busy;
 }
 VAR_4->req_frame = VAR_3;

 FUNC_0(&VAR_4->work, VAR_1);
 FUNC_7(VAR_2->tport->tpg->workqueue, &VAR_4->work);
 return;

busy:
 FUNC_6("cmd or seq allocation failure - sending BUSY\n");
 FUNC_3(VAR_5, VAR_3, VAR_0, 0);
 FUNC_1(VAR_3);
 FUNC_4(VAR_2);
}
