
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct cxl_context {TYPE_1__* afu; } ;
struct TYPE_2__ {int prefault_mode; } ;




 int FUNC_0 (struct cxl_context*,int ) ;
 int FUNC_1 (struct cxl_context*) ;

void FUNC_2(struct cxl_context *VAR_0, u64 VAR_1)
{
 switch (VAR_0->afu->prefault_mode) {
 case 128:
  FUNC_0(VAR_0, VAR_1);
  break;
 case 129:
  FUNC_1(VAR_0);
  break;
 default:
  break;
 }
}
