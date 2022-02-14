
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_rtc {scalar_t__ base; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mon; int tm_mday; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 unsigned int VAR_8 ;
 unsigned int VAR_9 ;
 unsigned int VAR_10 ;
 unsigned int VAR_11 ;
 unsigned int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,unsigned int,...) ;
 struct s3c_rtc* FUNC_2 (struct device*) ;
 unsigned int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct s3c_rtc*) ;
 int FUNC_5 (struct s3c_rtc*) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_12, struct rtc_wkalrm *VAR_13)
{
 struct s3c_rtc *VAR_14 = FUNC_2(VAR_12);
 struct rtc_time *VAR_15 = &VAR_13->time;
 unsigned int VAR_16;
 int VAR_17;

 FUNC_1(VAR_12, "s3c_rtc_setalarm: %d, %ptR\n", VAR_13->enabled, VAR_15);

 VAR_17 = FUNC_5(VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_16 = FUNC_3(VAR_14->base + VAR_5) & VAR_6;
 FUNC_7(0x00, VAR_14->base + VAR_5);

 if (VAR_15->tm_sec < 60 && VAR_15->tm_sec >= 0) {
  VAR_16 |= VAR_11;
  FUNC_7(FUNC_0(VAR_15->tm_sec), VAR_14->base + VAR_4);
 }

 if (VAR_15->tm_min < 60 && VAR_15->tm_min >= 0) {
  VAR_16 |= VAR_9;
  FUNC_7(FUNC_0(VAR_15->tm_min), VAR_14->base + VAR_2);
 }

 if (VAR_15->tm_hour < 24 && VAR_15->tm_hour >= 0) {
  VAR_16 |= VAR_8;
  FUNC_7(FUNC_0(VAR_15->tm_hour), VAR_14->base + VAR_1);
 }

 if (VAR_15->tm_mon < 12 && VAR_15->tm_mon >= 0) {
  VAR_16 |= VAR_10;
  FUNC_7(FUNC_0(VAR_15->tm_mon + 1), VAR_14->base + VAR_3);
 }

 if (VAR_15->tm_mday <= 31 && VAR_15->tm_mday >= 1) {
  VAR_16 |= VAR_7;
  FUNC_7(FUNC_0(VAR_15->tm_mday), VAR_14->base + VAR_0);
 }

 FUNC_1(VAR_12, "setting S3C2410_RTCALM to %08x\n", VAR_16);

 FUNC_7(VAR_16, VAR_14->base + VAR_5);

 FUNC_6(VAR_12, VAR_13->enabled);

 FUNC_4(VAR_14);

 return 0;
}
