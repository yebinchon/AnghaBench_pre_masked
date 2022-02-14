
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct telemetry_unit_config {scalar_t__ ssram_evts_used; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;
typedef enum telemetry_action { ____Placeholder_telemetry_action } telemetry_action ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int,struct telemetry_unit_config**) ;

__attribute__((used)) static int FUNC_2(enum telemetry_unit VAR_2,
     u32 *VAR_3, u8 VAR_4,
     enum telemetry_action VAR_5)
{
 struct telemetry_unit_config *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, &VAR_6);
 if (VAR_7 < 0)
  return VAR_7;

 switch (VAR_5) {
 case 129:
  if (VAR_4 > VAR_1)
   return -VAR_0;

  break;

 case 128:
  if (VAR_4 > VAR_1)
   return -VAR_0;

  if ((VAR_4 > 0) && (VAR_3 == ((void*)0)))
   return -VAR_0;

  break;

 case 130:
  if ((VAR_4 + VAR_6->ssram_evts_used) >
      VAR_1)
   return -VAR_0;

  if ((VAR_4 > 0) && (VAR_3 == ((void*)0)))
   return -VAR_0;

  break;

 default:
  FUNC_0("Unknown Telemetry action specified %d\n", VAR_5);
  return -VAR_0;
 }

 return 0;
}
