
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct device_node {int dummy; } ;
struct device {int dummy; } ;
struct atmel_pmecc {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct atmel_pmecc* FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct device*,struct atmel_pmecc**) ;
 struct atmel_pmecc** FUNC_2 (int ,int,int ) ;
 struct platform_device* FUNC_3 (struct device_node*) ;
 struct atmel_pmecc* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct atmel_pmecc *FUNC_6(struct device *VAR_4,
         struct device_node *VAR_5)
{
 struct platform_device *VAR_6;
 struct atmel_pmecc *VAR_7, **VAR_8;
 int VAR_9;

 VAR_6 = FUNC_3(VAR_5);
 if (!VAR_6)
  return FUNC_0(-VAR_1);
 VAR_7 = FUNC_4(VAR_6);
 if (!VAR_7) {
  VAR_9 = -VAR_1;
  goto err_put_device;
 }

 VAR_8 = FUNC_2(VAR_3, sizeof(*VAR_8), VAR_2);
 if (!VAR_8) {
  VAR_9 = -VAR_0;
  goto err_put_device;
 }

 *VAR_8 = VAR_7;

 FUNC_1(VAR_4, VAR_8);

 return VAR_7;

err_put_device:
 FUNC_5(&VAR_6->dev);
 return FUNC_0(VAR_9);
}
