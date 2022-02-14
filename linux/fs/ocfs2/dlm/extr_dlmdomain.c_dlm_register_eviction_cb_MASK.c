
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_eviction_cb {int ec_item; } ;
struct dlm_ctxt {int dlm_eviction_callbacks; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dlm_ctxt *VAR_1,
         struct dlm_eviction_cb *VAR_2)
{
 FUNC_0(&VAR_0);
 FUNC_1(&VAR_2->ec_item, &VAR_1->dlm_eviction_callbacks);
 FUNC_2(&VAR_0);
}
