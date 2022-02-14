
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct cros_ec_dev {TYPE_2__* debug_info; } ;
struct TYPE_4__ {int dir; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ) ;
 struct cros_ec_dev* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct cros_ec_dev *VAR_1 = FUNC_2(VAR_0->dev.parent);

 FUNC_1(VAR_1->debug_info->dir);
 FUNC_0(VAR_1->debug_info);

 return 0;
}
