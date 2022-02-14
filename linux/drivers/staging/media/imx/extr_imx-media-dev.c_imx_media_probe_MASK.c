
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct imx_media_dev {int md; int v4l2_dev; int notifier; } ;
struct device_node {int dummy; } ;


 scalar_t__ FUNC_0 (struct imx_media_dev*) ;
 int FUNC_1 (struct imx_media_dev*) ;
 int FUNC_2 (struct imx_media_dev*,struct device_node*) ;
 struct imx_media_dev* FUNC_3 (struct device*,int *) ;
 int FUNC_4 (struct imx_media_dev*,int *) ;
 int VAR_0 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,char*,int) ;

__attribute__((used)) static int FUNC_9(struct platform_device *VAR_1)
{
 struct device *VAR_2 = &VAR_1->dev;
 struct device_node *VAR_3 = VAR_2->of_node;
 struct imx_media_dev *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_3(VAR_2, ((void*)0));
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_5 = FUNC_2(VAR_4, VAR_3);
 if (VAR_5) {
  FUNC_8(&VAR_4->v4l2_dev,
    "add_of_subdevs failed with %d\n", VAR_5);
  goto cleanup;
 }

 VAR_5 = FUNC_4(VAR_4, &VAR_0);
 if (VAR_5)
  goto cleanup;

 return 0;

cleanup:
 FUNC_6(&VAR_4->notifier);
 FUNC_7(&VAR_4->v4l2_dev);
 FUNC_5(&VAR_4->md);

 return VAR_5;
}
