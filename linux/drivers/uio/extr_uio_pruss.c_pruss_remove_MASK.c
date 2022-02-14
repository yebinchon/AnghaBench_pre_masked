
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uio_pruss_dev {int dummy; } ;
struct platform_device {int dev; } ;


 struct uio_pruss_dev* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,struct uio_pruss_dev*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct uio_pruss_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev, VAR_1);
 return 0;
}
