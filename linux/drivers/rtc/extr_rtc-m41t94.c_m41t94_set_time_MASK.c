
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,int) ;
 int FUNC_2 (struct spi_device*,int*,int) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_9, struct rtc_time *VAR_10)
{
 struct spi_device *VAR_11 = FUNC_3(VAR_9);
 u8 VAR_12[8];

 FUNC_1(VAR_9, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_10->tm_sec, VAR_10->tm_min,
  VAR_10->tm_hour, VAR_10->tm_mday,
  VAR_10->tm_mon, VAR_10->tm_year, VAR_10->tm_wday);

 VAR_12[0] = 0x80 | VAR_6;
 VAR_12[VAR_6] = FUNC_0(VAR_10->tm_sec);
 VAR_12[VAR_4] = FUNC_0(VAR_10->tm_min);
 VAR_12[VAR_3] = FUNC_0(VAR_10->tm_hour);
 VAR_12[VAR_7] = FUNC_0(VAR_10->tm_wday + 1);
 VAR_12[VAR_2] = FUNC_0(VAR_10->tm_mday);
 VAR_12[VAR_5] = FUNC_0(VAR_10->tm_mon + 1);

 VAR_12[VAR_3] |= VAR_1;
 if (VAR_10->tm_year >= 100)
  VAR_12[VAR_3] |= VAR_0;
 VAR_12[VAR_8] = FUNC_0(VAR_10->tm_year % 100);

 return FUNC_2(VAR_11, VAR_12, 8);
}
