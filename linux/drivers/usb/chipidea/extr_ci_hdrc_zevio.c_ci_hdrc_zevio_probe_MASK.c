
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int num_resources; int resource; } ;


 scalar_t__ FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (int *,int ,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (struct platform_device*,struct platform_device*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct platform_device *VAR_2;

 FUNC_3(&VAR_1->dev, "ci_hdrc_zevio_probe\n");

 VAR_2 = FUNC_2(&VAR_1->dev,
    VAR_1->resource, VAR_1->num_resources,
    &VAR_0);

 if (FUNC_0(VAR_2)) {
  FUNC_4(&VAR_1->dev, "ci_hdrc_add_device failed!\n");
  return FUNC_1(VAR_2);
 }

 FUNC_5(VAR_1, VAR_2);

 return 0;
}
