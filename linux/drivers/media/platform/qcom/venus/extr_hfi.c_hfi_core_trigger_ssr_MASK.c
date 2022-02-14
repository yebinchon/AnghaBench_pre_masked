
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct venus_core {TYPE_1__* ops; } ;
struct TYPE_2__ {int (* core_trigger_ssr ) (struct venus_core*,int ) ;} ;


 int FUNC_0 (struct venus_core*,int ) ;

int FUNC_1(struct venus_core *VAR_0, u32 VAR_1)
{
 return VAR_0->ops->core_trigger_ssr(VAR_0, VAR_1);
}
