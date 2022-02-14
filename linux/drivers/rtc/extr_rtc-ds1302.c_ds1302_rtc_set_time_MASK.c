
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct spi_device {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; int tm_year; } ;
struct device {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (int) ;
 struct spi_device* FUNC_1 (struct device*) ;
 int FUNC_2 (struct spi_device*,int *,int,int *,int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct spi_device *VAR_8 = FUNC_1(VAR_6);
 u8 VAR_9[1 + VAR_2];
 u8 *VAR_10;
 int VAR_11;


 VAR_10 = VAR_9;
 *VAR_10++ = VAR_0 << 1 | VAR_3;
 *VAR_10++ = VAR_5;

 VAR_11 = FUNC_2(VAR_8, VAR_9, 2,
   ((void*)0), 0);
 if (VAR_11)
  return VAR_11;


 VAR_10 = VAR_9;
 *VAR_10++ = VAR_1 << 1 | VAR_3;

 *VAR_10++ = FUNC_0(VAR_7->tm_sec);
 *VAR_10++ = FUNC_0(VAR_7->tm_min);
 *VAR_10++ = FUNC_0(VAR_7->tm_hour);
 *VAR_10++ = FUNC_0(VAR_7->tm_mday);
 *VAR_10++ = FUNC_0(VAR_7->tm_mon + 1);
 *VAR_10++ = VAR_7->tm_wday + 1;
 *VAR_10++ = FUNC_0(VAR_7->tm_year % 100);
 *VAR_10++ = VAR_4;


 return FUNC_2(VAR_8, VAR_9, sizeof(VAR_9),
   ((void*)0), 0);
}
