
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtc_time {void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
struct davinci_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct rtc_time*) ;
 int VAR_6 ;
 int FUNC_2 (struct davinci_rtc*) ;
 struct davinci_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct davinci_rtc*,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct davinci_rtc *VAR_9 = FUNC_3(VAR_7);
 u16 VAR_10 = 0;
 u8 VAR_11, VAR_12;
 unsigned long VAR_13;

 FUNC_5(&VAR_6, VAR_13);

 FUNC_2(VAR_9);
 VAR_8->tm_sec = FUNC_0(FUNC_4(VAR_9, VAR_5));

 FUNC_2(VAR_9);
 VAR_8->tm_min = FUNC_0(FUNC_4(VAR_9, VAR_4));

 FUNC_2(VAR_9);
 VAR_8->tm_hour = FUNC_0(FUNC_4(VAR_9, VAR_3));

 FUNC_2(VAR_9);
 VAR_11 = FUNC_4(VAR_9, VAR_1);

 FUNC_2(VAR_9);
 VAR_12 = FUNC_4(VAR_9, VAR_2);

 FUNC_6(&VAR_6, VAR_13);

 VAR_10 |= VAR_12;
 VAR_10 <<= 8;
 VAR_10 |= VAR_11;

 if (FUNC_1(VAR_10, VAR_8) < 0)
  return -VAR_0;

 return 0;
}
