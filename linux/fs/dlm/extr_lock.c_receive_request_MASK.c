
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_rsb {scalar_t__ res_master_nodeid; } ;
struct TYPE_2__ {int h_nodeid; } ;
struct dlm_message {int m_extra; int m_lkid; TYPE_1__ m_header; } ;
struct dlm_lkb {int lkb_flags; } ;
struct dlm_ls {struct dlm_lkb ls_stub_lkb; struct dlm_rsb ls_stub_rsb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*) ;
 int FUNC_1 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_2 (struct dlm_ls*,struct dlm_lkb**) ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 (struct dlm_lkb*) ;
 int FUNC_5 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_6 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_7 (struct dlm_ls*,int ,int,int,int ,struct dlm_rsb**) ;
 int FUNC_8 (struct dlm_rsb*) ;
 int FUNC_9 (struct dlm_ls*,char*,int ,int,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (struct dlm_rsb*) ;
 int FUNC_12 (struct dlm_message*) ;
 int FUNC_13 (struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_14 (struct dlm_ls*,struct dlm_lkb*,struct dlm_message*) ;
 int FUNC_15 (struct dlm_ls*,int ,int) ;
 int FUNC_16 (struct dlm_rsb*,struct dlm_lkb*,int) ;
 int FUNC_17 (struct dlm_ls*,struct dlm_message*) ;
 int FUNC_18 (struct dlm_rsb*) ;
 int FUNC_19 (struct dlm_ls*,struct dlm_rsb*,int) ;

__attribute__((used)) static int FUNC_20(struct dlm_ls *VAR_5, struct dlm_message *VAR_6)
{
 struct dlm_lkb *VAR_7;
 struct dlm_rsb *VAR_8;
 int VAR_9;
 int VAR_10, VAR_11 = 0;

 VAR_9 = VAR_6->m_header.h_nodeid;

 VAR_10 = FUNC_2(VAR_5, &VAR_7);
 if (VAR_10)
  goto fail;

 FUNC_13(VAR_7, VAR_6);
 VAR_7->lkb_flags |= VAR_0;
 VAR_10 = FUNC_14(VAR_5, VAR_7, VAR_6);
 if (VAR_10) {
  FUNC_0(VAR_5, VAR_7);
  goto fail;
 }







 VAR_11 = FUNC_12(VAR_6);

 VAR_10 = FUNC_7(VAR_5, VAR_6->m_extra, VAR_11, VAR_9,
    VAR_4, &VAR_8);
 if (VAR_10) {
  FUNC_0(VAR_5, VAR_7);
  goto fail;
 }

 FUNC_8(VAR_8);

 if (VAR_8->res_master_nodeid != FUNC_3()) {
  VAR_10 = FUNC_19(VAR_5, VAR_8, VAR_9);
  if (VAR_10) {
   FUNC_18(VAR_8);
   FUNC_11(VAR_8);
   FUNC_0(VAR_5, VAR_7);
   goto fail;
  }
 }

 FUNC_1(VAR_8, VAR_7);
 VAR_10 = FUNC_5(VAR_8, VAR_7);
 FUNC_16(VAR_8, VAR_7, VAR_10);
 FUNC_6(VAR_8, VAR_7, VAR_10);

 FUNC_18(VAR_8);
 FUNC_11(VAR_8);

 if (VAR_10 == -VAR_2)
  VAR_10 = 0;
 if (VAR_10)
  FUNC_4(VAR_7);
 return 0;

 fail:
 if (VAR_10 != -VAR_3) {
  FUNC_9(VAR_5, "receive_request %x from %d %d",
     VAR_6->m_lkid, VAR_9, VAR_10);
 }

 if (VAR_11 && VAR_10 == -VAR_1) {
  FUNC_15(VAR_5, VAR_6->m_extra, VAR_11);
  FUNC_10(1000);
 }

 FUNC_17(VAR_5, VAR_6);
 FUNC_16(&VAR_5->ls_stub_rsb, &VAR_5->ls_stub_lkb, VAR_10);
 return VAR_10;
}
