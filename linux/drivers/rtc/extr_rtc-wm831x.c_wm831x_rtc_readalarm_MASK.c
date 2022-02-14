
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct wm831x_rtc {int wm831x; } ;
struct rtc_wkalrm {int enabled; int time; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*,int) ;
 struct wm831x_rtc* FUNC_1 (struct device*) ;
 int FUNC_2 (int,int *) ;
 int FUNC_3 (int ,int ,int,int*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_3, struct rtc_wkalrm *VAR_4)
{
 struct wm831x_rtc *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;
 u16 VAR_7[2];
 u32 VAR_8;

 VAR_6 = FUNC_3(VAR_5->wm831x, VAR_0,
          2, VAR_7);
 if (VAR_6 != 0) {
  FUNC_0(VAR_3, "Failed to read alarm time: %d\n", VAR_6);
  return VAR_6;
 }

 VAR_8 = (VAR_7[0] << 16) | VAR_7[1];

 FUNC_2(VAR_8, &VAR_4->time);

 VAR_6 = FUNC_4(VAR_5->wm831x, VAR_2);
 if (VAR_6 < 0) {
  FUNC_0(VAR_3, "Failed to read RTC control: %d\n", VAR_6);
  return VAR_6;
 }

 if (VAR_6 & VAR_1)
  VAR_4->enabled = 1;
 else
  VAR_4->enabled = 0;

 return 0;
}
