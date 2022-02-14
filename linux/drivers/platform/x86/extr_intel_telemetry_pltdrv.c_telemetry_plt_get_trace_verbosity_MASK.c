
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_2__ {int telem_trace_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;


 int FUNC_1 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,...) ;
 TYPE_1__* VAR_5 ;

__attribute__((used)) static int FUNC_6(enum telemetry_unit VAR_6,
          u32 *VAR_7)
{
 u32 VAR_8 = 0;
 int VAR_9;

 if (VAR_7 == ((void*)0))
  return -VAR_0;

 FUNC_3(&(VAR_5->telem_trace_lock));
 switch (VAR_6) {
 case 128:
  VAR_9 = FUNC_2(
    VAR_3,
    0, 0, ((void*)0), &VAR_8);
  if (VAR_9) {
   FUNC_5("PSS TRACE_CTRL Read Failed\n");
   goto out;
  }

  break;

 case 129:
  VAR_9 = FUNC_1(VAR_4,
    VAR_2, ((void*)0), 0, &VAR_8,
    VAR_1);
  if (VAR_9) {
   FUNC_5("IOSS TRACE_CTL Read Failed\n");
   goto out;
  }

  break;

 default:
  FUNC_5("Unknown Telemetry Unit Specified %d\n", VAR_6);
  VAR_9 = -VAR_0;
  break;
 }
 FUNC_0(VAR_8, *VAR_7);

out:
 FUNC_4(&(VAR_5->telem_trace_lock));
 return VAR_9;
}
