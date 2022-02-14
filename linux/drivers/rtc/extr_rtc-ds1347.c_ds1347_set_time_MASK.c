
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct regmap {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct regmap*,int ,unsigned char*,int) ;
 struct regmap* FUNC_2 (struct spi_device*) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_1);
 struct regmap *VAR_4;
 unsigned char VAR_5[8];

 VAR_4 = FUNC_2(VAR_3);

 VAR_5[0] = FUNC_0(VAR_2->tm_sec);
 VAR_5[1] = FUNC_0(VAR_2->tm_min);
 VAR_5[2] = (FUNC_0(VAR_2->tm_hour) & 0x3F);
 VAR_5[3] = FUNC_0(VAR_2->tm_mday);
 VAR_5[4] = FUNC_0(VAR_2->tm_mon + 1);
 VAR_5[5] = FUNC_0(VAR_2->tm_wday + 1);



 VAR_2->tm_year = VAR_2->tm_year % 100;

 VAR_5[6] = FUNC_0(VAR_2->tm_year);
 VAR_5[7] = FUNC_0(0x00);


 return FUNC_1(VAR_4, VAR_0, VAR_5, 8);
}
