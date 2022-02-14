
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef unsigned char u8 ;
struct rtc_time {int tm_year; int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct m48t35_priv {int lock; TYPE_1__* reg; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int control; int sec; int min; int hour; int date; int month; int year; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 void* FUNC_0 (unsigned int) ;
 struct m48t35_priv* FUNC_1 (struct device*) ;
 unsigned char FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned char,int *) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_time *VAR_3)
{
 struct m48t35_priv *VAR_4 = FUNC_1(VAR_2);
 unsigned char VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 unsigned int VAR_10;
 u8 VAR_11;

 VAR_10 = VAR_3->tm_year + 1900;
 VAR_5 = VAR_3->tm_mon + 1;
 VAR_6 = VAR_3->tm_mday;
 VAR_7 = VAR_3->tm_hour;
 VAR_8 = VAR_3->tm_min;
 VAR_9 = VAR_3->tm_sec;

 if (VAR_10 < 1970)
  return -VAR_0;

 VAR_10 -= 1970;
 if (VAR_10 > 255)
  return -VAR_0;

 if (VAR_10 > 169)
  return -VAR_0;

 if (VAR_10 >= 100)
  VAR_10 -= 100;

 VAR_9 = FUNC_0(VAR_9);
 VAR_8 = FUNC_0(VAR_8);
 VAR_7 = FUNC_0(VAR_7);
 VAR_6 = FUNC_0(VAR_6);
 VAR_5 = FUNC_0(VAR_5);
 VAR_10 = FUNC_0(VAR_10);

 FUNC_3(&VAR_4->lock);
 VAR_11 = FUNC_2(&VAR_4->reg->control);
 FUNC_5(VAR_11 | VAR_1, &VAR_4->reg->control);
 FUNC_5(VAR_10, &VAR_4->reg->year);
 FUNC_5(VAR_5, &VAR_4->reg->month);
 FUNC_5(VAR_6, &VAR_4->reg->date);
 FUNC_5(VAR_7, &VAR_4->reg->hour);
 FUNC_5(VAR_8, &VAR_4->reg->min);
 FUNC_5(VAR_9, &VAR_4->reg->sec);
 FUNC_5(VAR_11, &VAR_4->reg->control);
 FUNC_4(&VAR_4->lock);
 return 0;
}
