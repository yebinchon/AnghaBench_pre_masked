
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_rsb {int res_master_nodeid; int res_hashnode; int res_ref; int res_first_lkid; } ;
struct TYPE_3__ {int h_nodeid; } ;
struct dlm_message {int m_extra; int m_hash; TYPE_1__ m_header; } ;
struct dlm_ls {int ls_rsbtbl_size; TYPE_2__* ls_rsbtbl; } ;
typedef int name ;
struct TYPE_4__ {int lock; int toss; int keep; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (struct dlm_ls*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (struct dlm_rsb*) ;
 int FUNC_4 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_5 (char*,int,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int *,int ) ;
 int FUNC_7 (struct dlm_ls*,char*,int,int,int ,char*) ;
 int FUNC_8 (struct dlm_ls*,char*,int,...) ;
 int FUNC_9 (char*,int ,int) ;
 int FUNC_10 (char*,int ,int) ;
 int FUNC_11 (int *,int *) ;
 int FUNC_12 (struct dlm_message*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct dlm_ls *VAR_2, struct dlm_message *VAR_3)
{
 char VAR_4[VAR_0+1];
 struct dlm_rsb *VAR_5;
 uint32_t VAR_6, VAR_7;
 int VAR_8, VAR_9, VAR_10, VAR_11;

 VAR_11 = VAR_3->m_header.h_nodeid;

 VAR_9 = FUNC_12(VAR_3);

 if (VAR_9 > VAR_0) {
  FUNC_8(VAR_2, "receive_remove from %d bad len %d",
     VAR_11, VAR_9);
  return;
 }

 VAR_10 = FUNC_1(VAR_2, VAR_3->m_hash);
 if (VAR_10 != FUNC_2()) {
  FUNC_8(VAR_2, "receive_remove from %d bad nodeid %d",
     VAR_11, VAR_10);
  return;
 }
 FUNC_10(VAR_4, 0, sizeof(VAR_4));
 FUNC_9(VAR_4, VAR_3->m_extra, VAR_9);

 VAR_6 = FUNC_5(VAR_4, VAR_9, 0);
 VAR_7 = VAR_6 & (VAR_2->ls_rsbtbl_size - 1);

 FUNC_13(&VAR_2->ls_rsbtbl[VAR_7].lock);

 VAR_8 = FUNC_4(&VAR_2->ls_rsbtbl[VAR_7].toss, VAR_4, VAR_9, &VAR_5);
 if (VAR_8) {

  VAR_8 = FUNC_4(&VAR_2->ls_rsbtbl[VAR_7].keep, VAR_4, VAR_9, &VAR_5);
  if (VAR_8) {

   FUNC_8(VAR_2, "receive_remove from %d not found %s",
      VAR_11, VAR_4);
   FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
   return;
  }
  if (VAR_5->res_master_nodeid != VAR_11) {

   FUNC_8(VAR_2, "receive_remove keep from %d master %d",
      VAR_11, VAR_5->res_master_nodeid);
   FUNC_3(VAR_5);
   FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
   return;
  }

  FUNC_7(VAR_2, "receive_remove from %d master %d first %x %s",
     VAR_11, VAR_5->res_master_nodeid, VAR_5->res_first_lkid,
     VAR_4);
  FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
  return;
 }

 if (VAR_5->res_master_nodeid != VAR_11) {
  FUNC_8(VAR_2, "receive_remove toss from %d master %d",
     VAR_11, VAR_5->res_master_nodeid);
  FUNC_3(VAR_5);
  FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
  return;
 }

 if (FUNC_6(&VAR_5->res_ref, VAR_1)) {
  FUNC_11(&VAR_5->res_hashnode, &VAR_2->ls_rsbtbl[VAR_7].toss);
  FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
  FUNC_0(VAR_5);
 } else {
  FUNC_8(VAR_2, "receive_remove from %d rsb ref error",
     VAR_11);
  FUNC_3(VAR_5);
  FUNC_14(&VAR_2->ls_rsbtbl[VAR_7].lock);
 }
}
