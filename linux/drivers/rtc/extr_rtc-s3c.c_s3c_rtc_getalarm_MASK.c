
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mon; int tm_mday; int tm_year; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int VAR_12 ;
 unsigned int VAR_13 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,unsigned int,struct rtc_time*) ;
 struct s3c_rtc* FUNC_2 (struct device*) ;
 void* FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct s3c_rtc*) ;
 int FUNC_5 (struct s3c_rtc*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_14, struct rtc_wkalrm *VAR_15)
{
 struct s3c_rtc *VAR_16 = FUNC_2(VAR_14);
 struct rtc_time *VAR_17 = &VAR_15->time;
 unsigned int VAR_18;
 int VAR_19;

 VAR_19 = FUNC_5(VAR_16);
 if (VAR_19)
  return VAR_19;

 VAR_17->tm_sec = FUNC_3(VAR_16->base + VAR_4);
 VAR_17->tm_min = FUNC_3(VAR_16->base + VAR_2);
 VAR_17->tm_hour = FUNC_3(VAR_16->base + VAR_1);
 VAR_17->tm_mon = FUNC_3(VAR_16->base + VAR_3);
 VAR_17->tm_mday = FUNC_3(VAR_16->base + VAR_0);
 VAR_17->tm_year = FUNC_3(VAR_16->base + VAR_5);

 VAR_18 = FUNC_3(VAR_16->base + VAR_6);

 FUNC_4(VAR_16);

 VAR_15->enabled = (VAR_18 & VAR_7) ? 1 : 0;

 FUNC_1(VAR_14, "read alarm %d, %ptR\n", VAR_18, VAR_17);


 if (VAR_18 & VAR_12)
  VAR_17->tm_sec = FUNC_0(VAR_17->tm_sec);

 if (VAR_18 & VAR_10)
  VAR_17->tm_min = FUNC_0(VAR_17->tm_min);

 if (VAR_18 & VAR_9)
  VAR_17->tm_hour = FUNC_0(VAR_17->tm_hour);

 if (VAR_18 & VAR_8)
  VAR_17->tm_mday = FUNC_0(VAR_17->tm_mday);

 if (VAR_18 & VAR_11) {
  VAR_17->tm_mon = FUNC_0(VAR_17->tm_mon);
  VAR_17->tm_mon -= 1;
 }

 if (VAR_18 & VAR_13)
  VAR_17->tm_year = FUNC_0(VAR_17->tm_year);

 return 0;
}
