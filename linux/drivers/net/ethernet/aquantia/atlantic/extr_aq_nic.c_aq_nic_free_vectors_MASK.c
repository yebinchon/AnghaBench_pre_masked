
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct aq_nic_s {int ** aq_vec; } ;


 unsigned int FUNC_0 (int **) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct aq_nic_s *VAR_0)
{
 unsigned int VAR_1 = 0U;

 if (!VAR_0)
  goto err_exit;

 for (VAR_1 = FUNC_0(VAR_0->aq_vec); VAR_1--;) {
  if (VAR_0->aq_vec[VAR_1]) {
   FUNC_1(VAR_0->aq_vec[VAR_1]);
   VAR_0->aq_vec[VAR_1] = ((void*)0);
  }
 }

err_exit:;
}
