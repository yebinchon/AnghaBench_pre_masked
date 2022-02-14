
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {scalar_t__ mapping; scalar_t__ kernelapi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *) ;

void FUNC_1(struct cxl_context *VAR_2)
{
 if (VAR_2->kernelapi && VAR_2->mapping)
  FUNC_0(&VAR_1, &VAR_0);
}
