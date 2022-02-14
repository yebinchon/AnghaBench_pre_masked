
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,char*,int,int,int,int,int,int,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct spi_device*,size_t,int) ;
 int FUNC_4 (struct spi_device*,size_t) ;
 int FUNC_5 (struct spi_device*,int*,int) ;
 struct spi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_12, struct rtc_time *VAR_13)
{
 struct spi_device *VAR_14 = FUNC_6(VAR_12);
 int VAR_15;
 u8 VAR_16[9] = {0x80};
 u8 * const VAR_17 = &VAR_16[1];

 FUNC_1(VAR_12, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "write", VAR_13->tm_sec, VAR_13->tm_min,
  VAR_13->tm_hour, VAR_13->tm_mday,
  VAR_13->tm_mon, VAR_13->tm_year, VAR_13->tm_wday);

 if (VAR_13->tm_year < 100) {
  FUNC_2(&VAR_14->dev, "unsupported date (before 2000-01-01).\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_4(VAR_14, VAR_5);
 if (VAR_15 < 0)
  return VAR_15;

 if (VAR_15 & VAR_1) {
  FUNC_2(&VAR_14->dev, "OF bit is set, resetting.\n");
  FUNC_3(VAR_14, VAR_5, VAR_15 & ~VAR_1);

  VAR_15 = FUNC_4(VAR_14, VAR_5);
  if (VAR_15 < 0) {
   return VAR_15;
  } else if (VAR_15 & VAR_1) {


   u8 VAR_18 = VAR_16[VAR_9] | VAR_2;

   FUNC_2(&VAR_14->dev,
     "OF bit is still set, kickstarting clock.\n");
   FUNC_3(VAR_14, VAR_9, VAR_18);
   VAR_18 &= ~VAR_2;
   FUNC_3(VAR_14, VAR_9, VAR_18);
  }
 }

 VAR_17[VAR_8] = 0;
 VAR_17[VAR_9] = FUNC_0(VAR_13->tm_sec);
 VAR_17[VAR_6] = FUNC_0(VAR_13->tm_min);
 VAR_17[VAR_3] = FUNC_0(VAR_13->tm_hour) |
      ((VAR_13->tm_year/100-1) << 6);
 VAR_17[VAR_4] = FUNC_0(VAR_13->tm_mday);
 VAR_17[VAR_10] = FUNC_0(VAR_13->tm_wday + 1);
 VAR_17[VAR_7] = FUNC_0(VAR_13->tm_mon + 1);
 VAR_17[VAR_11] = FUNC_0(VAR_13->tm_year % 100);

 return FUNC_5(VAR_14, VAR_16, sizeof(VAR_16));
}
