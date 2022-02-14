
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dev; } ;
struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (struct spi_device*,unsigned char*,int,int *,int ) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct spi_device *VAR_4 = FUNC_3(VAR_2);
 unsigned char VAR_5[9];

 if (VAR_3->tm_year < 100 || VAR_3->tm_year > 199) {
  FUNC_1(&VAR_4->dev, "Year must be between 2000 and 2099. It's %d.\n",
   VAR_3->tm_year + 1900);
  return -VAR_0;
 }

 VAR_5[0] = VAR_1 & 0x7F;
 VAR_5[1] = FUNC_0(VAR_3->tm_sec);
 VAR_5[2] = FUNC_0(VAR_3->tm_min);
 VAR_5[3] = (FUNC_0(VAR_3->tm_hour) & 0X3F);
 VAR_5[4] = FUNC_0(VAR_3->tm_mday);
 VAR_5[5] = FUNC_0(VAR_3->tm_mon + 1);
 VAR_5[6] = FUNC_0(VAR_3->tm_wday + 1);
 VAR_5[7] = FUNC_0(VAR_3->tm_year % 100);
 VAR_5[8] = FUNC_0(0x00);


 return FUNC_2(VAR_4, VAR_5, 9, ((void*)0), 0);
}
