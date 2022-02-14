
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* pdev; } ;
struct amd_ntb_dev {TYPE_2__ ntb; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {scalar_t__ irq; } ;


 int FUNC_0 (struct amd_ntb_dev*,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_1(int VAR_0, void *VAR_1)
{
 struct amd_ntb_dev *VAR_2 = VAR_1;

 return FUNC_0(VAR_2, VAR_0 - VAR_2->ntb.pdev->irq);
}
