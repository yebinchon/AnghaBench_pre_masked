
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device_node {int dummy; } ;
struct cxl_afu {TYPE_1__* guest; } ;
struct TYPE_2__ {int handle; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (struct device_node*,int *) ;

int FUNC_2(struct cxl_afu *VAR_1, struct device_node *VAR_2)
{
 if (FUNC_1(VAR_2, &VAR_1->guest->handle))
  return -VAR_0;
 FUNC_0("AFU handle: 0x%.16llx\n", VAR_1->guest->handle);

 return 0;
}
