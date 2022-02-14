
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int regs; } ;
struct cafe_camera {TYPE_2__ mcam; TYPE_1__* pdev; } ;
struct TYPE_3__ {int irq; } ;


 int FUNC_0 (struct cafe_camera*) ;
 int FUNC_1 (int ,struct cafe_camera*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct cafe_camera *VAR_0)
{
 FUNC_2(&VAR_0->mcam);
 FUNC_0(VAR_0);
 FUNC_1(VAR_0->pdev->irq, VAR_0);
 FUNC_3(VAR_0->pdev, VAR_0->mcam.regs);
}
