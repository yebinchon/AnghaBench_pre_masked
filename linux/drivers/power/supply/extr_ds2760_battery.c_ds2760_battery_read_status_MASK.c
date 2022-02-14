
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ds2760_device_info {scalar_t__ update_time; int* raw; int voltage_raw; int voltage_uV; char current_raw; int current_uA; char accum_current_raw; int accum_current_uAh; char temp_raw; int temp_C; int rated_capacity; int full_active_uAh; int empty_uAh; long rem_capacity; long life_sec; int dev; } ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 void* FUNC_1 (int*,int) ;
 int VAR_12 ;
 int FUNC_2 (int ,char*,int ) ;
 scalar_t__ VAR_13 ;
 scalar_t__ FUNC_3 (int ) ;
 int* VAR_14 ;
 scalar_t__ FUNC_4 (scalar_t__,scalar_t__) ;
 int FUNC_5 (int ,int*,int,int) ;

__attribute__((used)) static int FUNC_6(struct ds2760_device_info *VAR_15)
{
 int VAR_16, VAR_17, VAR_18, VAR_19, VAR_20[5];

 if (VAR_15->update_time && FUNC_4(VAR_13, VAR_15->update_time +
        FUNC_3(VAR_12)))
  return 0;



 if (VAR_15->update_time == 0) {
  VAR_18 = 0;
  VAR_19 = VAR_6;
 } else {
  VAR_18 = VAR_11;
  VAR_19 = VAR_8 - VAR_18 + 1;
 }

 VAR_16 = FUNC_5(VAR_15->dev, VAR_15->raw + VAR_18, VAR_18, VAR_19);
 if (VAR_16 != VAR_19) {
  FUNC_2(VAR_15->dev, "call to w1_ds2760_read failed (0x%p)\n",
    VAR_15->dev);
  return 1;
 }

 VAR_15->update_time = VAR_13;



 VAR_15->voltage_raw = (VAR_15->raw[VAR_11] << 3) |
     (VAR_15->raw[VAR_10] >> 5);
 VAR_15->voltage_uV = VAR_15->voltage_raw * 4880;



 VAR_15->current_raw =
     (((signed char)VAR_15->raw[VAR_5]) << 5) |
     (VAR_15->raw[VAR_4] >> 3);
 VAR_15->current_uA = VAR_15->current_raw * 625;


 VAR_15->accum_current_raw =
     (((signed char)VAR_15->raw[VAR_3]) << 8) |
      VAR_15->raw[VAR_2];
 VAR_15->accum_current_uAh = VAR_15->accum_current_raw * 250;




 VAR_15->temp_raw = (((signed char)VAR_15->raw[VAR_9]) << 3) |
         (VAR_15->raw[VAR_8] >> 5);
 VAR_15->temp_C = VAR_15->temp_raw + (VAR_15->temp_raw / 4);



 if (VAR_15->raw[VAR_7] < FUNC_0(VAR_14))
  VAR_15->rated_capacity = VAR_14[
   (unsigned int)VAR_15->raw[VAR_7]];
 else
  VAR_15->rated_capacity = VAR_15->raw[VAR_7] * 10;

 VAR_15->rated_capacity *= 1000;


 VAR_15->full_active_uAh = VAR_15->raw[VAR_1] << 8 |
         VAR_15->raw[VAR_1 + 1];




 if (VAR_15->full_active_uAh == 0)
  VAR_15->full_active_uAh = VAR_15->rated_capacity / 1000L;

 VAR_20[0] = VAR_15->full_active_uAh;
 for (VAR_17 = 1; VAR_17 < 5; VAR_17++)
  VAR_20[VAR_17] = VAR_20[VAR_17 - 1] + VAR_15->raw[VAR_1 + 1 + VAR_17];

 VAR_15->full_active_uAh = FUNC_1(VAR_20, VAR_15->temp_C / 10);
 VAR_15->full_active_uAh *= 1000;


 VAR_20[4] = VAR_15->raw[VAR_0 + 4];
 for (VAR_17 = 3; VAR_17 >= 0; VAR_17--)
  VAR_20[VAR_17] = VAR_20[VAR_17 + 1] + VAR_15->raw[VAR_0 + VAR_17];

 VAR_15->empty_uAh = FUNC_1(VAR_20, VAR_15->temp_C / 10);
 VAR_15->empty_uAh *= 1000;

 if (VAR_15->full_active_uAh == VAR_15->empty_uAh)
  VAR_15->rem_capacity = 0;
 else


  VAR_15->rem_capacity = ((VAR_15->accum_current_uAh - VAR_15->empty_uAh) * 100L) /
        (VAR_15->full_active_uAh - VAR_15->empty_uAh);

 if (VAR_15->rem_capacity < 0)
  VAR_15->rem_capacity = 0;
 if (VAR_15->rem_capacity > 100)
  VAR_15->rem_capacity = 100;

 if (VAR_15->current_uA < -100L)
  VAR_15->life_sec = -((VAR_15->accum_current_uAh - VAR_15->empty_uAh) * 36L)
     / (VAR_15->current_uA / 100L);
 else
  VAR_15->life_sec = 0;

 return 0;
}
