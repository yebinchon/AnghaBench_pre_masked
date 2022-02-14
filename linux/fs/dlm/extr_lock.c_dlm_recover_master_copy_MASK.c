
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct rcom_lock {void* rl_result; void* rl_remid; int rl_status; int rl_namelen; int rl_name; int rl_lkid; scalar_t__ rl_parent_lkid; } ;
struct dlm_rsb {int res_convertqueue; int res_waitqueue; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_rcom {TYPE_1__ rc_header; scalar_t__ rc_buf; } ;
struct dlm_ls {int ls_recover_seq; int ls_recover_locks_in; } ;
struct dlm_lkb {int lkb_id; int lkb_recover_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*,int ) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_lkb**) ;
 scalar_t__ FUNC_5 (struct dlm_rsb*) ;
 scalar_t__ FUNC_6 (struct dlm_ls*) ;
 scalar_t__ FUNC_7 () ;
 int FUNC_8 (struct dlm_ls*,int ,int ,int,int ,struct dlm_rsb**) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (struct dlm_rsb*) ;
 int FUNC_13 (struct dlm_ls*,char*,int,int ) ;
 int FUNC_14 (struct dlm_ls*,char*,int,int ,int) ;
 int FUNC_15 (struct dlm_rsb*) ;
 int FUNC_16 (struct dlm_ls*,struct dlm_lkb*,struct dlm_rsb*,struct dlm_rcom*) ;
 int FUNC_17 (struct dlm_rsb*,int ) ;
 struct dlm_lkb* FUNC_18 (struct dlm_rsb*,int,int ) ;
 int FUNC_19 (struct dlm_rsb*) ;

int FUNC_20(struct dlm_ls *VAR_5, struct dlm_rcom *VAR_6)
{
 struct rcom_lock *VAR_7 = (struct rcom_lock *) VAR_6->rc_buf;
 struct dlm_rsb *VAR_8;
 struct dlm_lkb *VAR_9;
 uint32_t VAR_10 = 0;
 int VAR_11 = VAR_6->rc_header.h_nodeid;
 int VAR_12;

 if (VAR_7->rl_parent_lkid) {
  VAR_12 = -VAR_2;
  goto out;
 }

 VAR_10 = FUNC_10(VAR_7->rl_lkid);
 VAR_12 = FUNC_8(VAR_5, VAR_7->rl_name, FUNC_9(VAR_7->rl_namelen),
    VAR_11, VAR_4, &VAR_8);
 if (VAR_12)
  goto out;

 FUNC_12(VAR_8);

 if (FUNC_6(VAR_5) && (FUNC_5(VAR_8) != FUNC_7())) {
  FUNC_13(VAR_5, "dlm_recover_master_copy remote %d %x not dir",
     VAR_11, VAR_10);
  VAR_12 = -VAR_0;
  goto out_unlock;
 }

 VAR_9 = FUNC_18(VAR_8, VAR_11, VAR_10);
 if (VAR_9) {
  VAR_12 = -VAR_1;
  goto out_remid;
 }

 VAR_12 = FUNC_4(VAR_5, &VAR_9);
 if (VAR_12)
  goto out_unlock;

 VAR_12 = FUNC_16(VAR_5, VAR_9, VAR_8, VAR_6);
 if (VAR_12) {
  FUNC_0(VAR_5, VAR_9);
  goto out_unlock;
 }

 FUNC_2(VAR_8, VAR_9);
 FUNC_1(VAR_8, VAR_9, VAR_7->rl_status);
 VAR_12 = 0;
 VAR_5->ls_recover_locks_in++;

 if (!FUNC_11(&VAR_8->res_waitqueue) || !FUNC_11(&VAR_8->res_convertqueue))
  FUNC_17(VAR_8, VAR_3);

 out_remid:


 VAR_7->rl_remid = FUNC_3(VAR_9->lkb_id);

 VAR_9->lkb_recover_seq = VAR_5->ls_recover_seq;

 out_unlock:
 FUNC_19(VAR_8);
 FUNC_15(VAR_8);
 out:
 if (VAR_12 && VAR_12 != -VAR_1)
  FUNC_14(VAR_5, "dlm_recover_master_copy remote %d %x error %d",
     VAR_11, VAR_10, VAR_12);
 VAR_7->rl_result = FUNC_3(VAR_12);
 return VAR_12;
}
