
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_ls {int ls_orphans_mutex; int ls_orphans; } ;
struct dlm_lkb {int lkb_ua; int lkb_ownqueue; } ;
struct dlm_args {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct dlm_ls*,struct dlm_lkb*,struct dlm_args*) ;
 int FUNC_1 (struct dlm_lkb*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,struct dlm_args*) ;

__attribute__((used)) static int FUNC_6(struct dlm_ls *VAR_1, struct dlm_lkb *VAR_2)
{
 struct dlm_args VAR_3;
 int VAR_4;

 FUNC_1(VAR_2);
 FUNC_3(&VAR_1->ls_orphans_mutex);
 FUNC_2(&VAR_2->lkb_ownqueue, &VAR_1->ls_orphans);
 FUNC_4(&VAR_1->ls_orphans_mutex);

 FUNC_5(0, VAR_2->lkb_ua, &VAR_3);

 VAR_4 = FUNC_0(VAR_1, VAR_2, &VAR_3);
 if (VAR_4 == -VAR_0)
  VAR_4 = 0;
 return VAR_4;
}
