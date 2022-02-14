
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {int dummy; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {scalar_t__ m_lkid; TYPE_1__ m_header; int m_remid; } ;
struct dlm_lkb {scalar_t__ lkb_remid; struct dlm_rsb* lkb_resource; int lkb_id; } ;
struct dlm_ls {struct dlm_lkb ls_stub_lkb; struct dlm_rsb ls_stub_rsb; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_3 (struct dlm_ls*,int ,struct dlm_lkb**) ;
 int FUNC_4 (struct dlm_rsb*) ;
 int FUNC_5 (struct dlm_rsb*) ;
 int FUNC_6 (struct dlm_ls*,char*,int ,scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (struct dlm_rsb*) ;
 int FUNC_8 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_9 (struct dlm_ls*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_10 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_11 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_12 (struct dlm_rsb*) ;
 int FUNC_13 (struct dlm_lkb*,struct dlm_message*) ;

__attribute__((used)) static int FUNC_14(struct dlm_ls *VAR_1, struct dlm_message *VAR_2)
{
 struct dlm_lkb *VAR_3;
 struct dlm_rsb *VAR_4;
 int VAR_5;

 VAR_5 = FUNC_3(VAR_1, VAR_2->m_remid, &VAR_3);
 if (VAR_5)
  goto fail;

 if (VAR_3->lkb_remid != VAR_2->m_lkid) {
  FUNC_6(VAR_1, "receive_unlock %x remid %x remote %d %x",
     VAR_3->lkb_id, VAR_3->lkb_remid,
     VAR_2->m_header.h_nodeid, VAR_2->m_lkid);
  VAR_5 = -VAR_0;
  FUNC_0(VAR_3);
  goto fail;
 }

 VAR_4 = VAR_3->lkb_resource;

 FUNC_4(VAR_4);
 FUNC_5(VAR_4);

 VAR_5 = FUNC_13(VAR_3, VAR_2);
 if (VAR_5)
  goto out;

 FUNC_8(VAR_3, VAR_2);

 VAR_5 = FUNC_9(VAR_1, VAR_3, VAR_2);
 if (VAR_5) {
  FUNC_10(VAR_4, VAR_3, VAR_5);
  goto out;
 }

 VAR_5 = FUNC_1(VAR_4, VAR_3);
 FUNC_10(VAR_4, VAR_3, VAR_5);
 FUNC_2(VAR_4, VAR_3, VAR_5);
 out:
 FUNC_12(VAR_4);
 FUNC_7(VAR_4);
 FUNC_0(VAR_3);
 return 0;

 fail:
 FUNC_11(VAR_1, VAR_2);
 FUNC_10(&VAR_1->ls_stub_rsb, &VAR_1->ls_stub_lkb, VAR_5);
 return VAR_5;
}
