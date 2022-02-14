
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct tsi721_device {int flags; TYPE_1__* pdev; TYPE_3__* msix; } ;
struct TYPE_5__ {int device; } ;
struct tsi721_bdma_chan {size_t id; TYPE_2__ dchan; } ;
struct TYPE_6__ {int vector; } ;
struct TYPE_4__ {int irq; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 struct tsi721_device* FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct tsi721_bdma_chan *VAR_3)
{
 struct tsi721_device *VAR_4 = FUNC_1(VAR_3->dchan.device);
 FUNC_0(VAR_4->pdev->irq);
}
