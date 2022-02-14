
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdns3_endpoint {int trb_pool_dma; } ;
struct cdns3_device {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_traddr; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct cdns3_device *VAR_1,
        struct cdns3_endpoint *VAR_2)
{
 int VAR_3;

 VAR_3 = FUNC_0(&VAR_1->regs->ep_traddr) - VAR_2->trb_pool_dma;

 return VAR_3 / VAR_0;
}
