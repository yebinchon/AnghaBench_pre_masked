
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int h_nodeid; int h_length; } ;
struct dlm_rcom {int rc_id; int rc_result; int rc_seq; int rc_seq_reply; int rc_buf; TYPE_1__ rc_header; } ;
struct dlm_mhandle {int dummy; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dlm_ls*,int,int ,int ,struct dlm_rcom**,struct dlm_mhandle**) ;
 int FUNC_1 (struct dlm_ls*,int ,int) ;
 int FUNC_2 (struct dlm_ls*,int,int ,int,int ,int*,int *) ;
 int FUNC_3 (struct dlm_ls*,char*,int) ;
 int FUNC_4 (struct dlm_ls*,struct dlm_mhandle*,struct dlm_rcom*) ;

__attribute__((used)) static void FUNC_5(struct dlm_ls *VAR_2, struct dlm_rcom *VAR_3)
{
 struct dlm_rcom *VAR_4;
 struct dlm_mhandle *VAR_5;
 int VAR_6, VAR_7, VAR_8 = VAR_3->rc_header.h_nodeid;
 int VAR_9 = VAR_3->rc_header.h_length - sizeof(struct dlm_rcom);

 VAR_6 = FUNC_0(VAR_2, VAR_8, VAR_1, 0, &VAR_4, &VAR_5);
 if (VAR_6)
  return;


 if (VAR_3->rc_id == 0xFFFFFFFF) {
  FUNC_3(VAR_2, "receive_rcom_lookup dump from %d", VAR_8);
  FUNC_1(VAR_2, VAR_3->rc_buf, VAR_9);
  return;
 }

 VAR_6 = FUNC_2(VAR_2, VAR_8, VAR_3->rc_buf, VAR_9,
      VAR_0, &VAR_7, ((void*)0));
 if (VAR_6)
  VAR_7 = VAR_6;
 VAR_4->rc_result = VAR_7;
 VAR_4->rc_id = VAR_3->rc_id;
 VAR_4->rc_seq_reply = VAR_3->rc_seq;

 FUNC_4(VAR_2, VAR_5, VAR_4);
}
