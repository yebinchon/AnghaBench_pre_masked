
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct telemetry_evtlog {int dummy; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_4__ {TYPE_1__* telem_ops; } ;
struct TYPE_3__ {int (* read_eventlog ) (int,struct telemetry_evtlog*,int,int) ;} ;


 int FUNC_0 (int,struct telemetry_evtlog*,int,int) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(enum telemetry_unit VAR_1,
       struct telemetry_evtlog *VAR_2, int VAR_3)
{
 return VAR_0.telem_ops->read_eventlog(VAR_1, VAR_2,
             VAR_3, 1);
}
