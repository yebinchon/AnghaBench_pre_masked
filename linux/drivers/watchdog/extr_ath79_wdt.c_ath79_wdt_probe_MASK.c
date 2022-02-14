
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct platform_device {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int VAR_6 ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *,char*,int) ;
 int FUNC_7 (int *,char*,int,int) ;
 scalar_t__ FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (struct platform_device*,int ) ;
 int VAR_7 ;
 int FUNC_10 (int *) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_12)
{
 u32 VAR_13;
 int VAR_14;

 if (VAR_9)
  return -VAR_0;

 VAR_9 = FUNC_9(VAR_12, 0);
 if (FUNC_0(VAR_9))
  return FUNC_1(VAR_9);

 VAR_10 = FUNC_8(&VAR_12->dev, "wdt");
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 VAR_14 = FUNC_5(VAR_10);
 if (VAR_14)
  return VAR_14;

 VAR_11 = FUNC_4(VAR_10);
 if (!VAR_11) {
  VAR_14 = -VAR_1;
  goto err_clk_disable;
 }

 VAR_7 = (0xfffffffful / VAR_11);
 if (VAR_8 < 1 || VAR_8 > VAR_7) {
  VAR_8 = VAR_7;
  FUNC_7(&VAR_12->dev,
   "timeout value must be 0 < timeout < %d, using %d\n",
   VAR_7, VAR_8);
 }

 VAR_13 = FUNC_2(VAR_4);
 VAR_6 = (VAR_13 & VAR_3) ? VAR_2 : 0;

 VAR_14 = FUNC_10(&VAR_5);
 if (VAR_14) {
  FUNC_6(&VAR_12->dev,
   "unable to register misc device, err=%d\n", VAR_14);
  goto err_clk_disable;
 }

 return 0;

err_clk_disable:
 FUNC_3(VAR_10);
 return VAR_14;
}
