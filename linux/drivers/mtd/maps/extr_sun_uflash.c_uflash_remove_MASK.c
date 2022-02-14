
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * virt; int size; } ;
struct uflash_dev {TYPE_1__ map; scalar_t__ mtd; } ;
struct platform_device {int * resource; int dev; } ;


 struct uflash_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct uflash_dev*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct uflash_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 if (VAR_1->mtd) {
  FUNC_3(VAR_1->mtd);
  FUNC_2(VAR_1->mtd);
 }
 if (VAR_1->map.virt) {
  FUNC_4(&VAR_0->resource[0], VAR_1->map.virt, VAR_1->map.size);
  VAR_1->map.virt = ((void*)0);
 }

 FUNC_1(VAR_1);

 return 0;
}
