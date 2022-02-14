
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct ftrtc010_rtc {int pclk; int extclk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct ftrtc010_rtc* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct ftrtc010_rtc *VAR_1 = FUNC_2(VAR_0);

 if (!FUNC_0(VAR_1->extclk))
  FUNC_1(VAR_1->extclk);
 if (!FUNC_0(VAR_1->pclk))
  FUNC_1(VAR_1->pclk);

 return 0;
}
