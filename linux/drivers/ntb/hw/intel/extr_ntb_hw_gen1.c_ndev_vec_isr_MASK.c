
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct intel_ntb_vec {int num; TYPE_3__* ndev; } ;
typedef int irqreturn_t ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct TYPE_6__ {TYPE_2__ ntb; } ;
struct TYPE_4__ {int dev; } ;


 int FUNC_0 (int *,char*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ) ;

__attribute__((used)) static irqreturn_t FUNC_2(int VAR_0, void *VAR_1)
{
 struct intel_ntb_vec *VAR_2 = VAR_1;

 FUNC_0(&VAR_2->ndev->ntb.pdev->dev, "irq: %d  nvec->num: %d\n",
  VAR_0, VAR_2->num);

 return FUNC_1(VAR_2->ndev, VAR_2->num);
}
