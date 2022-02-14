
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rtc_time {int tm_year; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_mon; } ;
struct device {int dummy; } ;
struct aspeed_rtc {scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct aspeed_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_5, struct rtc_time *VAR_6)
{
 struct aspeed_rtc *VAR_7 = FUNC_0(VAR_5);
 u32 VAR_8, VAR_9, VAR_10;
 int VAR_11, VAR_12;

 VAR_12 = (VAR_6->tm_year + 1900) / 100;
 VAR_11 = VAR_6->tm_year % 100;

 VAR_8 = (VAR_6->tm_mday << 24) | (VAR_6->tm_hour << 16) | (VAR_6->tm_min << 8) |
  VAR_6->tm_sec;

 VAR_9 = ((VAR_12 & 0x1f) << 16) | ((VAR_11 & 0x7f) << 8) |
  ((VAR_6->tm_mon + 1) & 0xf);

 VAR_10 = FUNC_1(VAR_7->base + VAR_0);
 FUNC_2(VAR_10 | VAR_3, VAR_7->base + VAR_0);

 FUNC_2(VAR_8, VAR_7->base + VAR_2);
 FUNC_2(VAR_9, VAR_7->base + VAR_4);


 FUNC_2(VAR_10 | VAR_1, VAR_7->base + VAR_0);

 return 0;
}
