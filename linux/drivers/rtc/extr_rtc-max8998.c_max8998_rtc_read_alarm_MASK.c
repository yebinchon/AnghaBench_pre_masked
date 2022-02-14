
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct rtc_wkalrm {int enabled; int pending; int time; } ;
struct max8998_rtc_info {int rtc; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct max8998_rtc_info* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int,int*) ;
 int FUNC_2 (int*,int *) ;
 int FUNC_3 (int ,int ,int*) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_4, struct rtc_wkalrm *VAR_5)
{
 struct max8998_rtc_info *VAR_6 = FUNC_0(VAR_4);
 u8 VAR_7[8];
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6->rtc, VAR_2, 8, VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_2(VAR_7, &VAR_5->time);

 VAR_9 = FUNC_3(VAR_6->rtc, VAR_1, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_5->enabled = !!VAR_8;

 VAR_9 = FUNC_3(VAR_6->rtc, VAR_3, &VAR_8);
 if (VAR_9 < 0)
  return VAR_9;

 if (VAR_8 & VAR_0)
  VAR_5->pending = 1;
 else
  VAR_5->pending = 0;

 return 0;
}
