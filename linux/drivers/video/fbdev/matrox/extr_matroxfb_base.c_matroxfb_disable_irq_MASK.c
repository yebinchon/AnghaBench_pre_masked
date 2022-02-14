
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ accelerator; } ;
struct matrox_fb_info {TYPE_2__* pcidev; TYPE_1__ devflags; int irq_flags; } ;
struct TYPE_4__ {int irq; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct matrox_fb_info*) ;
 int FUNC_1 (struct matrox_fb_info*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct matrox_fb_info *VAR_2)
{
 if (FUNC_4(0, &VAR_2->irq_flags)) {

  FUNC_1(VAR_2);
  if (VAR_2->devflags.accelerator == VAR_0)
   FUNC_3(VAR_1, FUNC_2(VAR_1) & ~0x220);
  else
   FUNC_3(VAR_1, FUNC_2(VAR_1) & ~0x20);
  FUNC_0(VAR_2->pcidev->irq, VAR_2);
 }
}
