
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct telemetry_plt_config {int dummy; } ;
struct telemetry_core_ops {int dummy; } ;
struct TYPE_2__ {struct telemetry_plt_config* plt_config; struct telemetry_core_ops const* telem_ops; } ;


 TYPE_1__ VAR_0 ;

int FUNC_0(const struct telemetry_core_ops *VAR_1,
     struct telemetry_plt_config *VAR_2)
{
 if (VAR_1)
  VAR_0.telem_ops = VAR_1;

 if (VAR_2)
  VAR_0.plt_config = VAR_2;

 return 0;
}
