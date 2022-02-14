
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; struct rtc_device* rtc; } ;
struct wm8350 {TYPE_2__ rtc; } ;
struct rtc_device {int dummy; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (struct rtc_device*,int,int) ;
 int FUNC_2 (struct wm8350*,int ,int ) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_5, void *VAR_6)
{
 struct wm8350 *VAR_7 = VAR_6;
 struct rtc_device *VAR_8 = VAR_7->rtc.rtc;
 int VAR_9;

 FUNC_1(VAR_8, 1, VAR_2 | VAR_1);


 VAR_9 = FUNC_2(VAR_7, VAR_4,
         VAR_3);
 if (VAR_9 != 0) {
  FUNC_0(&(VAR_7->rtc.pdev->dev),
   "Failed to disable alarm: %d\n", VAR_9);
 }

 return VAR_0;
}
