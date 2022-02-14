
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct rtc_time {int tm_wday; void* tm_year; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;
typedef int buf ;
typedef int addr ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* FUNC_0 (int) ;
 struct spi_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct spi_device*,int*,int,int*,int) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct spi_device *VAR_12 = FUNC_1(VAR_10);
 u8 VAR_13 = VAR_7 << 1 | VAR_9;
 u8 VAR_14[VAR_8 - 1];
 int VAR_15;




 VAR_15 = FUNC_2(VAR_12, &VAR_13, sizeof(VAR_13),
   VAR_14, sizeof(VAR_14));
 if (VAR_15 < 0)
  return VAR_15;


 VAR_11->tm_sec = FUNC_0(VAR_14[VAR_5]);
 VAR_11->tm_min = FUNC_0(VAR_14[VAR_3]);
 VAR_11->tm_hour = FUNC_0(VAR_14[VAR_2]);
 VAR_11->tm_wday = VAR_14[VAR_1] - 1;
 VAR_11->tm_mday = FUNC_0(VAR_14[VAR_0]);
 VAR_11->tm_mon = FUNC_0(VAR_14[VAR_4]) - 1;
 VAR_11->tm_year = FUNC_0(VAR_14[VAR_6]) + 100;

 return 0;
}
