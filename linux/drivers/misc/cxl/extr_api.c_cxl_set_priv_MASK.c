
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {void* priv; } ;


 int VAR_0 ;

int FUNC_0(struct cxl_context *VAR_1, void *VAR_2)
{
 if (!VAR_1)
  return -VAR_0;

 VAR_1->priv = VAR_2;

 return 0;
}
