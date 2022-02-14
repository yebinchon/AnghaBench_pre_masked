
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_ls {int ls_timeout_mutex; } ;
struct dlm_lkb {int lkb_time_list; TYPE_1__* lkb_resource; } ;
struct TYPE_2__ {struct dlm_ls* res_ls; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct dlm_lkb*) ;

__attribute__((used)) static void FUNC_5(struct dlm_lkb *VAR_0)
{
 struct dlm_ls *VAR_1 = VAR_0->lkb_resource->res_ls;

 FUNC_2(&VAR_1->ls_timeout_mutex);
 if (!FUNC_1(&VAR_0->lkb_time_list)) {
  FUNC_0(&VAR_0->lkb_time_list);
  FUNC_4(VAR_0);
 }
 FUNC_3(&VAR_1->ls_timeout_mutex);
}
