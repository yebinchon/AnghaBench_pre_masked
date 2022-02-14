
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cxl_context {scalar_t__ status; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct cxl_context*) ;

int FUNC_1(struct cxl_context *VAR_2)
{
 if (VAR_2->status >= VAR_1)
  return -VAR_0;

 FUNC_0(VAR_2);

 return 0;
}
