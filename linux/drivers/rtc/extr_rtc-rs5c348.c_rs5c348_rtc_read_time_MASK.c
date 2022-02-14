
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int txbuf ;
struct spi_device {int dev; } ;
struct rtc_time {int tm_hour; void* tm_year; void* tm_mon; void* tm_mday; void* tm_wday; void* tm_min; void* tm_sec; } ;
struct rs5c348_plat_data {int rtc_24h; } ;
struct device {int dummy; } ;
typedef int rxbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 void* FUNC_2 (int) ;
 struct rs5c348_plat_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct spi_device*,int) ;
 int FUNC_6 (struct spi_device*,int*,int,int*,int) ;
 struct spi_device* FUNC_7 (struct device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct device *VAR_19, struct rtc_time *VAR_20)
{
 struct spi_device *VAR_21 = FUNC_7(VAR_19);
 struct rs5c348_plat_data *VAR_22 = FUNC_3(&VAR_21->dev);
 u8 VAR_23[5], VAR_24[7];
 int VAR_25;

 VAR_25 = FUNC_5(VAR_21, FUNC_1(VAR_9));
 if (VAR_25 < 0)
  return VAR_25;
 if (VAR_25 & VAR_2)
  FUNC_4(&VAR_21->dev, "voltage-low detected.\n");
 if (VAR_25 & VAR_3) {
  FUNC_4(&VAR_21->dev, "oscillator-stop detected.\n");
  return -VAR_0;
 }


 VAR_23[0] = FUNC_1(VAR_9);
 VAR_23[1] = 0;
 VAR_23[2] = FUNC_1(VAR_9);
 VAR_23[3] = 0;
 VAR_23[4] = FUNC_0(VAR_14);


 VAR_25 = FUNC_6(VAR_21, VAR_23, sizeof(VAR_23),
      VAR_24, sizeof(VAR_24));
 FUNC_8(62);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_20->tm_sec = FUNC_2(VAR_24[VAR_14] & VAR_17);
 VAR_20->tm_min = FUNC_2(VAR_24[VAR_12] & VAR_7);
 VAR_20->tm_hour = FUNC_2(VAR_24[VAR_11] & VAR_6);
 if (!VAR_22->rtc_24h) {
  if (VAR_24[VAR_11] & VAR_1) {
   VAR_20->tm_hour -= 20;
   VAR_20->tm_hour %= 12;
   VAR_20->tm_hour += 12;
  } else
   VAR_20->tm_hour %= 12;
 }
 VAR_20->tm_wday = FUNC_2(VAR_24[VAR_15] & VAR_18);
 VAR_20->tm_mday = FUNC_2(VAR_24[VAR_10] & VAR_5);
 VAR_20->tm_mon =
  FUNC_2(VAR_24[VAR_13] & VAR_8) - 1;

 VAR_20->tm_year = FUNC_2(VAR_24[VAR_16]) +
  ((VAR_24[VAR_13] & VAR_4) ? 100 : 0);

 return 0;
}
