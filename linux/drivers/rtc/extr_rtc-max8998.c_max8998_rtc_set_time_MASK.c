
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_time {int dummy; } ;
struct max8998_rtc_info {scalar_t__ lp3974_bug_workaround; int rtc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct max8998_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,int *) ;
 int FUNC_2 (struct rtc_time*,int *) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct max8998_rtc_info *VAR_3 = FUNC_0(VAR_1);
 u8 VAR_4[8];
 int VAR_5;

 FUNC_2(VAR_2, VAR_4);

 VAR_5 = FUNC_1(VAR_3->rtc, VAR_0, 8, VAR_4);

 if (VAR_3->lp3974_bug_workaround)
  FUNC_3(2000);

 return VAR_5;
}
