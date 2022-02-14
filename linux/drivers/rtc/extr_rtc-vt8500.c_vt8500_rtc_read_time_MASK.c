
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vt8500_rtc {scalar_t__ regbase; } ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_0 (int) ;
 struct vt8500_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_15, struct rtc_time *VAR_16)
{
 struct vt8500_rtc *VAR_17 = FUNC_1(VAR_15);
 u32 VAR_18, VAR_19;

 VAR_18 = FUNC_2(VAR_17->regbase + VAR_13);
 VAR_19 = FUNC_2(VAR_17->regbase + VAR_14);

 VAR_16->tm_sec = FUNC_0(VAR_19 & VAR_12);
 VAR_16->tm_min = FUNC_0((VAR_19 & VAR_10) >> VAR_11);
 VAR_16->tm_hour = FUNC_0((VAR_19 & VAR_8) >> VAR_9);
 VAR_16->tm_mday = FUNC_0(VAR_18 & VAR_1);
 VAR_16->tm_mon = FUNC_0((VAR_18 & VAR_2) >> VAR_3) - 1;
 VAR_16->tm_year = FUNC_0((VAR_18 & VAR_4) >> VAR_5)
   + ((VAR_18 >> VAR_0) & 1 ? 200 : 100);
 VAR_16->tm_wday = (VAR_19 & VAR_6) >> VAR_7;

 return 0;
}
