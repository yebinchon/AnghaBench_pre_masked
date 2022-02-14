
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net2280_ep {TYPE_1__* dma; int queue; } ;
struct TYPE_3__ {int dmastat; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct net2280_ep*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(struct net2280_ep *VAR_1)
{

 if (FUNC_1(!FUNC_2(&VAR_1->queue))) {

  FUNC_6(FUNC_0(VAR_0), &VAR_1->dma->dmastat);
  FUNC_4(VAR_1->dma);
 } else
  FUNC_5(VAR_1->dma);
 FUNC_3(VAR_1);
}
