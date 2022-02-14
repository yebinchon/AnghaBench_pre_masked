
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_mon; int tm_mday; int tm_hour; int tm_min; int tm_sec; int tm_year; } ;
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
 int VAR_9 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_10, struct rtc_time *VAR_11)
{
 unsigned long VAR_12, VAR_13, VAR_14;
 int VAR_15 = -VAR_0;

 VAR_12 = ((VAR_11->tm_mon + 1) << VAR_4)
  | (VAR_11->tm_mday << VAR_1)
  | (VAR_11->tm_hour << VAR_2)
  | (VAR_11->tm_min << VAR_3)
  | (VAR_11->tm_sec << VAR_5);

 FUNC_3(VAR_12, VAR_8);
 VAR_14 = 0x10000;

 while ((FUNC_1(VAR_7) & VAR_6) && --VAR_14)
  FUNC_2(1000, 3000);

 if (!VAR_14) {
  FUNC_0(VAR_10, "set time timeout!\n");
  goto err;
 }

 VAR_13 = VAR_11->tm_year + 1900;
 FUNC_3(VAR_13, VAR_9);
 VAR_14 = 0x10000;
 while ((FUNC_1(VAR_7) & VAR_6) && --VAR_14)
  FUNC_2(1000, 3000);

 if (!VAR_14) {
  FUNC_0(VAR_10, "set time timeout!\n");
  goto err;
 }
 return 0;
err:
 return VAR_15;
}
