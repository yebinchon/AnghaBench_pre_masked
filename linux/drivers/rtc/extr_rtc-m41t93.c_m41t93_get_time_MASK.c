
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dev; } ;
struct rtc_time {void* tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,...) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct spi_device*,int ,int) ;
 int FUNC_4 (struct spi_device*,int ) ;
 int FUNC_5 (struct spi_device*,int const*,int,int*,int) ;
 struct spi_device* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_13, struct rtc_time *VAR_14)
{
 struct spi_device *VAR_15 = FUNC_6(VAR_13);
 const u8 VAR_16 = 0;
 u8 VAR_17[8];
 int VAR_18;
 int VAR_19;
 int VAR_20 = 0;







 VAR_19 = FUNC_4(VAR_15, VAR_4);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_19 & VAR_2) {
  FUNC_1(&VAR_15->dev, "HT bit is set, reenable clock update.\n");
  FUNC_3(VAR_15, VAR_4,
          VAR_19 & ~VAR_2);
 }

 VAR_19 = FUNC_4(VAR_15, VAR_7);
 if (VAR_19 < 0)
  return VAR_19;

 if (VAR_19 & VAR_3) {
  VAR_20 = -VAR_0;
  FUNC_2(&VAR_15->dev, "OF bit is set, write time to restart.\n");
 }

 if (VAR_19 & VAR_1)
  FUNC_2(&VAR_15->dev, "BL bit is set, replace battery.\n");


 VAR_19 = FUNC_5(VAR_15, &VAR_16, 1, VAR_17, sizeof(VAR_17));
 if (VAR_19 < 0)
  return VAR_19;

 VAR_14->tm_sec = FUNC_0(VAR_17[VAR_10]);
 VAR_14->tm_min = FUNC_0(VAR_17[VAR_8]);
 VAR_14->tm_hour = FUNC_0(VAR_17[VAR_5] & 0x3f);
 VAR_14->tm_mday = FUNC_0(VAR_17[VAR_6]);
 VAR_14->tm_mon = FUNC_0(VAR_17[VAR_9]) - 1;
 VAR_14->tm_wday = FUNC_0(VAR_17[VAR_11] & 0x0f) - 1;

 VAR_18 = (VAR_17[VAR_5] >> 6) + 1;
 VAR_14->tm_year = FUNC_0(VAR_17[VAR_12]) + VAR_18 * 100;

 FUNC_1(VAR_13, "%s secs=%d, mins=%d, "
  "hours=%d, mday=%d, mon=%d, year=%d, wday=%d\n",
  "read", VAR_14->tm_sec, VAR_14->tm_min,
  VAR_14->tm_hour, VAR_14->tm_mday,
  VAR_14->tm_mon, VAR_14->tm_year, VAR_14->tm_wday);

 return VAR_20;
}
