
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {scalar_t__ res_first_lkid; int res_nodeid; int res_master_nodeid; int res_name; int res_dir_nodeid; int res_ls; int res_lookup; } ;
struct dlm_lkb {scalar_t__ lkb_id; int lkb_nodeid; int lkb_rsb_lookup; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,char*,scalar_t__,int,int ,int ) ;
 int FUNC_4 (struct dlm_rsb*,int ) ;
 scalar_t__ FUNC_5 (struct dlm_rsb*,int ) ;
 int FUNC_6 (struct dlm_rsb*,struct dlm_lkb*) ;
 int FUNC_7 (struct dlm_rsb*) ;

__attribute__((used)) static int FUNC_8(struct dlm_rsb *VAR_1, struct dlm_lkb *VAR_2)
{
 int VAR_3 = FUNC_1();

 if (FUNC_5(VAR_1, VAR_0)) {
  FUNC_4(VAR_1, VAR_0);
  VAR_1->res_first_lkid = VAR_2->lkb_id;
  VAR_2->lkb_nodeid = VAR_1->res_nodeid;
  return 0;
 }

 if (VAR_1->res_first_lkid && VAR_1->res_first_lkid != VAR_2->lkb_id) {
  FUNC_2(&VAR_2->lkb_rsb_lookup, &VAR_1->res_lookup);
  return 1;
 }

 if (VAR_1->res_master_nodeid == VAR_3) {
  VAR_2->lkb_nodeid = 0;
  return 0;
 }

 if (VAR_1->res_master_nodeid) {
  VAR_2->lkb_nodeid = VAR_1->res_master_nodeid;
  return 0;
 }

 if (FUNC_0(VAR_1) == VAR_3) {






  FUNC_3(VAR_1->res_ls, "set_master %x self master %d dir %d %s",
     VAR_2->lkb_id, VAR_1->res_master_nodeid, VAR_1->res_dir_nodeid,
     VAR_1->res_name);
  VAR_1->res_master_nodeid = VAR_3;
  VAR_1->res_nodeid = 0;
  VAR_2->lkb_nodeid = 0;
  return 0;
 }

 FUNC_7(VAR_1);

 VAR_1->res_first_lkid = VAR_2->lkb_id;
 FUNC_6(VAR_1, VAR_2);
 return 1;
}
