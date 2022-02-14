
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {scalar_t__ current_mode; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct cxl_context*) ;
 int FUNC_1 (struct cxl_context*) ;
 int FUNC_2 (struct cxl_context*) ;

__attribute__((used)) static int FUNC_3(struct cxl_context *VAR_1)
{
 FUNC_2(VAR_1);

 if (VAR_1->afu->current_mode == VAR_0)
  return FUNC_1(VAR_1);

 return FUNC_0(VAR_1);
}
