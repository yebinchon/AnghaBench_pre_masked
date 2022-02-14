
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {void* tm_year; void* tm_wday; void* tm_mon; void* tm_mday; void* tm_hour; void* tm_min; void* tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 void* FUNC_0 (unsigned char) ;
 int FUNC_1 (struct spi_device*,unsigned char*,int,unsigned char*,int) ;
 struct spi_device* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_2(VAR_1);
 int VAR_4;
 unsigned char VAR_5[8];

 VAR_5[0] = VAR_0 | 0x80;

 VAR_4 = FUNC_1(VAR_3, VAR_5, 1, VAR_5, 8);

 if (VAR_4)
  return VAR_4;

 VAR_2->tm_sec = FUNC_0(VAR_5[0]);
 VAR_2->tm_min = FUNC_0(VAR_5[1]);
 VAR_2->tm_hour = FUNC_0(VAR_5[2] & 0x3F);
 VAR_2->tm_mday = FUNC_0(VAR_5[3]);
 VAR_2->tm_mon = FUNC_0(VAR_5[4]) - 1;
 VAR_2->tm_wday = FUNC_0(VAR_5[5]) - 1;
 VAR_2->tm_year = FUNC_0(VAR_5[6]) + 100;

 return 0;
}
