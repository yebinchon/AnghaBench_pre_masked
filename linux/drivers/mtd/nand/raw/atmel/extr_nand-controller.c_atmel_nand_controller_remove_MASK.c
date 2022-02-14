
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct atmel_nand_controller {TYPE_2__* caps; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {int (* remove ) (struct atmel_nand_controller*) ;} ;


 struct atmel_nand_controller* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct atmel_nand_controller*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct atmel_nand_controller *VAR_1 = FUNC_0(VAR_0);

 return VAR_1->caps->ops->remove(VAR_1);
}
