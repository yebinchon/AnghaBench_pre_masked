
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {int enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int,struct rtc_time*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct rtc_time *VAR_5 = &VAR_4->time;

 FUNC_2(FUNC_1(VAR_0), VAR_5);

 VAR_4->enabled = FUNC_1(VAR_1) & VAR_2;

 FUNC_0(VAR_3, "read alarm: %d, %ptRr\n", VAR_4->enabled, VAR_5);

 return 0;
}
