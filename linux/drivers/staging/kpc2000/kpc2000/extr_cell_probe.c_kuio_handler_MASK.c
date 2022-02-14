
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uio_info {struct kpc_uio_device* priv; } ;
struct TYPE_5__ {int irq_base_num; } ;
struct kpc_uio_device {TYPE_3__* pcard; TYPE_2__ cte; } ;
typedef int irqreturn_t ;
struct TYPE_6__ {scalar_t__ sysinfo_regs_base; TYPE_1__* pdev; } ;
struct TYPE_4__ {int irq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*,int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static
irqreturn_t FUNC_3(int VAR_3, struct uio_info *VAR_4)
{
 struct kpc_uio_device *VAR_5 = VAR_4->priv;

 if (VAR_3 != VAR_5->pcard->pdev->irq)
  return VAR_1;

 if (FUNC_1(VAR_5->pcard, VAR_5->cte.irq_base_num)) {

  FUNC_2(FUNC_0(VAR_5->cte.irq_base_num),
         VAR_5->pcard->sysinfo_regs_base + VAR_2);
  return VAR_0;
 }
 return VAR_1;
}
