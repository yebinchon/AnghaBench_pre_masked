
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350 {int dummy; } ;
struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_wday; int tm_mday; int tm_mon; int tm_year; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct device*,char*,int,int,int,int) ;
 int FUNC_1 (struct device*,char*) ;
 struct wm8350* FUNC_2 (struct device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct wm8350*,int ,int,int*) ;
 int FUNC_6 (struct wm8350*,int ,int ) ;
 int FUNC_7 (struct wm8350*,int ) ;
 int FUNC_8 (struct wm8350*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct device *VAR_10, struct rtc_time *VAR_11)
{
 struct wm8350 *VAR_12 = FUNC_2(VAR_10);
 u16 VAR_13[4];
 u16 VAR_14;
 int VAR_15, VAR_16 = VAR_9;

 VAR_13[0] = VAR_11->tm_sec;
 VAR_13[0] |= VAR_11->tm_min << VAR_2;
 VAR_13[1] = VAR_11->tm_hour;
 VAR_13[1] |= (VAR_11->tm_wday + 1) << VAR_1;
 VAR_13[2] = VAR_11->tm_mday;
 VAR_13[2] |= (VAR_11->tm_mon + 1) << VAR_3;
 VAR_13[3] = ((VAR_11->tm_year + 1900) / 100) << VAR_8;
 VAR_13[3] |= (VAR_11->tm_year + 1900) % 100;

 FUNC_0(VAR_10, "Setting: %04x %04x %04x %04x\n",
  VAR_13[0], VAR_13[1], VAR_13[2], VAR_13[3]);


 VAR_15 = FUNC_8(VAR_12, VAR_7, VAR_5);
 if (VAR_15 < 0)
  return VAR_15;


 do {
  VAR_14 = FUNC_7(VAR_12, VAR_7);
  FUNC_4(FUNC_3(1));
 } while (--VAR_16 && !(VAR_14 & VAR_6));

 if (!VAR_16) {
  FUNC_1(VAR_10, "timed out on set confirmation\n");
  return -VAR_0;
 }


 VAR_15 = FUNC_5(VAR_12, VAR_4, 4, VAR_13);
 if (VAR_15 < 0)
  return VAR_15;


 VAR_15 = FUNC_6(VAR_12, VAR_7,
    VAR_5);
 return VAR_15;
}
