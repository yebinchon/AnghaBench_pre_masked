
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int) ;
 int VAR_6 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 void* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct device *VAR_7, struct rtc_time *VAR_8)
{
 unsigned long VAR_9;

 if (FUNC_4())
  FUNC_0(20);

 FUNC_1(&VAR_6, VAR_9);
 VAR_8->tm_sec = FUNC_3(VAR_4);
 VAR_8->tm_min = FUNC_3(VAR_2);
 VAR_8->tm_hour = FUNC_3(VAR_1);
 VAR_8->tm_mday = FUNC_3(VAR_0);
 VAR_8->tm_mon = FUNC_3(VAR_3);
 VAR_8->tm_year = FUNC_3(VAR_5);
 FUNC_2(&VAR_6, VAR_9);


 VAR_8->tm_year += 72;
 VAR_8->tm_mon--;
 return 0;
}
