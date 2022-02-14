
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_rtc {int clk; int lock; int rtsr; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 struct sa1100_rtc* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct sa1100_rtc *VAR_1 = FUNC_1(VAR_0);

 if (VAR_1) {
  FUNC_2(&VAR_1->lock);
  FUNC_4(0, VAR_1->rtsr);
  FUNC_3(&VAR_1->lock);
  FUNC_0(VAR_1->clk);
 }

 return 0;
}
