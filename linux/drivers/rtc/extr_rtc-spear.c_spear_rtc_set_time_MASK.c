
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spear_rtc_config {scalar_t__ ioaddr; } ;
struct rtc_time {unsigned int tm_sec; unsigned int tm_min; unsigned int tm_hour; unsigned int tm_mday; unsigned int tm_mon; unsigned int tm_year; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 struct spear_rtc_config* FUNC_0 (struct device*) ;
 int FUNC_1 (struct spear_rtc_config*) ;
 int FUNC_2 (struct spear_rtc_config*) ;
 int FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_8, struct rtc_time *VAR_9)
{
 struct spear_rtc_config *VAR_10 = FUNC_0(VAR_8);
 unsigned int VAR_11, VAR_12;

 FUNC_3(VAR_9);

 FUNC_2(VAR_10);
 VAR_11 = (VAR_9->tm_sec << VAR_5) | (VAR_9->tm_min << VAR_3) |
  (VAR_9->tm_hour << VAR_1);
 VAR_12 = (VAR_9->tm_mday << VAR_2) | (VAR_9->tm_mon << VAR_4) |
  (VAR_9->tm_year << VAR_7);
 FUNC_4(VAR_11, VAR_10->ioaddr + VAR_6);
 FUNC_4(VAR_12, VAR_10->ioaddr + VAR_0);

 return FUNC_1(VAR_10);
}
