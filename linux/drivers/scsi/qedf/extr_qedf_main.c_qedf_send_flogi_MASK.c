
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qedf_ctx {int flogi_compl; int dbg_ctx; struct fc_lport* lport; } ;
struct TYPE_2__ {int (* elsct_send ) (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int ) ;} ;
struct fc_lport {int r_a_tov; TYPE_1__ tt; } ;
struct fc_frame {int dummy; } ;
struct fc_els_flogi {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*) ;
 int VAR_4 ;
 struct fc_frame* FUNC_2 (struct fc_lport*,int) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;
 int FUNC_4 (struct fc_lport*,int ,struct fc_frame*,int ,int ,struct fc_lport*,int ) ;

int FUNC_5(struct qedf_ctx *VAR_6)
{
 struct fc_lport *VAR_7;
 struct fc_frame *VAR_8;

 VAR_7 = VAR_6->lport;

 if (!VAR_7->tt.elsct_send) {
  FUNC_0(&VAR_6->dbg_ctx, "tt.elsct_send not set.\n");
  return -VAR_0;
 }

 VAR_8 = FUNC_2(VAR_7, sizeof(struct fc_els_flogi));
 if (!VAR_8) {
  FUNC_0(&(VAR_6->dbg_ctx), "fc_frame_alloc failed.\n");
  return -VAR_2;
 }

 FUNC_1(&(VAR_6->dbg_ctx), VAR_4,
     "Sending FLOGI to reestablish session with switch.\n");
 VAR_7->tt.elsct_send(VAR_7, VAR_3, VAR_8,
     VAR_1, VAR_5, VAR_7, VAR_7->r_a_tov);

 FUNC_3(&VAR_6->flogi_compl);

 return 0;
}
