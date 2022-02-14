
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
struct TYPE_2__ {int telem_trace_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;


 int FUNC_1 (int ,int ) ;
 int VAR_8 ;
 int FUNC_2 (int ,int ,int *,int ,int *,int ) ;
 int FUNC_3 (int ,int ,int ,int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,...) ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_7(enum telemetry_unit VAR_10,
          u32 VAR_11)
{
 u32 VAR_12 = 0;
 int VAR_13;

 VAR_11 &= VAR_8;

 FUNC_4(&(VAR_9->telem_trace_lock));
 switch (VAR_10) {
 case 128:
  VAR_13 = FUNC_3(
    VAR_5,
    0, 0, ((void*)0), &VAR_12);
  if (VAR_13) {
   FUNC_6("PSS TRACE_CTRL Read Failed\n");
   goto out;
  }

  FUNC_0(VAR_12);
  FUNC_1(VAR_12, VAR_11);

  VAR_13 = FUNC_3(
    VAR_6,
    0, 0, &VAR_12, ((void*)0));
  if (VAR_13) {
   FUNC_6("PSS TRACE_CTRL Verbosity Set Failed\n");
   goto out;
  }
  break;

 case 129:
  VAR_13 = FUNC_2(VAR_7,
    VAR_2, ((void*)0), 0, &VAR_12,
    VAR_1);
  if (VAR_13) {
   FUNC_6("IOSS TRACE_CTL Read Failed\n");
   goto out;
  }

  FUNC_0(VAR_12);
  FUNC_1(VAR_12, VAR_11);

  VAR_13 = FUNC_2(VAR_7,
    VAR_3, (u8 *)&VAR_12,
    VAR_4, ((void*)0), 0);
  if (VAR_13) {
   FUNC_6("IOSS TRACE_CTL Verbosity Set Failed\n");
   goto out;
  }
  break;

 default:
  FUNC_6("Unknown Telemetry Unit Specified %d\n", VAR_10);
  VAR_13 = -VAR_0;
  break;
 }

out:
 FUNC_5(&(VAR_9->telem_trace_lock));
 return VAR_13;
}
