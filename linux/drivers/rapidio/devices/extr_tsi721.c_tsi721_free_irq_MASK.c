
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tsi721_device {int flags; TYPE_2__* pdev; TYPE_1__* msix; } ;
struct TYPE_4__ {int irq; } ;
struct TYPE_3__ {int vector; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ,void*) ;

__attribute__((used)) static void FUNC_1(struct tsi721_device *VAR_3)
{






 FUNC_0(VAR_3->pdev->irq, (void *)VAR_3);
}
