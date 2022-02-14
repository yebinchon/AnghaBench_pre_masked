
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct dlm_rsb {int res_master_nodeid; int res_nodeid; size_t res_hash; size_t res_bucket; int res_dir_nodeid; int res_ref; int res_hashnode; } ;
struct dlm_ls {TYPE_1__* ls_rsbtbl; } ;
struct TYPE_2__ {int lock; int keep; int toss; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct dlm_rsb*) ;
 int FUNC_2 (int *,char*,int,struct dlm_rsb**) ;
 int FUNC_3 (struct dlm_ls*,char*,int,struct dlm_rsb**) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct dlm_ls*,char*,int,int,int) ;
 int FUNC_7 (struct dlm_ls*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct dlm_rsb*,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dlm_ls *VAR_3, char *VAR_4, int VAR_5,
     uint32_t VAR_6, uint32_t VAR_7,
     int VAR_8, int VAR_9,
     unsigned int VAR_10, struct dlm_rsb **VAR_11)
{
 struct dlm_rsb *VAR_12 = ((void*)0);
 int VAR_13 = FUNC_0();
 int VAR_14 = (VAR_10 & VAR_2);
 int VAR_15;

 retry:
 VAR_15 = FUNC_7(VAR_3);
 if (VAR_15 < 0)
  goto out;

 FUNC_10(&VAR_3->ls_rsbtbl[VAR_7].lock);

 VAR_15 = FUNC_2(&VAR_3->ls_rsbtbl[VAR_7].keep, VAR_4, VAR_5, &VAR_12);
 if (VAR_15)
  goto do_toss;





 FUNC_4(&VAR_12->res_ref);
 goto out_unlock;


 do_toss:
 VAR_15 = FUNC_2(&VAR_3->ls_rsbtbl[VAR_7].toss, VAR_4, VAR_5, &VAR_12);
 if (VAR_15)
  goto do_new;







 if (!VAR_14 && (VAR_12->res_master_nodeid != VAR_13) && VAR_9) {


  FUNC_6(VAR_3, "find_rsb toss from_nodeid %d master %d dir %d",
     VAR_9, VAR_12->res_master_nodeid, VAR_8);
  FUNC_1(VAR_12);
  VAR_15 = -VAR_1;
  goto out_unlock;
 }

 if (!VAR_14 && (VAR_12->res_master_nodeid != VAR_13) &&
     (VAR_8 == VAR_13)) {


  FUNC_6(VAR_3, "find_rsb toss our %d master %d dir %d",
     VAR_13, VAR_12->res_master_nodeid, VAR_8);
  FUNC_1(VAR_12);
  VAR_12->res_master_nodeid = VAR_13;
  VAR_12->res_nodeid = 0;
 }

 FUNC_8(&VAR_12->res_hashnode, &VAR_3->ls_rsbtbl[VAR_7].toss);
 VAR_15 = FUNC_9(VAR_12, &VAR_3->ls_rsbtbl[VAR_7].keep);
 goto out_unlock;


 do_new:




 VAR_15 = FUNC_3(VAR_3, VAR_4, VAR_5, &VAR_12);
 if (VAR_15 == -VAR_0) {
  FUNC_11(&VAR_3->ls_rsbtbl[VAR_7].lock);
  goto retry;
 }
 if (VAR_15)
  goto out_unlock;

 VAR_12->res_hash = VAR_6;
 VAR_12->res_bucket = VAR_7;
 VAR_12->res_dir_nodeid = VAR_8;
 VAR_12->res_master_nodeid = VAR_8;
 VAR_12->res_nodeid = (VAR_8 == VAR_13) ? 0 : VAR_8;
 FUNC_5(&VAR_12->res_ref);

 VAR_15 = FUNC_9(VAR_12, &VAR_3->ls_rsbtbl[VAR_7].keep);
 out_unlock:
 FUNC_11(&VAR_3->ls_rsbtbl[VAR_7].lock);
 out:
 *VAR_11 = VAR_12;
 return VAR_15;
}
