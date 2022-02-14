
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec64 {int tv_sec; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct timespec64*) ;
 int FUNC_1 (int ,struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct timespec64 VAR_2;

 FUNC_0(&VAR_2);
 FUNC_1(VAR_2, VAR_1);

 return 0;
}
