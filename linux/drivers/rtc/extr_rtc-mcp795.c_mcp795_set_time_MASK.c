
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;
typedef int data ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,char*,struct rtc_time*) ;
 int FUNC_2 (struct device*,int ,int*,int) ;
 int FUNC_3 (struct device*,int ,int*,int) ;
 int FUNC_4 (struct device*,int*) ;
 int FUNC_5 (struct device*,int*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_time *VAR_4)
{
 int VAR_5;
 u8 VAR_6[7];
 bool VAR_7;


 VAR_5 = FUNC_5(VAR_3, &VAR_7);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_2(VAR_3, VAR_2, VAR_6, sizeof(VAR_6));

 if (VAR_5)
  return VAR_5;

 VAR_6[0] = (VAR_6[0] & 0x80) | FUNC_0(VAR_4->tm_sec);
 VAR_6[1] = (VAR_6[1] & 0x80) | FUNC_0(VAR_4->tm_min);
 VAR_6[2] = FUNC_0(VAR_4->tm_hour);
 VAR_6[3] = (VAR_6[3] & 0xF8) | FUNC_0(VAR_4->tm_wday + 1);
 VAR_6[4] = FUNC_0(VAR_4->tm_mday);
 VAR_6[5] = (VAR_6[5] & VAR_0) | FUNC_0(VAR_4->tm_mon + 1);

 if (VAR_4->tm_year > 100)
  VAR_4->tm_year -= 100;

 VAR_6[6] = FUNC_0(VAR_4->tm_year);





 VAR_5 = FUNC_3(VAR_3, VAR_2, VAR_6, 5);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_3(VAR_3, VAR_1, &VAR_6[5], 2);
 if (VAR_5)
  return VAR_5;





 VAR_5 = FUNC_4(VAR_3, VAR_7 ? &VAR_7 : ((void*)0));
 if (VAR_5)
  return VAR_5;

 FUNC_1(VAR_3, "Set mcp795: %ptR\n", VAR_4);

 return 0;
}
