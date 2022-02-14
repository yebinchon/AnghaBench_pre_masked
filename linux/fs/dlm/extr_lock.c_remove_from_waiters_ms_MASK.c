
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dlm_message {scalar_t__ m_flags; int m_type; } ;
struct dlm_ls {int ls_waiters_mutex; } ;
struct dlm_lkb {TYPE_1__* lkb_resource; } ;
struct TYPE_2__ {struct dlm_ls* res_ls; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct dlm_lkb*,int ,struct dlm_message*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct dlm_lkb *VAR_1, struct dlm_message *VAR_2)
{
 struct dlm_ls *VAR_3 = VAR_1->lkb_resource->res_ls;
 int VAR_4;

 if (VAR_2->m_flags != VAR_0)
  FUNC_1(&VAR_3->ls_waiters_mutex);
 VAR_4 = FUNC_0(VAR_1, VAR_2->m_type, VAR_2);
 if (VAR_2->m_flags != VAR_0)
  FUNC_2(&VAR_3->ls_waiters_mutex);
 return VAR_4;
}
