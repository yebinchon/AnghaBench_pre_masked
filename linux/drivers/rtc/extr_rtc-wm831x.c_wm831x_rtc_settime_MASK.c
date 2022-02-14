
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm831x_rtc {struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct rtc_time {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct device*,char*,...) ;
 struct wm831x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int) ;
 unsigned long FUNC_3 (struct rtc_time*) ;
 int FUNC_4 (struct wm831x*,int ) ;
 int FUNC_5 (struct wm831x*,int ,unsigned long) ;
 int FUNC_6 (struct device*,struct rtc_time*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_7, struct rtc_time *VAR_8)
{
 struct wm831x_rtc *VAR_9 = FUNC_1(VAR_7);
 struct wm831x *VAR_10 = VAR_9->wm831x;
 struct rtc_time VAR_11;
 unsigned long VAR_12, VAR_13;
 int VAR_14;
 int VAR_15 = 0;

 VAR_12 = FUNC_3(VAR_8);

 VAR_14 = FUNC_5(VAR_10, VAR_4,
          (VAR_12 >> 16) & 0xffff);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "Failed to write TIME_1: %d\n", VAR_14);
  return VAR_14;
 }

 VAR_14 = FUNC_5(VAR_10, VAR_5, VAR_12 & 0xffff);
 if (VAR_14 < 0) {
  FUNC_0(VAR_7, "Failed to write TIME_2: %d\n", VAR_14);
  return VAR_14;
 }




 do {
  FUNC_2(1);

  VAR_14 = FUNC_4(VAR_10, VAR_2);
  if (VAR_14 < 0)
   VAR_14 = VAR_3;
 } while (!(VAR_14 & VAR_3) &&
   ++VAR_15 < VAR_6);

 if (VAR_14 & VAR_3) {
  FUNC_0(VAR_7, "Timed out writing RTC update\n");
  return -VAR_0;
 }




 VAR_14 = FUNC_6(VAR_7, &VAR_11);
 if (VAR_14 < 0)
  return VAR_14;

 VAR_13 = FUNC_3(&VAR_11);


 if (VAR_13 - VAR_12 > 1) {
  FUNC_0(VAR_7, "RTC update not permitted by hardware\n");
  return -VAR_1;
 }

 return 0;
}
