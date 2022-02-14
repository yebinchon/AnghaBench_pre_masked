
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct telemetry_unit_config {int ssram_evts_used; scalar_t__ regmap; } ;
struct telem_ssram_region {scalar_t__ timestamp; scalar_t__* events; scalar_t__ start_time; } ;
typedef enum telemetry_unit { ____Placeholder_telemetry_unit } telemetry_unit ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,struct telemetry_unit_config**) ;

__attribute__((used)) static int FUNC_3(enum telemetry_unit VAR_5,
        struct telem_ssram_region *VAR_6, u8 VAR_7)
{
 struct telemetry_unit_config *VAR_8;
 u64 VAR_9, VAR_10;
 int VAR_11, VAR_12, VAR_13 = 0;

 VAR_11 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_11 < 0)
  return VAR_11;

 if (VAR_7 > VAR_8->ssram_evts_used)
  VAR_7 = VAR_8->ssram_evts_used;

 do {
  VAR_9 = FUNC_1(VAR_8->regmap);
  if (!VAR_9) {
   FUNC_0("Ssram under update. Please Try Later\n");
   return -VAR_1;
  }

  VAR_6->start_time = FUNC_1(VAR_8->regmap +
       VAR_4);

  for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
   VAR_6->events[VAR_12] =
   FUNC_1(VAR_8->regmap + VAR_2 +
         VAR_0*VAR_12);
  }

  VAR_10 = FUNC_1(VAR_8->regmap);
  if (!VAR_10) {
   FUNC_0("Ssram under update. Please Try Later\n");
   return -VAR_1;
  }

  if (VAR_13++ > VAR_3) {
   FUNC_0("Timeout while reading Events\n");
   return -VAR_1;
  }

 } while (VAR_9 != VAR_10);

 VAR_6->timestamp = VAR_10;

 return VAR_7;
}
