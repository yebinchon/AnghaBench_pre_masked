
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct device {int dummy; } ;
struct armada38x_rtc {int lock; int initialized; } ;


 int VAR_0 ;
 int FUNC_0 (struct armada38x_rtc*) ;
 struct armada38x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (unsigned long,struct armada38x_rtc*,int ) ;
 unsigned long FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct armada38x_rtc *VAR_3 = FUNC_1(VAR_1);
 unsigned long VAR_4, VAR_5;

 VAR_4 = FUNC_3(VAR_2);

 if (!VAR_3->initialized)
  FUNC_0(VAR_3);

 FUNC_4(&VAR_3->lock, VAR_5);
 FUNC_2(VAR_4, VAR_3, VAR_0);
 FUNC_5(&VAR_3->lock, VAR_5);

 return 0;
}
