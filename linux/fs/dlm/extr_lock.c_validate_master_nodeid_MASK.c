
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_rsb {int res_dir_nodeid; scalar_t__ res_nodeid; scalar_t__ res_master_nodeid; int res_name; int res_first_lkid; } ;
struct dlm_ls {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct dlm_ls*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (struct dlm_rsb*) ;
 int FUNC_3 (struct dlm_ls*,char*,int,scalar_t__,int,int ,int ) ;
 int FUNC_4 (struct dlm_ls*,char*,int,scalar_t__,int,...) ;

__attribute__((used)) static int FUNC_5(struct dlm_ls *VAR_1, struct dlm_rsb *VAR_2,
      int VAR_3)
{
 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_1, "find_rsb keep from_nodeid %d master %d dir %d",
     VAR_3, VAR_2->res_master_nodeid,
     VAR_2->res_dir_nodeid);
  FUNC_2(VAR_2);
  return -VAR_0;
 }

 if (VAR_3 != VAR_2->res_dir_nodeid) {




  if (VAR_2->res_master_nodeid) {
   FUNC_3(VAR_1, "validate master from_other %d master %d "
      "dir %d first %x %s", VAR_3,
      VAR_2->res_master_nodeid, VAR_2->res_dir_nodeid,
      VAR_2->res_first_lkid, VAR_2->res_name);
  }
  return -VAR_0;
 } else {



  if (VAR_2->res_master_nodeid) {
   FUNC_4(VAR_1, "validate master from_dir %d master %d "
      "first %x %s",
      VAR_3, VAR_2->res_master_nodeid,
      VAR_2->res_first_lkid, VAR_2->res_name);
  }

  VAR_2->res_master_nodeid = FUNC_1();
  VAR_2->res_nodeid = 0;
  return 0;
 }
}
