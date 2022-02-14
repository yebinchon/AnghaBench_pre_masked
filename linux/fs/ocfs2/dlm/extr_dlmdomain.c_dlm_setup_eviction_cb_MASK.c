
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dlm_eviction_cb {void* ec_data; int * ec_func; int ec_item; } ;
typedef int dlm_eviction_func ;


 int FUNC_0 (int *) ;

void FUNC_1(struct dlm_eviction_cb *VAR_0,
      dlm_eviction_func *VAR_1,
      void *VAR_2)
{
 FUNC_0(&VAR_0->ec_item);
 VAR_0->ec_func = VAR_1;
 VAR_0->ec_data = VAR_2;
}
