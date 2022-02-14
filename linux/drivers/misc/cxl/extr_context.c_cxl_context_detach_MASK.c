
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {int wq; } ;


 int FUNC_0 (struct cxl_context*) ;
 int FUNC_1 (struct cxl_context*,struct cxl_context*) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct cxl_context *VAR_0)
{
 int VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (VAR_1)
  return;

 FUNC_1(VAR_0, VAR_0);
 FUNC_2(&VAR_0->wq);
}
