
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct spi_device {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct ds1390 {int* txrx_buf; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 struct ds1390* FUNC_1 (struct device*) ;
 int FUNC_2 (struct spi_device*,int*,int,int *,int ) ;
 struct spi_device* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct spi_device *VAR_3 = FUNC_3(VAR_1);
 struct ds1390 *VAR_4 = FUNC_1(VAR_1);


 VAR_4->txrx_buf[0] = VAR_0 | 0x80;
 VAR_4->txrx_buf[1] = FUNC_0(VAR_2->tm_sec);
 VAR_4->txrx_buf[2] = FUNC_0(VAR_2->tm_min);
 VAR_4->txrx_buf[3] = FUNC_0(VAR_2->tm_hour);
 VAR_4->txrx_buf[4] = FUNC_0(VAR_2->tm_wday);
 VAR_4->txrx_buf[5] = FUNC_0(VAR_2->tm_mday);
 VAR_4->txrx_buf[6] = FUNC_0(VAR_2->tm_mon + 1) |
    ((VAR_2->tm_year > 99) ? 0x80 : 0x00);
 VAR_4->txrx_buf[7] = FUNC_0(VAR_2->tm_year % 100);


 return FUNC_2(VAR_3, VAR_4->txrx_buf, 8, ((void*)0), 0);
}
