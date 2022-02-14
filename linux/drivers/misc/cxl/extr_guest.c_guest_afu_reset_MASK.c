
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cxl_afu {TYPE_1__* guest; int slice; } ;
struct TYPE_2__ {int handle; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct cxl_afu *VAR_0)
{
 FUNC_1("AFU(%d) reset request\n", VAR_0->slice);
 return FUNC_0(VAR_0->guest->handle);
}
