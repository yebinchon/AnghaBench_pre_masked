
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int txbuf ;
struct spi_device {int dev; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct rs5c348_plat_data {scalar_t__ rtc_24h; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (size_t) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 int FUNC_3 (int) ;
 struct rs5c348_plat_data* FUNC_4 (int *) ;
 int FUNC_5 (struct spi_device*,int) ;
 int FUNC_6 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_7 (struct device*) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(struct device *VAR_11, struct rtc_time *VAR_12)
{
 struct spi_device *VAR_13 = FUNC_7(VAR_11);
 struct rs5c348_plat_data *VAR_14 = FUNC_4(&VAR_13->dev);
 u8 VAR_15[5+7], *VAR_16;
 int VAR_17;

 VAR_17 = FUNC_5(VAR_13, FUNC_1(VAR_3));
 if (VAR_17 < 0)
  return VAR_17;
 if (VAR_17 & VAR_1) {
  VAR_15[0] = FUNC_2(VAR_3);
  VAR_15[1] = 0;
  VAR_17 = FUNC_6(VAR_13, VAR_15, 2, ((void*)0), 0);
  if (VAR_17 < 0)
   return VAR_17;
 }


 VAR_16 = VAR_15;
 VAR_15[0] = FUNC_1(VAR_3);
 VAR_15[1] = 0;
 VAR_15[2] = FUNC_1(VAR_3);
 VAR_15[3] = 0;
 VAR_15[4] = FUNC_0(VAR_8);
 VAR_16 = &VAR_15[5];
 VAR_16[VAR_8] = FUNC_3(VAR_12->tm_sec);
 VAR_16[VAR_6] = FUNC_3(VAR_12->tm_min);
 if (VAR_14->rtc_24h) {
  VAR_16[VAR_5] = FUNC_3(VAR_12->tm_hour);
 } else {

  VAR_16[VAR_5] = FUNC_3((VAR_12->tm_hour + 11) % 12 + 1) |
   (VAR_12->tm_hour >= 12 ? VAR_0 : 0);
 }
 VAR_16[VAR_9] = FUNC_3(VAR_12->tm_wday);
 VAR_16[VAR_4] = FUNC_3(VAR_12->tm_mday);
 VAR_16[VAR_7] = FUNC_3(VAR_12->tm_mon + 1) |
  (VAR_12->tm_year >= 100 ? VAR_2 : 0);
 VAR_16[VAR_10] = FUNC_3(VAR_12->tm_year % 100);

 VAR_17 = FUNC_6(VAR_13, VAR_15, sizeof(VAR_15), ((void*)0), 0);
 FUNC_8(62);
 return VAR_17;
}
