
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_rtc {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct rtc_wkalrm {scalar_t__ enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct wm831x_rtc* FUNC_1 (struct device*) ;
 unsigned long FUNC_2 (int *) ;
 int FUNC_3 (struct wm831x*,int ,unsigned long) ;
 int FUNC_4 (struct wm831x_rtc*) ;
 int FUNC_5 (struct wm831x_rtc*) ;

__attribute__((used)) static int FUNC_6(struct device *VAR_2, struct rtc_wkalrm *VAR_3)
{
 struct wm831x_rtc *VAR_4 = FUNC_1(VAR_2);
 struct wm831x *VAR_5 = VAR_4->wm831x;
 int VAR_6;
 unsigned long VAR_7;

 VAR_7 = FUNC_2(&VAR_3->time);

 VAR_6 = FUNC_5(VAR_4);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, "Failed to stop alarm: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_0,
          (VAR_7 >> 16) & 0xffff);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, "Failed to write ALARM_1: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_3(VAR_5, VAR_1, VAR_7 & 0xffff);
 if (VAR_6 < 0) {
  FUNC_0(VAR_2, "Failed to write ALARM_2: %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_3->enabled) {
  VAR_6 = FUNC_4(VAR_4);
  if (VAR_6 < 0) {
   FUNC_0(VAR_2, "Failed to start alarm: %d\n", VAR_6);
   return VAR_6;
  }
 }

 return 0;
}
