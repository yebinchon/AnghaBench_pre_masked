
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int timeu64_t ;
struct rtc_time {int dummy; } ;
struct ftrtc010_rtc {scalar_t__ rtc_base; } ;
struct device {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 struct ftrtc010_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct rtc_time*) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct ftrtc010_rtc *VAR_8 = FUNC_0(VAR_6);
 u32 VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 timeu64_t VAR_14;

 VAR_14 = FUNC_2(VAR_7);

 VAR_9 = FUNC_1(VAR_8->rtc_base + VAR_5);
 VAR_10 = FUNC_1(VAR_8->rtc_base + VAR_3);
 VAR_11 = FUNC_1(VAR_8->rtc_base + VAR_2);
 VAR_12 = FUNC_1(VAR_8->rtc_base + VAR_1);

 VAR_13 = VAR_14 - (VAR_12 * 86400 + VAR_11 * 3600 + VAR_10 * 60 + VAR_9);

 FUNC_3(VAR_13, VAR_8->rtc_base + VAR_4);
 FUNC_3(0x01, VAR_8->rtc_base + VAR_0);

 return 0;
}
