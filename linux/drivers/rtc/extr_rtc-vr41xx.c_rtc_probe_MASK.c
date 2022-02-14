
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_device {unsigned long long range_max; int max_user_freq; int * ops; } ;
struct resource {int start; } ;
struct platform_device {int num_resources; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct rtc_device*) ;
 int VAR_5 ;
 int FUNC_1 (struct rtc_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int *,char*) ;
 void* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int ,char*,struct platform_device*) ;
 struct rtc_device* FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_7 (struct platform_device*,int) ;
 struct resource* FUNC_8 (struct platform_device*,int ,int) ;
 int FUNC_9 (struct platform_device*,struct rtc_device*) ;
 int FUNC_10 (struct resource*) ;
 int * VAR_11 ;
 int FUNC_11 (int ,int ) ;
 int * VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (struct rtc_device*) ;
 int VAR_14 ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int VAR_15 ;

__attribute__((used)) static int FUNC_15(struct platform_device *VAR_16)
{
 struct resource *VAR_17;
 struct rtc_device *VAR_18;
 int VAR_19;

 if (VAR_16->num_resources != 4)
  return -VAR_0;

 VAR_17 = FUNC_8(VAR_16, VAR_4, 0);
 if (!VAR_17)
  return -VAR_0;

 VAR_11 = FUNC_3(&VAR_16->dev, VAR_17->start, FUNC_10(VAR_17));
 if (!VAR_11)
  return -VAR_0;

 VAR_17 = FUNC_8(VAR_16, VAR_4, 1);
 if (!VAR_17) {
  VAR_19 = -VAR_0;
  goto err_rtc1_iounmap;
 }

 VAR_12 = FUNC_3(&VAR_16->dev, VAR_17->start, FUNC_10(VAR_17));
 if (!VAR_12) {
  VAR_19 = -VAR_0;
  goto err_rtc1_iounmap;
 }

 VAR_18 = FUNC_5(&VAR_16->dev);
 if (FUNC_0(VAR_18)) {
  VAR_19 = FUNC_1(VAR_18);
  goto err_iounmap_all;
 }

 VAR_18->ops = &VAR_15;


 VAR_18->range_max = (1ULL << 33) - 1;
 VAR_18->max_user_freq = VAR_5;

 FUNC_13(&VAR_13);

 FUNC_11(VAR_2, 0);
 FUNC_11(VAR_3, 0);
 FUNC_11(VAR_1, 0);
 FUNC_11(VAR_7, 0);
 FUNC_11(VAR_6, 0);

 FUNC_14(&VAR_13);

 VAR_8 = FUNC_7(VAR_16, 0);
 if (VAR_8 <= 0) {
  VAR_19 = -VAR_0;
  goto err_iounmap_all;
 }

 VAR_19 = FUNC_4(&VAR_16->dev, VAR_8, VAR_9, 0,
    "elapsed_time", VAR_16);
 if (VAR_19 < 0)
  goto err_iounmap_all;

 VAR_10 = FUNC_7(VAR_16, 1);
 if (VAR_10 <= 0) {
  VAR_19 = -VAR_0;
  goto err_iounmap_all;
 }

 VAR_19 = FUNC_4(&VAR_16->dev, VAR_10, VAR_14, 0,
    "rtclong1", VAR_16);
 if (VAR_19 < 0)
  goto err_iounmap_all;

 FUNC_9(VAR_16, VAR_18);

 FUNC_6(VAR_8);
 FUNC_6(VAR_10);

 FUNC_2(&VAR_16->dev, "Real Time Clock of NEC VR4100 series\n");

 VAR_19 = FUNC_12(VAR_18);
 if (VAR_19)
  goto err_iounmap_all;

 return 0;

err_iounmap_all:
 VAR_12 = ((void*)0);

err_rtc1_iounmap:
 VAR_11 = ((void*)0);

 return VAR_19;
}
