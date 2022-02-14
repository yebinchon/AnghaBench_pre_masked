
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dev; } ;
struct ccf_private {TYPE_2__* err_regs; TYPE_1__* info; } ;
struct TYPE_4__ {int errinten; int errdis; } ;
struct TYPE_3__ {int version; } ;




 struct ccf_private* FUNC_0 (int *) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct ccf_private *VAR_1 = FUNC_0(&VAR_0->dev);

 switch (VAR_1->info->version) {
 case 129:
  FUNC_1(0, &VAR_1->err_regs->errdis);
  break;

 case 128:





  FUNC_1(0, &VAR_1->err_regs->errinten);
  break;
 }

 return 0;
}
