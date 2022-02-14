
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct rtc_wkalrm {scalar_t__ enabled; struct rtc_time time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,char*,scalar_t__,struct rtc_time*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (struct device*,scalar_t__) ;
 int FUNC_4 (struct rtc_time*,unsigned long*) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct rtc_time *VAR_4 = &VAR_3->time;
 unsigned long VAR_5 = 0;

 FUNC_0(VAR_2, "set alarm: %d, %ptRr\n", VAR_3->enabled, VAR_4);

 FUNC_4(VAR_4, &VAR_5);
 FUNC_5(VAR_5, VAR_0);

 FUNC_3(VAR_2, VAR_3->enabled);

 if (VAR_3->enabled)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);

 return 0;
}
