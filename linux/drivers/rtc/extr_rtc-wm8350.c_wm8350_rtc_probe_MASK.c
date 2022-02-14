
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct wm8350_rtc {int rtc; } ;
struct wm8350 {int dev; struct wm8350_rtc rtc; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*,int *,int ) ;
 struct wm8350* FUNC_6 (struct platform_device*) ;
 int FUNC_7 (struct wm8350*,int ,int ) ;
 int FUNC_8 (struct wm8350*,int ) ;
 int FUNC_9 (struct wm8350*) ;
 int FUNC_10 (struct wm8350*,int ) ;
 int FUNC_11 (struct wm8350*) ;
 int FUNC_12 (struct wm8350*,int ,int ,int ,char*,struct wm8350*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_13 (struct wm8350*,int ,int) ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_16)
{
 struct wm8350 *VAR_17 = FUNC_6(VAR_16);
 struct wm8350_rtc *VAR_18 = &VAR_17->rtc;
 int VAR_19 = 0;
 u16 VAR_20, VAR_21;

 VAR_20 = FUNC_10(VAR_17, VAR_11);
 if (VAR_20 & VAR_7) {
  FUNC_2(&VAR_16->dev, "RTC BCD mode not supported\n");
  return -VAR_0;
 }
 if (VAR_20 & VAR_6) {
  FUNC_2(&VAR_16->dev, "RTC 12 hour mode not supported\n");
  return -VAR_0;
 }


 VAR_21 = FUNC_10(VAR_17, VAR_5);
 if (!(VAR_21 & VAR_10)) {
  FUNC_3(VAR_17->dev, "Starting RTC\n");

  FUNC_11(VAR_17);

  VAR_19 = FUNC_13(VAR_17, VAR_5,
          VAR_10);
  if (VAR_19 < 0) {
   FUNC_2(&VAR_16->dev, "failed to enable RTC: %d\n", VAR_19);
   return VAR_19;
  }

  FUNC_9(VAR_17);
 }

 if (VAR_20 & VAR_9) {
  int VAR_22;

  VAR_19 = FUNC_7(VAR_17, VAR_11,
     VAR_8);
  if (VAR_19 < 0) {
   FUNC_2(&VAR_16->dev, "failed to start: %d\n", VAR_19);
   return VAR_19;
  }

  VAR_22 = VAR_12;
  do {
   VAR_20 = FUNC_10(VAR_17,
        VAR_11);
  } while (VAR_20 & VAR_9 && --VAR_22);

  if (VAR_22 == 0) {
   FUNC_2(&VAR_16->dev, "failed to start: timeout\n");
   return -VAR_1;
  }
 }

 FUNC_4(&VAR_16->dev, 1);

 VAR_18->rtc = FUNC_5(&VAR_16->dev, "wm8350",
     &VAR_14, VAR_2);
 if (FUNC_0(VAR_18->rtc)) {
  VAR_19 = FUNC_1(VAR_18->rtc);
  FUNC_2(&VAR_16->dev, "failed to register RTC: %d\n", VAR_19);
  return VAR_19;
 }

 FUNC_12(VAR_17, VAR_4,
       VAR_15, 0,
       "RTC Seconds", VAR_17);
 FUNC_8(VAR_17, VAR_4);

 FUNC_12(VAR_17, VAR_3,
       VAR_13, 0,
       "RTC Alarm", VAR_17);

 return 0;
}
