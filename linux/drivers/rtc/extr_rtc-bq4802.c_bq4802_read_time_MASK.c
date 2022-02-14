
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {int dummy; } ;
struct bq4802 {int (* read ) (struct bq4802*,int) ;int lock; int (* write ) (struct bq4802*,int,int) ;} ;


 void* FUNC_0 (unsigned int) ;
 struct bq4802* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (struct bq4802*,int) ;
 unsigned int FUNC_5 (struct bq4802*,int) ;
 int FUNC_6 (struct bq4802*,int,int) ;
 int FUNC_7 (struct bq4802*,int,int) ;
 int FUNC_8 (struct bq4802*,int) ;
 int FUNC_9 (struct bq4802*,int) ;
 int FUNC_10 (struct bq4802*,int) ;
 int FUNC_11 (struct bq4802*,int) ;
 int FUNC_12 (struct bq4802*,int) ;
 int FUNC_13 (struct bq4802*,int) ;
 int FUNC_14 (struct bq4802*,int) ;

__attribute__((used)) static int FUNC_15(struct device *VAR_0, struct rtc_time *VAR_1)
{
 struct bq4802 *VAR_2 = FUNC_1(VAR_0);
 unsigned long VAR_3;
 unsigned int VAR_4;
 u8 VAR_5;

 FUNC_2(&VAR_2->lock, VAR_3);

 VAR_5 = VAR_2->read(VAR_2, 0x0e);
 VAR_2->write(VAR_2, 0xe, VAR_5 | 0x08);

 VAR_1->tm_sec = VAR_2->read(VAR_2, 0x00);
 VAR_1->tm_min = VAR_2->read(VAR_2, 0x02);
 VAR_1->tm_hour = VAR_2->read(VAR_2, 0x04);
 VAR_1->tm_mday = VAR_2->read(VAR_2, 0x06);
 VAR_1->tm_mon = VAR_2->read(VAR_2, 0x09);
 VAR_1->tm_year = VAR_2->read(VAR_2, 0x0a);
 VAR_1->tm_wday = VAR_2->read(VAR_2, 0x08);
 VAR_4 = VAR_2->read(VAR_2, 0x0f);

 VAR_2->write(VAR_2, 0x0e, VAR_5);

 FUNC_3(&VAR_2->lock, VAR_3);

 VAR_1->tm_sec = FUNC_0(VAR_1->tm_sec);
 VAR_1->tm_min = FUNC_0(VAR_1->tm_min);
 VAR_1->tm_hour = FUNC_0(VAR_1->tm_hour);
 VAR_1->tm_mday = FUNC_0(VAR_1->tm_mday);
 VAR_1->tm_mon = FUNC_0(VAR_1->tm_mon);
 VAR_1->tm_year = FUNC_0(VAR_1->tm_year);
 VAR_1->tm_wday = FUNC_0(VAR_1->tm_wday);
 VAR_4 = FUNC_0(VAR_4);

 VAR_1->tm_year += (VAR_4 * 100);
 VAR_1->tm_year -= 1900;

 VAR_1->tm_mon--;

 return 0;
}
