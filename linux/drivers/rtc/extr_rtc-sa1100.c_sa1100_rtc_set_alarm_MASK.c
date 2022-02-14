
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_rtc {int lock; int rtsr; int rtar; } ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 struct sa1100_rtc* FUNC_0 (struct device*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int *,unsigned long*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (unsigned long,int ) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct sa1100_rtc *VAR_5 = FUNC_0(VAR_3);
 unsigned long VAR_6;
 int VAR_7;

 FUNC_3(&VAR_5->lock);
 VAR_7 = FUNC_2(&VAR_4->time, &VAR_6);
 if (VAR_7 != 0)
  goto out;
 FUNC_5(FUNC_1(VAR_5->rtsr) &
  (VAR_2 | VAR_1 | VAR_0), VAR_5->rtsr);
 FUNC_5(VAR_6, VAR_5->rtar);
 if (VAR_4->enabled)
  FUNC_5(FUNC_1(VAR_5->rtsr) | VAR_1, VAR_5->rtsr);
 else
  FUNC_5(FUNC_1(VAR_5->rtsr) & ~VAR_1, VAR_5->rtsr);
out:
 FUNC_4(&VAR_5->lock);

 return VAR_7;
}
