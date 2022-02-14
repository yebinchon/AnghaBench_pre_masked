
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct venus_core {int dev_dec; int vdev_dec; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;


 struct venus_core* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct venus_core *VAR_1 = FUNC_0(VAR_0->dev.parent);

 FUNC_2(VAR_1->vdev_dec);
 FUNC_1(VAR_1->dev_dec);

 return 0;
}
