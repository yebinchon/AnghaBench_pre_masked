
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* platform_data; } ;
struct mcp {TYPE_1__ attached_device; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 int FUNC_1 (TYPE_1__*) ;

int FUNC_2(struct mcp *VAR_0, void *VAR_1)
{
 VAR_0->attached_device.platform_data = VAR_1;
 FUNC_0(&VAR_0->attached_device, "mcp0");
 return FUNC_1(&VAR_0->attached_device);
}
