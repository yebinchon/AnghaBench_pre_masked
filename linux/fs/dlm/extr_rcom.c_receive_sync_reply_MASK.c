
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_length; int h_nodeid; } ;
struct dlm_rcom {scalar_t__ rc_id; TYPE_1__ rc_header; int rc_type; } ;
struct dlm_ls {scalar_t__ ls_rcom_seq; int ls_rcom_spin; int ls_wait_general; int ls_flags; int ls_recover_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct dlm_ls*,char*,int ,int ,unsigned long long,unsigned long long) ;
 int FUNC_2 (int ,struct dlm_rcom*,int ) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct dlm_ls *VAR_2, struct dlm_rcom *VAR_3)
{
 FUNC_4(&VAR_2->ls_rcom_spin);
 if (!FUNC_6(VAR_1, &VAR_2->ls_flags) ||
     VAR_3->rc_id != VAR_2->ls_rcom_seq) {
  FUNC_1(VAR_2, "reject reply %d from %d seq %llx expect %llx",
     VAR_3->rc_type, VAR_3->rc_header.h_nodeid,
     (unsigned long long)VAR_3->rc_id,
     (unsigned long long)VAR_2->ls_rcom_seq);
  goto out;
 }
 FUNC_2(VAR_2->ls_recover_buf, VAR_3, VAR_3->rc_header.h_length);
 FUNC_3(VAR_0, &VAR_2->ls_flags);
 FUNC_0(VAR_1, &VAR_2->ls_flags);
 FUNC_7(&VAR_2->ls_wait_general);
 out:
 FUNC_5(&VAR_2->ls_rcom_spin);
}
