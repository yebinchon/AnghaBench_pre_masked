
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_zone_device {struct __thermal_zone* devdata; } ;
struct thermal_cooling_device {scalar_t__ np; } ;
struct __thermal_zone {int num_tbps; struct __thermal_bind_params* tbps; } ;
struct __thermal_cooling_bind_param {scalar_t__ cooling_device; int min; int max; } ;
struct __thermal_bind_params {int count; int usage; int trip_id; struct __thermal_cooling_bind_param* tcbp; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct __thermal_zone*) ;
 int FUNC_1 (struct thermal_zone_device*,int ,struct thermal_cooling_device*,int ,int ,int ) ;

__attribute__((used)) static int FUNC_2(struct thermal_zone_device *VAR_1,
      struct thermal_cooling_device *VAR_2)
{
 struct __thermal_zone *VAR_3 = VAR_1->devdata;
 struct __thermal_bind_params *VAR_4;
 struct __thermal_cooling_bind_param *VAR_5;
 int VAR_6, VAR_7;

 if (!VAR_3 || FUNC_0(VAR_3))
  return -VAR_0;


 for (VAR_6 = 0; VAR_6 < VAR_3->num_tbps; VAR_6++) {
  VAR_4 = VAR_3->tbps + VAR_6;

  for (VAR_7 = 0; VAR_7 < VAR_4->count; VAR_7++) {
   VAR_5 = VAR_4->tcbp + VAR_7;

   if (VAR_5->cooling_device == VAR_2->np) {
    int VAR_8;

    VAR_8 = FUNC_1(VAR_1,
      VAR_4->trip_id, VAR_2,
      VAR_5->max,
      VAR_5->min,
      VAR_4->usage);
    if (VAR_8)
     return VAR_8;
   }
  }
 }

 return 0;
}
