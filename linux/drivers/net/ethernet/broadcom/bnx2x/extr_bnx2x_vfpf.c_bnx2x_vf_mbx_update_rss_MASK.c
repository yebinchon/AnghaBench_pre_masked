
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vfpf_rss_tlv {scalar_t__ ind_table_size; scalar_t__ rss_key_size; int rss_flags; int rss_result_mask; int rss_key; int ind_table; } ;
struct bnx2x_virtf {int rss_conf_obj; int index; } ;
struct bnx2x_vf_mbx {TYPE_2__* msg; } ;
struct bnx2x_config_rss_params {scalar_t__ rss_flags; scalar_t__ ramrod_flags; int rss_result_mask; int * rss_obj; int rss_key; int ind_table; } ;
struct bnx2x {int dummy; } ;
struct TYPE_3__ {struct vfpf_rss_tlv update_rss; } ;
struct TYPE_4__ {TYPE_1__ req; } ;


 int FUNC_0 (char*,...) ;
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
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_1 (int ,scalar_t__*) ;
 int FUNC_2 (struct bnx2x*,struct bnx2x_virtf*,int) ;
 int FUNC_3 (struct bnx2x*,struct bnx2x_virtf*,struct bnx2x_config_rss_params*) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (struct bnx2x_config_rss_params*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct bnx2x *VAR_21, struct bnx2x_virtf *VAR_22,
        struct bnx2x_vf_mbx *VAR_23)
{
 struct bnx2x_config_rss_params VAR_24;
 struct vfpf_rss_tlv *VAR_25 = &VAR_23->msg->req.update_rss;
 int VAR_26 = 0;

 if (VAR_25->ind_table_size != VAR_10 ||
     VAR_25->rss_key_size != VAR_11) {
  FUNC_0("failing rss configuration of vf %d due to size mismatch\n",
     VAR_22->index);
  VAR_26 = -VAR_9;
  goto mbx_resp;
 }

 FUNC_5(&VAR_24, 0, sizeof(struct bnx2x_config_rss_params));


 FUNC_4(VAR_24.ind_table, VAR_25->ind_table,
        VAR_10);
 FUNC_4(VAR_24.rss_key, VAR_25->rss_key, sizeof(VAR_25->rss_key));
 VAR_24.rss_obj = &VAR_22->rss_conf_obj;
 VAR_24.rss_result_mask = VAR_25->rss_result_mask;


 VAR_24.rss_flags = 0;
 VAR_24.ramrod_flags = 0;

 if (VAR_25->rss_flags & VAR_18)
  FUNC_1(VAR_6, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_19)
  FUNC_1(VAR_7, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_20)
  FUNC_1(VAR_8, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_12)
  FUNC_1(VAR_0, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_13)
  FUNC_1(VAR_1, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_14)
  FUNC_1(VAR_2, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_15)
  FUNC_1(VAR_3, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_16)
  FUNC_1(VAR_4, &VAR_24.rss_flags);
 if (VAR_25->rss_flags & VAR_17)
  FUNC_1(VAR_5, &VAR_24.rss_flags);

 if ((!(VAR_25->rss_flags & VAR_13) &&
      VAR_25->rss_flags & VAR_14) ||
     (!(VAR_25->rss_flags & VAR_16) &&
      VAR_25->rss_flags & VAR_17)) {
  FUNC_0("about to hit a FW assert. aborting...\n");
  VAR_26 = -VAR_9;
  goto mbx_resp;
 }

 VAR_26 = FUNC_3(VAR_21, VAR_22, &VAR_24);
mbx_resp:
 FUNC_2(VAR_21, VAR_22, VAR_26);
}
