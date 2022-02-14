
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {int dummy; } ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned long VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int,int ) ;
 int VAR_8 ;
 int FUNC_4 (int *,char*) ;
 struct rtc_device* FUNC_5 (int *,char*,int *,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct platform_device*,struct rtc_device*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_9)
{
 struct rtc_device *VAR_10;
 unsigned long VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_0);
 if (!(VAR_11 & VAR_2)) {
  FUNC_4(&VAR_9->dev, "counters not working; aborting.\n");
  VAR_12 = -VAR_3;
  goto out_err;
 }

 VAR_12 = -VAR_4;


 if (FUNC_2(VAR_1) != 32767) {

  VAR_11 = 0x00100000;
  while ((FUNC_2(VAR_0) & VAR_6) && --VAR_11)
   FUNC_6(1);

  if (!VAR_11) {



   FUNC_4(&VAR_9->dev, "timeout waiting for access\n");
   goto out_err;
  }


  FUNC_3(32767, VAR_1);
 }


 while (FUNC_2(VAR_0) & VAR_5)
  FUNC_6(1);

 VAR_10 = FUNC_5(&VAR_9->dev, "rtc-au1xxx",
         &VAR_8, VAR_7);
 if (FUNC_0(VAR_10)) {
  VAR_12 = FUNC_1(VAR_10);
  goto out_err;
 }

 FUNC_7(VAR_9, VAR_10);

 return 0;

out_err:
 return VAR_12;
}
