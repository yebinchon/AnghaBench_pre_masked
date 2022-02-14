
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {int afu; } ;
struct TYPE_2__ {int (* afu_check_and_enable ) (int ) ;} ;


 int FUNC_0 (struct cxl_context*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (struct cxl_context*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct cxl_context*) ;

int FUNC_4(struct cxl_context *VAR_1, u64 VAR_2, u64 VAR_3)
{
 int VAR_4;


 VAR_4 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_4)
  return VAR_4;

 FUNC_3(VAR_1);


 VAR_4 = VAR_0->afu_check_and_enable(VAR_1->afu);
 if (VAR_4)
  return VAR_4;

 return FUNC_0(VAR_1);
}
