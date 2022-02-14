
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t u32 ;
struct hl_device_idle_busy_ts {int idle_to_busy_ts; int busy_to_idle_ts; } ;
struct hl_device {size_t idle_busy_ts_idx; struct hl_device_idle_busy_ts* idle_busy_ts_arr; } ;
typedef int s64 ;
typedef int ktime_t ;


 int FUNC_0 (int,int) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;

uint32_t FUNC_6(struct hl_device *VAR_2, uint32_t VAR_3)
{
 struct hl_device_idle_busy_ts *VAR_4;
 ktime_t VAR_5, VAR_6 = FUNC_2();
 u32 VAR_7 = 0, VAR_8 = VAR_2->idle_busy_ts_idx;
 s64 VAR_9, VAR_10, VAR_11, VAR_12,
  VAR_13 = 0, VAR_14;

 VAR_5 = FUNC_3(0, 0);
 VAR_9 = VAR_3 * VAR_1;
 VAR_4 = &VAR_2->idle_busy_ts_arr[VAR_8];


 if (!FUNC_1(VAR_4->busy_to_idle_ts, VAR_5) &&
   !FUNC_1(VAR_4->idle_to_busy_ts, VAR_5)) {

  VAR_8--;

  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0 - 1;

  VAR_4 = &VAR_2->idle_busy_ts_arr[VAR_8];
 }

 while (VAR_7 < VAR_0) {




  VAR_10 = FUNC_5(
    FUNC_4(VAR_6, VAR_4->idle_to_busy_ts));

  if (VAR_10 > VAR_9) {







   if (!FUNC_1(VAR_4->busy_to_idle_ts, VAR_5)) {

    if (FUNC_1(VAR_4->idle_to_busy_ts,
      VAR_5))
     return 100;





    break;
   }


   VAR_11 = FUNC_5(
     FUNC_4(VAR_6, VAR_4->busy_to_idle_ts));

   if (VAR_11 > VAR_9)
    break;


   VAR_12 = FUNC_5(
      FUNC_4(VAR_4->busy_to_idle_ts,
      VAR_4->idle_to_busy_ts));
   VAR_13 += VAR_12 -
     (VAR_10 - VAR_9);
   break;
  }


  if (FUNC_1(VAR_4->busy_to_idle_ts, VAR_5))
   VAR_12 = FUNC_5(
      FUNC_4(VAR_4->busy_to_idle_ts,
      VAR_4->idle_to_busy_ts));
  else
   VAR_12 = FUNC_5(
     FUNC_4(VAR_6, VAR_4->idle_to_busy_ts));

  VAR_13 += VAR_12;

  VAR_8--;

  if (VAR_8 > VAR_0)
   VAR_8 = VAR_0 - 1;

  VAR_4 = &VAR_2->idle_busy_ts_arr[VAR_8];

  VAR_7++;
 }

 VAR_14 = FUNC_0(VAR_13,
      VAR_1);

 return FUNC_0(VAR_14 * 100, VAR_3);
}
