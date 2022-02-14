
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {struct cxl_afu* afu; } ;
struct cxl_afu {int dummy; } ;
struct TYPE_2__ {int (* afu_reset ) (struct cxl_afu*) ;int (* afu_check_and_enable ) (struct cxl_afu*) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (struct cxl_afu*) ;
 int FUNC_1 (struct cxl_afu*) ;

int FUNC_2(struct cxl_context *VAR_1)
{
 struct cxl_afu *VAR_2 = VAR_1->afu;
 int VAR_3;

 VAR_3 = VAR_0->afu_reset(VAR_2);
 if (VAR_3)
  return VAR_3;

 return VAR_0->afu_check_and_enable(VAR_2);
}
