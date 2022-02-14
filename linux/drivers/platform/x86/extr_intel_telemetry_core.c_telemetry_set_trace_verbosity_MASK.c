
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_4__ {TYPE_1__* telem_ops; } ;
struct TYPE_3__ {int (* set_trace_verbosity ) (int,int ) ;} ;


 int FUNC_0 (int,int ) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(enum telemetry_unit VAR_1, u32 VAR_2)
{
 return VAR_0.telem_ops->set_trace_verbosity(VAR_1,
            VAR_2);
}
