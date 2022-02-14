
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct rtc_device* rtc; } ;
struct wm8350 {TYPE_1__ rtc; } ;
struct rtc_device {int dummy; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rtc_device*,int,int) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_3, void *VAR_4)
{
 struct wm8350 *VAR_5 = VAR_4;
 struct rtc_device *VAR_6 = VAR_5->rtc.rtc;

 FUNC_0(VAR_6, 1, VAR_1 | VAR_2);

 return VAR_0;
}
