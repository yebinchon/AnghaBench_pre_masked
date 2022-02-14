
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
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 int FUNC_0 (struct rtc_time*) ;
 struct spear_rtc_config* FUNC_1 (struct device*) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct spear_rtc_config*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_14, struct rtc_time *VAR_15)
{
 struct spear_rtc_config *VAR_16 = FUNC_1(VAR_14);
 unsigned int VAR_17, VAR_18;


 FUNC_3(VAR_16);

 VAR_17 = FUNC_2(VAR_16->ioaddr + VAR_11);
 VAR_18 = FUNC_2(VAR_16->ioaddr + VAR_0);
 VAR_15->tm_sec = (VAR_17 >> VAR_10) & VAR_9;
 VAR_15->tm_min = (VAR_17 >> VAR_5) & VAR_6;
 VAR_15->tm_hour = (VAR_17 >> VAR_3) & VAR_2;
 VAR_15->tm_mday = (VAR_18 >> VAR_4) & VAR_1;
 VAR_15->tm_mon = (VAR_18 >> VAR_8) & VAR_7;
 VAR_15->tm_year = (VAR_18 >> VAR_13) & VAR_12;

 FUNC_0(VAR_15);
 return 0;
}
