
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int range_max; int range_min; int * ops; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,char*) ;
 struct rtc_device* FUNC_3 (int *) ;
 int VAR_8 ;
 int FUNC_4 (struct platform_device*,struct rtc_device*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct rtc_device*) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int,int ) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_9)
{
 struct rtc_device *VAR_10;
 unsigned long VAR_11;

 VAR_11 = FUNC_5(VAR_6);
 if (!(VAR_11 & VAR_2)) {
  FUNC_2(&VAR_9->dev, "rtc counters not working\n");
  return -VAR_0;
 }


 if (FUNC_5(VAR_7) != 32767) {
  VAR_11 = 0x100000;
  while ((FUNC_5(VAR_6) & VAR_5) && --VAR_11)
   FUNC_7(1000, 3000);

  if (!VAR_11) {
   FUNC_2(&VAR_9->dev, "time out\n");
   return -VAR_1;
  }
  FUNC_8(32767, VAR_7);
 }

 while (FUNC_5(VAR_6) & VAR_5)
  FUNC_7(1000, 3000);

 VAR_10 = FUNC_3(&VAR_9->dev);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_4(VAR_9, VAR_10);
 VAR_10->ops = &VAR_8;
 VAR_10->range_min = VAR_3;
 VAR_10->range_max = VAR_4;

 return FUNC_6(VAR_10);
}
