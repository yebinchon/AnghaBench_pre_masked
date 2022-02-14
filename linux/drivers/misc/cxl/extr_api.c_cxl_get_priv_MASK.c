
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {void* priv; } ;


 int VAR_0 ;
 void* FUNC_0 (int ) ;

void *FUNC_1(struct cxl_context *VAR_1)
{
 if (!VAR_1)
  return FUNC_0(-VAR_0);

 return VAR_1->priv;
}
