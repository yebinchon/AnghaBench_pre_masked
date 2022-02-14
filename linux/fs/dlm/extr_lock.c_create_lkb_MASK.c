
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_lkbidr_spin; int ls_lkbidr; } ;
struct dlm_lkb {int lkb_nodeid; int lkb_id; int lkb_cb_work; int lkb_cb_mutex; int lkb_cb_list; int lkb_time_list; int lkb_rsb_lookup; int lkb_ownqueue; int lkb_ref; int lkb_grmode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 struct dlm_lkb* FUNC_2 (struct dlm_ls*) ;
 int VAR_4 ;
 int FUNC_3 (struct dlm_lkb*) ;
 int FUNC_4 (int *,struct dlm_lkb*,int,int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dlm_ls*,char*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static int FUNC_12(struct dlm_ls *VAR_5, struct dlm_lkb **VAR_6)
{
 struct dlm_lkb *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_2(VAR_5);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->lkb_nodeid = -1;
 VAR_7->lkb_grmode = VAR_0;
 FUNC_7(&VAR_7->lkb_ref);
 FUNC_0(&VAR_7->lkb_ownqueue);
 FUNC_0(&VAR_7->lkb_rsb_lookup);
 FUNC_0(&VAR_7->lkb_time_list);
 FUNC_0(&VAR_7->lkb_cb_list);
 FUNC_9(&VAR_7->lkb_cb_mutex);
 FUNC_1(&VAR_7->lkb_cb_work, VAR_4);

 FUNC_5(VAR_2);
 FUNC_10(&VAR_5->ls_lkbidr_spin);
 VAR_8 = FUNC_4(&VAR_5->ls_lkbidr, VAR_7, 1, 0, VAR_3);
 if (VAR_8 >= 0)
  VAR_7->lkb_id = VAR_8;
 FUNC_11(&VAR_5->ls_lkbidr_spin);
 FUNC_6();

 if (VAR_8 < 0) {
  FUNC_8(VAR_5, "create_lkb idr error %d", VAR_8);
  FUNC_3(VAR_7);
  return VAR_8;
 }

 *VAR_6 = VAR_7;
 return 0;
}
