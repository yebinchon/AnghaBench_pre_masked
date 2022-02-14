
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct rcom_status {int rs_flags; } ;
struct rcom_slot {int dummy; } ;
struct rcom_config {int dummy; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_rcom {scalar_t__ rc_buf; scalar_t__ rc_result; int rc_seq; int rc_seq_reply; int rc_id; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int ls_num_slots; int ls_recover_lock; scalar_t__ ls_recover_status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int,struct dlm_rcom**,struct dlm_mhandle**) ;
 scalar_t__ FUNC_1 (struct dlm_ls*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_rcom*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct dlm_ls*,char*,int,int) ;
 int FUNC_6 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;
 int FUNC_7 (struct dlm_ls*,struct rcom_config*,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dlm_ls *VAR_2, struct dlm_rcom *VAR_3)
{
 struct dlm_rcom *VAR_4;
 struct dlm_mhandle *VAR_5;
 struct rcom_status *VAR_6;
 uint32_t VAR_7;
 int VAR_8 = VAR_3->rc_header.h_nodeid;
 int VAR_9 = sizeof(struct rcom_config);
 int VAR_10 = 0;
 int VAR_11;

 if (!FUNC_3(&VAR_3->rc_header)) {
  VAR_7 = FUNC_1(VAR_2);
  goto do_create;
 }

 VAR_6 = (struct rcom_status *)VAR_3->rc_buf;

 if (!(FUNC_4(VAR_6->rs_flags) & VAR_1)) {
  VAR_7 = FUNC_1(VAR_2);
  goto do_create;
 }

 FUNC_8(&VAR_2->ls_recover_lock);
 VAR_7 = VAR_2->ls_recover_status;
 VAR_10 = VAR_2->ls_num_slots;
 FUNC_9(&VAR_2->ls_recover_lock);
 VAR_9 += VAR_10 * sizeof(struct rcom_slot);

 do_create:
 VAR_11 = FUNC_0(VAR_2, VAR_8, VAR_0,
       VAR_9, &VAR_4, &VAR_5);
 if (VAR_11)
  return;

 VAR_4->rc_id = VAR_3->rc_id;
 VAR_4->rc_seq_reply = VAR_3->rc_seq;
 VAR_4->rc_result = VAR_7;

 FUNC_7(VAR_2, (struct rcom_config *)VAR_4->rc_buf, VAR_10);

 if (!VAR_10)
  goto do_send;

 FUNC_8(&VAR_2->ls_recover_lock);
 if (VAR_2->ls_num_slots != VAR_10) {
  FUNC_9(&VAR_2->ls_recover_lock);
  FUNC_5(VAR_2, "receive_rcom_status num_slots %d to %d",
     VAR_10, VAR_2->ls_num_slots);
  VAR_4->rc_result = 0;
  FUNC_7(VAR_2, (struct rcom_config *)VAR_4->rc_buf, 0);
  goto do_send;
 }

 FUNC_2(VAR_2, VAR_4);
 FUNC_9(&VAR_2->ls_recover_lock);

 do_send:
 FUNC_6(VAR_2, VAR_5, VAR_4);
}
