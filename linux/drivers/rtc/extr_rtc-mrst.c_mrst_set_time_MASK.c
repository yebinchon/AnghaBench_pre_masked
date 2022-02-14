
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned int tm_year; int tm_mon; unsigned char tm_mday; unsigned char tm_hour; unsigned char tm_min; unsigned char tm_sec; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ,int ) ;
 int VAR_9 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (unsigned char,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_10, struct rtc_time *VAR_11)
{
 int VAR_12;
 unsigned long VAR_13;
 unsigned char VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 unsigned int VAR_19;

 VAR_19 = VAR_11->tm_year;
 VAR_14 = VAR_11->tm_mon + 1;
 VAR_15 = VAR_11->tm_mday;
 VAR_16 = VAR_11->tm_hour;
 VAR_17 = VAR_11->tm_min;
 VAR_18 = VAR_11->tm_sec;

 if (VAR_19 < 72 || VAR_19 > 172)
  return -VAR_0;
 VAR_19 -= 72;

 FUNC_1(&VAR_9, VAR_13);

 FUNC_3(VAR_19, VAR_8);
 FUNC_3(VAR_14, VAR_6);
 FUNC_3(VAR_15, VAR_3);
 FUNC_3(VAR_16, VAR_4);
 FUNC_3(VAR_17, VAR_5);
 FUNC_3(VAR_18, VAR_7);

 FUNC_2(&VAR_9, VAR_13);

 VAR_12 = FUNC_0(VAR_1, VAR_2);
 return VAR_12;
}
