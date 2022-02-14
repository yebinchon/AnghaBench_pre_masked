
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s3c_camif_plat_data {int (* gpio_put ) () ;} ;
struct platform_device {int dev; } ;
struct camif_dev {int v4l2_dev; int media_dev; struct s3c_camif_plat_data pdata; } ;


 int FUNC_0 (struct camif_dev*) ;
 int FUNC_1 (struct camif_dev*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct camif_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_0)
{
 struct camif_dev *VAR_1 = FUNC_4(VAR_0);
 struct s3c_camif_plat_data *VAR_2 = &VAR_1->pdata;

 FUNC_3(&VAR_1->media_dev);
 FUNC_2(&VAR_1->media_dev);
 FUNC_1(VAR_1);
 FUNC_7(&VAR_1->v4l2_dev);

 FUNC_5(&VAR_0->dev);
 FUNC_0(VAR_1);
 VAR_2->gpio_put();

 return 0;
}
