
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct delta_dev {int v4l2_dev; int work_queue; TYPE_1__* vdev; struct device* dev; int * clk_flash_promip; int * clk_st231; int * clk_delta; int lock; struct platform_device* pdev; } ;
struct TYPE_2__ {int num; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct delta_dev*) ;
 int FUNC_3 (struct delta_dev*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct device*,char*,int ) ;
 int FUNC_6 (struct device*,char*,int ) ;
 int FUNC_7 (struct device*,char*,int ,int ,int ) ;
 void* FUNC_8 (struct device*,char*) ;
 struct delta_dev* FUNC_9 (struct device*,int,int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct platform_device*,struct delta_dev*) ;
 int FUNC_12 (struct device*) ;
 int FUNC_13 (struct device*,int ) ;
 int FUNC_14 (struct device*) ;
 int FUNC_15 (struct device*) ;
 int FUNC_16 (struct delta_dev*) ;
 int FUNC_17 (struct delta_dev*) ;
 int FUNC_18 (struct device*,int *) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct platform_device *VAR_5)
{
 struct delta_dev *VAR_6;
 struct device *VAR_7 = &VAR_5->dev;
 int VAR_8;

 VAR_6 = FUNC_9(VAR_7, sizeof(*VAR_6), VAR_4);
 if (!VAR_6) {
  VAR_8 = -VAR_3;
  goto err;
 }

 VAR_6->dev = VAR_7;
 VAR_6->pdev = VAR_5;
 FUNC_11(VAR_5, VAR_6);

 FUNC_10(&VAR_6->lock);


 VAR_6->clk_delta = FUNC_8(VAR_7, "delta");
 if (FUNC_0(VAR_6->clk_delta)) {
  FUNC_5(VAR_7, "%s can't get delta clock\n", VAR_2);
  VAR_6->clk_delta = ((void*)0);
 }

 VAR_6->clk_st231 = FUNC_8(VAR_7, "delta-st231");
 if (FUNC_0(VAR_6->clk_st231)) {
  FUNC_5(VAR_7, "%s can't get delta-st231 clock\n", VAR_2);
  VAR_6->clk_st231 = ((void*)0);
 }

 VAR_6->clk_flash_promip = FUNC_8(VAR_7, "delta-flash-promip");
 if (FUNC_0(VAR_6->clk_flash_promip)) {
  FUNC_5(VAR_7, "%s can't get delta-flash-promip clock\n",
   VAR_2);
  VAR_6->clk_flash_promip = ((void*)0);
 }


 FUNC_13(VAR_7, VAR_0);
 FUNC_15(VAR_7);
 FUNC_14(VAR_7);
 FUNC_12(VAR_7);


 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8) {
  FUNC_6(VAR_6->dev, "%s failed to initialize firmware ipc channel\n",
   VAR_2);
  goto err;
 }


 FUNC_16(VAR_6);


 FUNC_17(VAR_6);


 VAR_8 = FUNC_18(VAR_7, &VAR_6->v4l2_dev);
 if (VAR_8) {
  FUNC_6(VAR_6->dev, "%s failed to register V4L2 device\n",
   VAR_2);
  goto err;
 }

 VAR_6->work_queue = FUNC_1(VAR_1);
 if (!VAR_6->work_queue) {
  FUNC_6(VAR_6->dev, "%s failed to allocate work queue\n",
   VAR_2);
  VAR_8 = -VAR_3;
  goto err_v4l2;
 }


 VAR_8 = FUNC_3(VAR_6);
 if (VAR_8)
  goto err_work_queue;

 FUNC_7(VAR_7, "%s %s registered as /dev/video%d\n",
   VAR_2, VAR_6->vdev->name, VAR_6->vdev->num);

 return 0;

err_work_queue:
 FUNC_4(VAR_6->work_queue);
err_v4l2:
 FUNC_19(&VAR_6->v4l2_dev);
err:
 return VAR_8;
}
