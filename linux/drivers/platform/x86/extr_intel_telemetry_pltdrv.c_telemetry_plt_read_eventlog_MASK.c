
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct telemetry_evtlog {int dummy; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_2__ {int telem_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,struct telemetry_evtlog*,int,int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int FUNC_3(enum telemetry_unit VAR_1,
  struct telemetry_evtlog *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0(&(VAR_0->telem_lock));
 VAR_5 = FUNC_2(VAR_1, VAR_2,
           VAR_3, VAR_4);
 FUNC_1(&(VAR_0->telem_lock));

 return VAR_5;
}
