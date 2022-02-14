
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; scalar_t__ tv_nsec; } ;
struct rtc_time {int dummy; } ;
typedef int ktime_t ;


 struct timespec64 FUNC_0 (int ) ;
 int FUNC_1 (int ,struct rtc_time*) ;

struct rtc_time FUNC_2(ktime_t VAR_0)
{
 struct timespec64 VAR_1;
 struct rtc_time VAR_2;

 VAR_1 = FUNC_0(VAR_0);

 if (VAR_1.tv_nsec)
  VAR_1.tv_sec++;
 FUNC_1(VAR_1.tv_sec, &VAR_2);
 return VAR_2;
}
