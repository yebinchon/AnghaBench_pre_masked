
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_rtc {int lock; int alarm; } ;
struct rtc_wkalrm {int dummy; } ;
struct device {int dummy; } ;


 struct st_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (struct rtc_wkalrm*,int *,int) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct device *VAR_0, struct rtc_wkalrm *VAR_1)
{
 struct st_rtc *VAR_2 = FUNC_0(VAR_0);
 unsigned long VAR_3;

 FUNC_2(&VAR_2->lock, VAR_3);

 FUNC_1(VAR_1, &VAR_2->alarm, sizeof(struct rtc_wkalrm));

 FUNC_3(&VAR_2->lock, VAR_3);

 return 0;
}
