
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 unsigned char VAR_1 ;
 unsigned char VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int ) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_10, struct rtc_time *VAR_11)
{
 unsigned char VAR_12;

 VAR_12 = FUNC_1(VAR_10, VAR_0);

 if (VAR_12 & VAR_1) {

  VAR_11->tm_sec = FUNC_1(VAR_10, VAR_8);
  VAR_11->tm_min = FUNC_1(VAR_10, VAR_6);
  VAR_11->tm_hour = FUNC_1(VAR_10, VAR_5) & 0x3f;
  VAR_11->tm_mday = FUNC_1(VAR_10, VAR_3);

  VAR_11->tm_mon = FUNC_1(VAR_10, VAR_7) - 1;
  VAR_11->tm_year = FUNC_1(VAR_10, VAR_9) + 100;
  VAR_11->tm_wday = FUNC_1(VAR_10, VAR_4);
 } else {

  VAR_11->tm_sec = FUNC_0(FUNC_1(VAR_10, VAR_8));
  VAR_11->tm_min = FUNC_0(FUNC_1(VAR_10, VAR_6));
  VAR_11->tm_hour = FUNC_0(FUNC_1(VAR_10, VAR_5) &
       0x3f);
  VAR_11->tm_mday = FUNC_0(FUNC_1(VAR_10, VAR_3));

  VAR_11->tm_mon = FUNC_0(FUNC_1(VAR_10, VAR_7)) - 1;
  VAR_11->tm_year = FUNC_0(FUNC_1(VAR_10, VAR_9)) + 100;
  VAR_11->tm_wday = FUNC_0(FUNC_1(VAR_10, VAR_4));
 }


 if (!(VAR_12 & VAR_2))
  if (FUNC_1(VAR_10, VAR_5) & 0x80)
   VAR_11->tm_hour += 12;

 return 0;
}
