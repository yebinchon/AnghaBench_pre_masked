
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_rtc {int wake_enabled; } ;
struct platform_device {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct twl_rtc* FUNC_0 (struct device*) ;
 scalar_t__ FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct twl_rtc*,int ) ;
 int FUNC_5 (struct platform_device*,int ) ;
 int FUNC_6 (struct twl_rtc*,int ) ;
 struct platform_device* FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct device *VAR_1, unsigned VAR_2)
{
 struct platform_device *VAR_3 = FUNC_7(VAR_1);
 struct twl_rtc *VAR_4 = FUNC_0(VAR_1);
 int VAR_5 = FUNC_5(VAR_3, 0);
 int VAR_6;

 if (VAR_2) {
  VAR_6 = FUNC_6(VAR_4,
          VAR_0);
  if (FUNC_1(VAR_1) && !VAR_4->wake_enabled) {
   FUNC_3(VAR_5);
   VAR_4->wake_enabled = 1;
  }
 } else {
  VAR_6 = FUNC_4(VAR_4,
           VAR_0);
  if (VAR_4->wake_enabled) {
   FUNC_2(VAR_5);
   VAR_4->wake_enabled = 0;
  }
 }

 return VAR_6;
}
