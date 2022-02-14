
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w1_slave {int dev; } ;
struct TYPE_2__ {int * parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct platform_device*) ;
 int FUNC_1 (struct platform_device*) ;
 struct platform_device* FUNC_2 (char*,int ) ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct w1_slave *VAR_2)
{
 int VAR_3;
 struct platform_device *VAR_4;

 VAR_4 = FUNC_2("ds2780-battery", VAR_1);
 if (!VAR_4)
  return -VAR_0;
 VAR_4->dev.parent = &VAR_2->dev;

 VAR_3 = FUNC_1(VAR_4);
 if (VAR_3)
  goto pdev_add_failed;

 FUNC_0(&VAR_2->dev, VAR_4);

 return 0;

pdev_add_failed:
 FUNC_3(VAR_4);

 return VAR_3;
}
