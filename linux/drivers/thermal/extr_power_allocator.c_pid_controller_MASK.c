
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct thermal_zone_device {scalar_t__ temperature; int passive_delay; TYPE_1__* tzp; struct power_allocator_params* governor_data; } ;
struct power_allocator_params {scalar_t__ err_integral; scalar_t__ prev_err; int trip_switch_on; } ;
typedef scalar_t__ s64 ;
typedef scalar_t__ s32 ;
struct TYPE_2__ {scalar_t__ sustainable_power; scalar_t__ integral_cutoff; int k_d; int k_i; int k_pu; int k_po; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (struct thermal_zone_device*,scalar_t__,int ,int,int) ;
 scalar_t__ FUNC_4 (struct thermal_zone_device*) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (struct thermal_zone_device*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static u32 FUNC_9(struct thermal_zone_device *VAR_0,
     int VAR_1,
     u32 VAR_2)
{
 s64 VAR_3, VAR_4, VAR_5, VAR_6;
 s32 VAR_7, VAR_8;
 u32 VAR_9;
 struct power_allocator_params *VAR_10 = VAR_0->governor_data;

 VAR_8 = FUNC_6(VAR_2);

 if (VAR_0->tzp->sustainable_power) {
  VAR_9 = VAR_0->tzp->sustainable_power;
 } else {
  VAR_9 = FUNC_4(VAR_0);
  FUNC_3(VAR_0, VAR_9,
           VAR_10->trip_switch_on, VAR_1,
           1);
 }

 VAR_7 = VAR_1 - VAR_0->temperature;
 VAR_7 = FUNC_6(VAR_7);


 VAR_3 = FUNC_7(VAR_7 < 0 ? VAR_0->tzp->k_po : VAR_0->tzp->k_pu, VAR_7);







 VAR_4 = FUNC_7(VAR_0->tzp->k_i, VAR_10->err_integral);

 if (VAR_7 < FUNC_6(VAR_0->tzp->integral_cutoff)) {
  s64 VAR_11 = VAR_4 + FUNC_7(VAR_0->tzp->k_i, VAR_7);

  if (FUNC_0(VAR_11) < VAR_8) {
   VAR_4 = VAR_11;
   VAR_10->err_integral += VAR_7;
  }
 }
 VAR_5 = FUNC_7(VAR_0->tzp->k_d, VAR_7 - VAR_10->prev_err);
 VAR_5 = FUNC_2(VAR_5, VAR_0->passive_delay);
 VAR_10->prev_err = VAR_7;

 VAR_6 = VAR_3 + VAR_4 + VAR_5;


 VAR_6 = VAR_9 + FUNC_5(VAR_6);

 VAR_6 = FUNC_1(VAR_6, (s64)0, (s64)VAR_2);

 FUNC_8(VAR_0, FUNC_5(VAR_7),
       FUNC_5(VAR_10->err_integral),
       FUNC_5(VAR_3), FUNC_5(VAR_4),
       FUNC_5(VAR_5), VAR_6);

 return VAR_6;
}
