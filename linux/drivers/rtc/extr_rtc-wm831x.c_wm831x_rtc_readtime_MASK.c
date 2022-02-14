
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
typedef int time1 ;
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
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*,char*,...) ;
 struct wm831x_rtc* FUNC_2 (struct device*) ;
 scalar_t__ FUNC_3 (int*,int*,int) ;
 int FUNC_4 (int,struct rtc_time*) ;
 int FUNC_5 (struct wm831x*,int ,int,int*) ;
 int FUNC_6 (struct wm831x*,int ) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_6, struct rtc_time *VAR_7)
{
 struct wm831x_rtc *VAR_8 = FUNC_2(VAR_6);
 struct wm831x *VAR_9 = VAR_8->wm831x;
 u16 VAR_10[2], VAR_11[2];
 int VAR_12;
 int VAR_13 = 0;


 VAR_12 = FUNC_6(VAR_9, VAR_3);
 if (VAR_12 < 0) {
  FUNC_1(VAR_6, "Failed to read RTC control: %d\n", VAR_12);
  return VAR_12;
 }
 if (!(VAR_12 & VAR_5)) {
  FUNC_0(VAR_6, "RTC not yet configured\n");
  return -VAR_0;
 }




 do {
  VAR_12 = FUNC_5(VAR_9, VAR_4,
           2, VAR_10);
  if (VAR_12 != 0)
   continue;

  VAR_12 = FUNC_5(VAR_9, VAR_4,
           2, VAR_11);
  if (VAR_12 != 0)
   continue;

  if (FUNC_3(VAR_10, VAR_11, sizeof(VAR_10)) == 0) {
   u32 VAR_14 = (VAR_10[0] << 16) | VAR_10[1];

   FUNC_4(VAR_14, VAR_7);
   return 0;
  }

 } while (++VAR_13 < VAR_2);

 FUNC_1(VAR_6, "Timed out reading current time\n");

 return -VAR_1;
}
