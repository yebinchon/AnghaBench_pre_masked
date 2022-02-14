
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_context {int afu; } ;
struct TYPE_2__ {int (* afu_reset ) (int ) ;} ;


 int FUNC_0 (int ) ;
 TYPE_1__* VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static inline int FUNC_3(struct cxl_context *VAR_1)
{
 VAR_0->afu_reset(VAR_1->afu);
 FUNC_0(VAR_1->afu);
 FUNC_1(VAR_1->afu);
 return 0;
}
