
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct dlm_rsb {int res_dir_nodeid; int res_master_nodeid; int res_nodeid; int res_hash; int res_bucket; void* res_toss_time; int res_ref; int res_name; int res_first_lkid; } ;
struct dlm_ls {int ls_rsbtbl_size; TYPE_1__* ls_rsbtbl; int ls_num_nodes; } ;
struct TYPE_2__ {int lock; int toss; int keep; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (struct dlm_ls*,int) ;
 scalar_t__ FUNC_3 (struct dlm_ls*,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_6 (struct dlm_ls*,char*,int,struct dlm_rsb**) ;
 int FUNC_7 (struct dlm_rsb*) ;
 int FUNC_8 (char*,int,int ) ;
 void* VAR_8 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct dlm_rsb*) ;
 int FUNC_11 (struct dlm_ls*,char*,int,int ,int ) ;
 int FUNC_12 (struct dlm_ls*,char*,...) ;
 int FUNC_13 (struct dlm_ls*,char*,int,unsigned int,int,int ,...) ;
 int FUNC_14 (struct dlm_ls*) ;
 int FUNC_15 (struct dlm_rsb*) ;
 int FUNC_16 (struct dlm_rsb*,int *) ;
 int FUNC_17 (struct dlm_rsb*,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct dlm_rsb*) ;

int FUNC_21(struct dlm_ls *VAR_9, int VAR_10, char *VAR_11, int VAR_12,
        unsigned int VAR_13, int *VAR_14, int *VAR_15)
{
 struct dlm_rsb *VAR_16 = ((void*)0);
 uint32_t VAR_17, VAR_18;
 int VAR_19 = (VAR_13 & VAR_2);
 int VAR_20 = (VAR_13 & VAR_3);
 int VAR_21 = FUNC_4();
 int VAR_22, VAR_23, VAR_24 = 0;

 if (VAR_12 > VAR_4)
  return -VAR_6;

 if (VAR_10 == VAR_21) {
  FUNC_12(VAR_9, "dlm_master_lookup from our_nodeid %d flags %x",
     VAR_21, VAR_13);
  return -VAR_6;
 }

 VAR_17 = FUNC_8(VAR_11, VAR_12, 0);
 VAR_18 = VAR_17 & (VAR_9->ls_rsbtbl_size - 1);

 VAR_22 = FUNC_2(VAR_9, VAR_17);
 if (VAR_22 != VAR_21) {
  FUNC_12(VAR_9, "dlm_master_lookup from %d dir %d our %d h %x %d",
     VAR_10, VAR_22, VAR_21, VAR_17,
     VAR_9->ls_num_nodes);
  *VAR_14 = -1;
  return -VAR_6;
 }

 retry:
 VAR_23 = FUNC_14(VAR_9);
 if (VAR_23 < 0)
  return VAR_23;

 FUNC_18(&VAR_9->ls_rsbtbl[VAR_18].lock);
 VAR_23 = FUNC_5(&VAR_9->ls_rsbtbl[VAR_18].keep, VAR_11, VAR_12, &VAR_16);
 if (!VAR_23) {



  FUNC_7(VAR_16);
  FUNC_19(&VAR_9->ls_rsbtbl[VAR_18].lock);
  FUNC_10(VAR_16);
  goto found;
 }

 VAR_23 = FUNC_5(&VAR_9->ls_rsbtbl[VAR_18].toss, VAR_11, VAR_12, &VAR_16);
 if (VAR_23)
  goto not_found;




 VAR_24 = 1;
 found:
 if (VAR_16->res_dir_nodeid != VAR_21) {

  FUNC_12(VAR_9, "dlm_master_lookup res_dir %d our %d %s",
     VAR_16->res_dir_nodeid, VAR_21, VAR_16->res_name);
  VAR_16->res_dir_nodeid = VAR_21;
 }

 if (VAR_20 && FUNC_3(VAR_9, VAR_16->res_master_nodeid)) {





  VAR_16->res_master_nodeid = VAR_10;
  VAR_16->res_nodeid = VAR_10;
  FUNC_17(VAR_16, VAR_7);

  if (VAR_24) {

   FUNC_12(VAR_9, "dlm_master_lookup fix_master on toss");
   FUNC_0(VAR_16);
  }
 }

 if (VAR_19 && (VAR_16->res_master_nodeid != VAR_10)) {




  FUNC_13(VAR_9, "dlm_master_lookup from_master %d "
     "master_nodeid %d res_nodeid %d first %x %s",
     VAR_10, VAR_16->res_master_nodeid, VAR_16->res_nodeid,
     VAR_16->res_first_lkid, VAR_16->res_name);

  if (VAR_16->res_master_nodeid == VAR_21) {
   FUNC_12(VAR_9, "from_master %d our_master", VAR_10);
   FUNC_0(VAR_16);
   goto out_found;
  }

  VAR_16->res_master_nodeid = VAR_10;
  VAR_16->res_nodeid = VAR_10;
  FUNC_17(VAR_16, VAR_7);
 }

 if (!VAR_16->res_master_nodeid) {



  FUNC_11(VAR_9, "dlm_master_lookup master 0 to %d first %x %s",
     VAR_10, VAR_16->res_first_lkid, VAR_16->res_name);
  VAR_16->res_master_nodeid = VAR_10;
  VAR_16->res_nodeid = VAR_10;
 }

 if (!VAR_19 && !VAR_20 &&
     (VAR_16->res_master_nodeid == VAR_10)) {




  FUNC_13(VAR_9, "dlm_master_lookup from master %d flags %x "
     "first %x %s", VAR_10, VAR_13,
     VAR_16->res_first_lkid, VAR_16->res_name);
 }

 out_found:
 *VAR_14 = VAR_16->res_master_nodeid;
 if (VAR_15)
  *VAR_15 = VAR_1;

 if (VAR_24) {
  VAR_16->res_toss_time = VAR_8;

  FUNC_19(&VAR_9->ls_rsbtbl[VAR_18].lock);
 } else {

  FUNC_20(VAR_16);
  FUNC_15(VAR_16);
 }
 return 0;

 not_found:
 VAR_23 = FUNC_6(VAR_9, VAR_11, VAR_12, &VAR_16);
 if (VAR_23 == -VAR_5) {
  FUNC_19(&VAR_9->ls_rsbtbl[VAR_18].lock);
  goto retry;
 }
 if (VAR_23)
  goto out_unlock;

 VAR_16->res_hash = VAR_17;
 VAR_16->res_bucket = VAR_18;
 VAR_16->res_dir_nodeid = VAR_21;
 VAR_16->res_master_nodeid = VAR_10;
 VAR_16->res_nodeid = VAR_10;
 FUNC_9(&VAR_16->res_ref);
 VAR_16->res_toss_time = VAR_8;

 VAR_23 = FUNC_16(VAR_16, &VAR_9->ls_rsbtbl[VAR_18].toss);
 if (VAR_23) {

  FUNC_1(VAR_16);
  FUNC_19(&VAR_9->ls_rsbtbl[VAR_18].lock);
  goto retry;
 }

 if (VAR_15)
  *VAR_15 = VAR_0;
 *VAR_14 = VAR_10;
 VAR_23 = 0;
 out_unlock:
 FUNC_19(&VAR_9->ls_rsbtbl[VAR_18].lock);
 return VAR_23;
}
