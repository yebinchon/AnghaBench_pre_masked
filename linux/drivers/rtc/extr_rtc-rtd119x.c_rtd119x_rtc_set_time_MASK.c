
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd119x_rtc {int base_year; scalar_t__ base; } ;
struct rtc_time {int tm_year; int tm_sec; unsigned int tm_min; unsigned int tm_hour; scalar_t__ tm_yday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 struct rtd119x_rtc* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct device*,int) ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct rtd119x_rtc *VAR_13 = FUNC_0(VAR_11);
 unsigned int VAR_14;
 int VAR_15;

 if (1900 + VAR_12->tm_year < VAR_13->base_year)
  return -VAR_0;

 VAR_14 = 0;
 for (VAR_15 = VAR_13->base_year; VAR_15 < 1900 + VAR_12->tm_year; VAR_15++)
  VAR_14 += FUNC_1(VAR_15);

 VAR_14 += VAR_12->tm_yday;
 if (VAR_14 > 0x7fff)
  return -VAR_0;

 FUNC_2(VAR_11, 0);

 FUNC_3((VAR_12->tm_sec << 1) & VAR_10, VAR_13->base + VAR_9);
 FUNC_3(VAR_12->tm_min & VAR_8, VAR_13->base + VAR_7);
 FUNC_3(VAR_12->tm_hour & VAR_6, VAR_13->base + VAR_5);
 FUNC_3(VAR_14 & VAR_2, VAR_13->base + VAR_1);
 FUNC_3((VAR_14 >> 8) & VAR_4, VAR_13->base + VAR_3);

 FUNC_2(VAR_11, 1);

 return 0;
}
