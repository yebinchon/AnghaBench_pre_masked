
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_year; int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; } ;
struct device {int dummy; } ;
struct bq4802 {int (* read ) (struct bq4802*,int) ;int lock; int (* write ) (struct bq4802*,int,int) ;} ;


 int FUNC_0 (int) ;
 struct bq4802* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct bq4802*,int) ;
 int FUNC_5 (struct bq4802*,int,int) ;
 int FUNC_6 (struct bq4802*,int,int) ;
 int FUNC_7 (struct bq4802*,int,int) ;
 int FUNC_8 (struct bq4802*,int,int) ;
 int FUNC_9 (struct bq4802*,int,int) ;
 int FUNC_10 (struct bq4802*,int,int) ;
 int FUNC_11 (struct bq4802*,int,int) ;
 int FUNC_12 (struct bq4802*,int,int) ;
 int FUNC_13 (struct bq4802*,int,int) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct bq4802 *VAR_2 = FUNC_1(VAR_0);
 u8 VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 unsigned int VAR_12;

 VAR_12 = VAR_1->tm_year + 1900;
 VAR_9 = VAR_12 / 100;
 VAR_8 = VAR_12 % 100;

 VAR_7 = VAR_1->tm_mon + 1;
 VAR_6 = VAR_1->tm_mday;
 VAR_5 = VAR_1->tm_hour;
 VAR_4 = VAR_1->tm_min;
 VAR_3 = VAR_1->tm_sec;

 VAR_3 = FUNC_0(VAR_3);
 VAR_4 = FUNC_0(VAR_4);
 VAR_5 = FUNC_0(VAR_5);
 VAR_6 = FUNC_0(VAR_6);
 VAR_7 = FUNC_0(VAR_7);
 VAR_8 = FUNC_0(VAR_8);
 VAR_9 = FUNC_0(VAR_9);

 FUNC_2(&VAR_2->lock, VAR_11);

 VAR_10 = VAR_2->read(VAR_2, 0x0e);
 VAR_2->write(VAR_2, 0x0e, VAR_10 | 0x08);

 VAR_2->write(VAR_2, 0x00, VAR_3);
 VAR_2->write(VAR_2, 0x02, VAR_4);
 VAR_2->write(VAR_2, 0x04, VAR_5);
 VAR_2->write(VAR_2, 0x06, VAR_6);
 VAR_2->write(VAR_2, 0x09, VAR_7);
 VAR_2->write(VAR_2, 0x0a, VAR_8);
 VAR_2->write(VAR_2, 0x0f, VAR_9);

 VAR_2->write(VAR_2, 0x0e, VAR_10);

 FUNC_3(&VAR_2->lock, VAR_11);

 return 0;
}
