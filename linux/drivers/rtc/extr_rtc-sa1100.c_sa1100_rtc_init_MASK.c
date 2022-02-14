
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sa1100_rtc {int rtsr; struct rtc_device* rtc; struct rtc_device* clk; int rcnr; int rttr; int lock; } ;
struct rtc_device {int max_user_freq; } ;
struct platform_device {int name; int dev; } ;


 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct rtc_device*) ;
 int FUNC_3 (struct rtc_device*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct rtc_device* FUNC_6 (int *,int *) ;
 struct rtc_device* FUNC_7 (int *,int ,int *,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_6 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int,int ) ;

int FUNC_11(struct platform_device *VAR_7, struct sa1100_rtc *VAR_8)
{
 struct rtc_device *VAR_9;
 int VAR_10;

 FUNC_9(&VAR_8->lock);

 VAR_8->clk = FUNC_6(&VAR_7->dev, ((void*)0));
 if (FUNC_0(VAR_8->clk)) {
  FUNC_4(&VAR_7->dev, "failed to find rtc clock source\n");
  return FUNC_1(VAR_8->clk);
 }

 VAR_10 = FUNC_3(VAR_8->clk);
 if (VAR_10)
  return VAR_10;







 if (FUNC_8(VAR_8->rttr) == 0) {
  FUNC_10(VAR_0 + (VAR_1 << 16), VAR_8->rttr);
  FUNC_5(&VAR_7->dev, "warning: "
   "initializing default clock divider/trim value\n");

  FUNC_10(0, VAR_8->rcnr);
 }

 VAR_9 = FUNC_7(&VAR_7->dev, VAR_7->name, &VAR_6,
     VAR_5);
 if (FUNC_0(VAR_9)) {
  FUNC_2(VAR_8->clk);
  return FUNC_1(VAR_9);
 }
 VAR_8->rtc = VAR_9;

 VAR_9->max_user_freq = VAR_2;
 FUNC_10(VAR_3 | VAR_4, VAR_8->rtsr);

 return 0;
}
