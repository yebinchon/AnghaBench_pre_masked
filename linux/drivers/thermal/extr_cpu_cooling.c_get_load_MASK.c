
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct time_in_idle {scalar_t__ time; scalar_t__ timestamp; } ;
struct cpufreq_cooling_device {struct time_in_idle* idle_time; } ;


 scalar_t__ FUNC_0 (int,scalar_t__) ;
 scalar_t__ FUNC_1 (int,scalar_t__*,int ) ;

__attribute__((used)) static u32 FUNC_2(struct cpufreq_cooling_device *VAR_0, int VAR_1,
      int VAR_2)
{
 u32 VAR_3;
 u64 VAR_4, VAR_5, VAR_6, VAR_7;
 struct time_in_idle *VAR_8 = &VAR_0->idle_time[VAR_2];

 VAR_5 = FUNC_1(VAR_1, &VAR_4, 0);
 VAR_7 = VAR_5 - VAR_8->time;
 VAR_6 = VAR_4 - VAR_8->timestamp;

 if (VAR_6 <= VAR_7)
  VAR_3 = 0;
 else
  VAR_3 = FUNC_0(100 * (VAR_6 - VAR_7), VAR_6);

 VAR_8->time = VAR_5;
 VAR_8->timestamp = VAR_4;

 return VAR_3;
}
