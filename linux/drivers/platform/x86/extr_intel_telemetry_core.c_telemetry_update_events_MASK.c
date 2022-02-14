
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct telemetry_evtconfig {int dummy; } ;
struct TYPE_4__ {TYPE_1__* telem_ops; } ;
struct TYPE_3__ {int (* update_events ) (struct telemetry_evtconfig,struct telemetry_evtconfig) ;} ;


 int FUNC_0 (struct telemetry_evtconfig,struct telemetry_evtconfig) ;
 TYPE_2__ VAR_0 ;

int FUNC_1(struct telemetry_evtconfig VAR_1,
       struct telemetry_evtconfig VAR_2)
{
 return VAR_0.telem_ops->update_events(VAR_1,
             VAR_2);
}
