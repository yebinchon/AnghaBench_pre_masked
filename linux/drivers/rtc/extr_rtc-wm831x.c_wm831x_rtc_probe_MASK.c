
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct wm831x_rtc {int alarm_enabled; TYPE_1__* rtc; struct wm831x* wm831x; } ;
struct wm831x {int dummy; } ;
struct TYPE_11__ {int parent; } ;
struct platform_device {TYPE_3__ dev; } ;
struct TYPE_10__ {int range_max; int * ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*,char*,int,...) ;
 struct wm831x* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_3__*,int) ;
 struct wm831x_rtc* FUNC_5 (TYPE_3__*,int,int ) ;
 int FUNC_6 (TYPE_3__*,int,int *,int ,int,char*,struct wm831x_rtc*) ;
 TYPE_1__* FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (struct platform_device*,char*) ;
 int FUNC_9 (struct platform_device*,struct wm831x_rtc*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_11 (struct wm831x*,int ) ;
 int FUNC_12 (struct wm831x*,int ) ;
 int FUNC_13 (struct wm831x*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_14(struct platform_device *VAR_9)
{
 struct wm831x *VAR_10 = FUNC_3(VAR_9->dev.parent);
 struct wm831x_rtc *VAR_11;
 int VAR_12 = FUNC_11(VAR_10, FUNC_8(VAR_9, "ALM"));
 int VAR_13 = 0;

 VAR_11 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11), VAR_1);
 if (VAR_11 == ((void*)0))
  return -VAR_0;

 FUNC_9(VAR_9, VAR_11);
 VAR_11->wm831x = VAR_10;

 VAR_13 = FUNC_12(VAR_10, VAR_6);
 if (VAR_13 < 0) {
  FUNC_2(&VAR_9->dev, "Failed to read RTC control: %d\n", VAR_13);
  return VAR_13;
 }
 if (VAR_13 & VAR_5)
  VAR_11->alarm_enabled = 1;

 FUNC_4(&VAR_9->dev, 1);

 VAR_11->rtc = FUNC_7(&VAR_9->dev);
 if (FUNC_0(VAR_11->rtc))
  return FUNC_1(VAR_11->rtc);

 VAR_11->rtc->ops = &VAR_8;
 VAR_11->rtc->range_max = VAR_4;

 VAR_13 = FUNC_10(VAR_11->rtc);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_6(&VAR_9->dev, VAR_12, ((void*)0),
    VAR_7,
    VAR_3 | VAR_2,
    "RTC alarm",
    VAR_11);
 if (VAR_13 != 0) {
  FUNC_2(&VAR_9->dev, "Failed to request alarm IRQ %d: %d\n",
   VAR_12, VAR_13);
 }

 FUNC_13(VAR_10);

 return 0;
}
