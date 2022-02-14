
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct rtc_time {int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct davinci_rtc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,struct rtc_time*) ;
 int VAR_8 ;
 int FUNC_2 (struct davinci_rtc*) ;
 struct davinci_rtc* FUNC_3 (struct device*) ;
 int FUNC_4 (struct davinci_rtc*,int ) ;
 int FUNC_5 (struct davinci_rtc*,int,int ) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct davinci_rtc *VAR_11 = FUNC_3(VAR_9);
 u16 VAR_12;
 u8 VAR_13;
 unsigned long VAR_14;

 if (FUNC_1(&VAR_12, VAR_10) < 0)
  return -VAR_0;

 FUNC_6(&VAR_8, VAR_14);

 FUNC_2(VAR_11);
 FUNC_5(VAR_11, FUNC_0(VAR_10->tm_sec), VAR_7);

 FUNC_2(VAR_11);
 FUNC_5(VAR_11, FUNC_0(VAR_10->tm_min), VAR_6);

 FUNC_2(VAR_11);
 FUNC_5(VAR_11, FUNC_0(VAR_10->tm_hour), VAR_5);

 FUNC_2(VAR_11);
 FUNC_5(VAR_11, VAR_12 & 0xFF, VAR_3);

 FUNC_2(VAR_11);
 FUNC_5(VAR_11, (VAR_12 & 0xFF00) >> 8, VAR_4);

 VAR_13 = FUNC_4(VAR_11, VAR_1);
 VAR_13 |= VAR_2;
 FUNC_5(VAR_11, VAR_13, VAR_1);

 FUNC_7(&VAR_8, VAR_14);

 return 0;
}
