
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct qedf_rport {struct qedf_ctx* qedf; } ;
struct qedf_els_cb_arg {int l2_oxid; } ;
struct qedf_ctx {int dbg_ctx; struct fc_lport* lport; } ;
struct fc_lport {int r_a_tov; } ;
struct fc_frame_header {int fh_ox_id; } ;
struct fc_frame {int dummy; } ;
struct fc_els_adisc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,int ,char*,int ) ;
 int VAR_3 ;
 struct fc_frame_header* FUNC_2 (struct fc_frame*) ;
 struct fc_els_adisc* FUNC_3 (struct fc_frame*,int) ;
 int FUNC_4 (struct qedf_els_cb_arg*) ;
 struct qedf_els_cb_arg* FUNC_5 (int,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct qedf_rport*,int ,struct fc_els_adisc*,int,int ,struct qedf_els_cb_arg*,int ) ;
 int VAR_4 ;

int FUNC_8(struct qedf_rport *VAR_5, struct fc_frame *VAR_6)
{
 struct fc_els_adisc *VAR_7;
 struct fc_frame_header *VAR_8;
 struct fc_lport *VAR_9 = VAR_5->qedf->lport;
 struct qedf_els_cb_arg *VAR_10 = ((void*)0);
 struct qedf_ctx *VAR_11;
 uint32_t VAR_12 = VAR_9->r_a_tov;
 int VAR_13;

 VAR_11 = VAR_5->qedf;
 VAR_8 = FUNC_2(VAR_6);

 VAR_10 = FUNC_5(sizeof(struct qedf_els_cb_arg), VAR_2);
 if (!VAR_10) {
  FUNC_0(&(VAR_11->dbg_ctx), "Unable to allocate cb_arg for "
     "ADISC\n");
  VAR_13 = -VAR_1;
  goto adisc_err;
 }
 VAR_10->l2_oxid = FUNC_6(VAR_8->fh_ox_id);

 FUNC_1(&(VAR_11->dbg_ctx), VAR_3,
     "Sending ADISC ox_id=0x%x.\n", VAR_10->l2_oxid);

 VAR_7 = FUNC_3(VAR_6, sizeof(*VAR_7));

 VAR_13 = FUNC_7(VAR_5, VAR_0, VAR_7, sizeof(*VAR_7),
     VAR_4, VAR_10, VAR_12);

adisc_err:
 if (VAR_13) {
  FUNC_0(&(VAR_11->dbg_ctx), "ADISC failed.\n");
  FUNC_4(VAR_10);
 }
 return VAR_13;
}
