
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_rsb {int res_master_nodeid; int res_nodeid; size_t res_hash; size_t res_bucket; int res_dir_nodeid; int res_name; int res_ref; int res_hashnode; scalar_t__ res_first_lkid; } ;
struct dlm_ls {TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; int keep; int toss; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int FUNC_0 (struct dlm_rsb*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_4 (struct dlm_ls*,char*,int,struct dlm_rsb**) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct dlm_ls*,char*,int,int,...) ;
 int FUNC_8 (struct dlm_ls*,char*,int,int,...) ;
 int FUNC_9 (struct dlm_ls*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (struct dlm_rsb*,int ) ;
 int FUNC_12 (struct dlm_rsb*,int *) ;
 int FUNC_13 (struct dlm_rsb*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct dlm_ls *VAR_6, char *VAR_7, int VAR_8,
   uint32_t VAR_9, uint32_t VAR_10,
   int VAR_11, int VAR_12,
   unsigned int VAR_13, struct dlm_rsb **VAR_14)
{
 struct dlm_rsb *VAR_15 = ((void*)0);
 int VAR_16 = FUNC_1();
 int VAR_17 = 0;
 int VAR_18 = 0;
 int VAR_19 = 0;
 int VAR_20 = 0;
 int VAR_21;

 if (VAR_13 & VAR_4) {
  if (VAR_12 == VAR_11)
   VAR_19 = 1;
  else
   VAR_18 = 1;
 } else if (VAR_13 & VAR_5) {
  VAR_17 = 1;
 }
 if (VAR_17 || VAR_19 ||
     (VAR_18 && (VAR_11 == VAR_16))) {
  VAR_20 = 1;
 }

 retry:
 if (VAR_20) {
  VAR_21 = FUNC_9(VAR_6);
  if (VAR_21 < 0)
   goto out;
 }

 FUNC_14(&VAR_6->ls_rsbtbl[VAR_10].lock);

 VAR_21 = FUNC_3(&VAR_6->ls_rsbtbl[VAR_10].keep, VAR_7, VAR_8, &VAR_15);
 if (VAR_21)
  goto do_toss;





 FUNC_5(&VAR_15->res_ref);
 VAR_21 = 0;
 goto out_unlock;


 do_toss:
 VAR_21 = FUNC_3(&VAR_6->ls_rsbtbl[VAR_10].toss, VAR_7, VAR_8, &VAR_15);
 if (VAR_21)
  goto do_new;
 if ((VAR_15->res_master_nodeid != VAR_16) && VAR_18) {


  FUNC_7(VAR_6, "find_rsb toss from_other %d master %d dir %d %s",
     VAR_12, VAR_15->res_master_nodeid, VAR_11,
     VAR_15->res_name);
  VAR_21 = -VAR_2;
  goto out_unlock;
 }

 if ((VAR_15->res_master_nodeid != VAR_16) && VAR_19) {

  FUNC_8(VAR_6, "find_rsb toss from_dir %d master %d",
     VAR_12, VAR_15->res_master_nodeid);
  FUNC_2(VAR_15);

  VAR_15->res_master_nodeid = VAR_16;
  VAR_15->res_nodeid = 0;
  FUNC_11(VAR_15, VAR_3);
  VAR_15->res_first_lkid = 0;
 }

 if (VAR_17 && (VAR_15->res_master_nodeid != VAR_16)) {


  FUNC_13(VAR_15, VAR_3);
  VAR_15->res_first_lkid = 0;
 }

 FUNC_10(&VAR_15->res_hashnode, &VAR_6->ls_rsbtbl[VAR_10].toss);
 VAR_21 = FUNC_12(VAR_15, &VAR_6->ls_rsbtbl[VAR_10].keep);
 goto out_unlock;


 do_new:




 if (VAR_21 == -VAR_1 && !VAR_20)
  goto out_unlock;

 VAR_21 = FUNC_4(VAR_6, VAR_7, VAR_8, &VAR_15);
 if (VAR_21 == -VAR_0) {
  FUNC_15(&VAR_6->ls_rsbtbl[VAR_10].lock);
  goto retry;
 }
 if (VAR_21)
  goto out_unlock;

 VAR_15->res_hash = VAR_9;
 VAR_15->res_bucket = VAR_10;
 VAR_15->res_dir_nodeid = VAR_11;
 FUNC_6(&VAR_15->res_ref);

 if (VAR_19) {

  FUNC_7(VAR_6, "find_rsb new from_dir %d recreate %s",
     VAR_12, VAR_15->res_name);
  VAR_15->res_master_nodeid = VAR_16;
  VAR_15->res_nodeid = 0;
  goto out_add;
 }

 if (VAR_18 && (VAR_11 != VAR_16)) {

  FUNC_8(VAR_6, "find_rsb new from_other %d dir %d our %d %s",
     VAR_12, VAR_11, VAR_16, VAR_15->res_name);
  FUNC_0(VAR_15);
  VAR_15 = ((void*)0);
  VAR_21 = -VAR_2;
  goto out_unlock;
 }

 if (VAR_18) {
  FUNC_7(VAR_6, "find_rsb new from_other %d dir %d %s",
     VAR_12, VAR_11, VAR_15->res_name);
 }

 if (VAR_11 == VAR_16) {


  VAR_15->res_master_nodeid = VAR_16;
  VAR_15->res_nodeid = 0;
 } else {

  VAR_15->res_master_nodeid = 0;
  VAR_15->res_nodeid = -1;
 }

 out_add:
 VAR_21 = FUNC_12(VAR_15, &VAR_6->ls_rsbtbl[VAR_10].keep);
 out_unlock:
 FUNC_15(&VAR_6->ls_rsbtbl[VAR_10].lock);
 out:
 *VAR_14 = VAR_15;
 return VAR_21;
}
