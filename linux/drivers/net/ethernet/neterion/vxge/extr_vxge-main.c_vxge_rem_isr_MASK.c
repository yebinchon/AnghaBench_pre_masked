
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ intr_type; } ;
struct vxgedev {TYPE_2__* pdev; TYPE_1__ config; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ,struct vxgedev*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct vxgedev*) ;

__attribute__((used)) static void FUNC_4(struct vxgedev *VAR_3)
{
 if (FUNC_0(VAR_0) &&
     VAR_3->config.intr_type == VAR_2) {
  FUNC_3(VAR_3);
 } else if (VAR_3->config.intr_type == VAR_1) {
   FUNC_2(VAR_3->pdev->irq);
   FUNC_1(VAR_3->pdev->irq, VAR_3);
 }
}
