
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int dummy; } ;
struct meson_rtc {int serial; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 struct meson_rtc* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, struct rtc_time *VAR_2)
{
 struct meson_rtc *VAR_3 = FUNC_0(VAR_1);

 return FUNC_1(VAR_3->serial, VAR_0, FUNC_2(VAR_2));
}
