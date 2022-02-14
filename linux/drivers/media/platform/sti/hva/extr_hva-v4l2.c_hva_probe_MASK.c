
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hva_dev {int v4l2_dev; int work_queue; TYPE_1__* vdev; int lock; struct platform_device* pdev; struct device* dev; } ;
struct TYPE_2__ {int num; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*,int ,int ) ;
 int FUNC_4 (struct device*,char*,int ,int ,int ) ;
 struct hva_dev* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (struct device*,int ) ;
 int FUNC_7 (struct hva_dev*) ;
 int FUNC_8 (struct hva_dev*) ;
 int FUNC_9 (struct platform_device*,struct hva_dev*) ;
 int FUNC_10 (struct hva_dev*) ;
 int FUNC_11 (struct hva_dev*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct platform_device*,struct hva_dev*) ;
 int FUNC_14 (struct hva_dev*) ;
 int FUNC_15 (struct hva_dev*) ;
 int FUNC_16 (struct device*,int *) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct platform_device *VAR_4)
{
 struct hva_dev *VAR_5;
 struct device *VAR_6 = &VAR_4->dev;
 int VAR_7;

 VAR_5 = FUNC_5(VAR_6, sizeof(*VAR_5), VAR_1);
 if (!VAR_5) {
  VAR_7 = -VAR_0;
  goto err;
 }

 VAR_7 = FUNC_6(VAR_6, FUNC_0(32));
 if (VAR_7)
  return VAR_7;

 VAR_5->dev = VAR_6;
 VAR_5->pdev = VAR_4;
 FUNC_13(VAR_4, VAR_5);

 FUNC_12(&VAR_5->lock);


 VAR_7 = FUNC_9(VAR_4, VAR_5);
 if (VAR_7)
  goto err;


 FUNC_14(VAR_5);


 FUNC_15(VAR_5);


 VAR_7 = FUNC_16(VAR_6, &VAR_5->v4l2_dev);
 if (VAR_7) {
  FUNC_3(VAR_6, "%s %s failed to register V4L2 device\n",
   VAR_3, VAR_2);
  goto err_hw;
 }





 VAR_5->work_queue = FUNC_1(VAR_2);
 if (!VAR_5->work_queue) {
  FUNC_3(VAR_6, "%s %s failed to allocate work queue\n",
   VAR_3, VAR_2);
  VAR_7 = -VAR_0;
  goto err_v4l2;
 }


 VAR_7 = FUNC_11(VAR_5);
 if (VAR_7)
  goto err_work_queue;

 FUNC_4(VAR_6, "%s %s registered as /dev/video%d\n", VAR_3,
   VAR_2, VAR_5->vdev->num);

 return 0;

err_work_queue:
 FUNC_2(VAR_5->work_queue);
err_v4l2:



 FUNC_17(&VAR_5->v4l2_dev);
err_hw:
 FUNC_10(VAR_5);
err:
 return VAR_7;
}
