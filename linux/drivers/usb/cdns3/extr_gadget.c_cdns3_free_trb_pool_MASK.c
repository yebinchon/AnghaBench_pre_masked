
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_endpoint {int * trb_pool; int trb_pool_dma; struct cdns3_device* cdns3_dev; } ;
struct cdns3_device {int sysdev; } ;


 int FUNC_0 (struct cdns3_endpoint*) ;
 int FUNC_1 (int ,int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(struct cdns3_endpoint *VAR_0)
{
 struct cdns3_device *VAR_1 = VAR_0->cdns3_dev;

 if (VAR_0->trb_pool) {
  FUNC_1(VAR_1->sysdev,
      FUNC_0(VAR_0),
      VAR_0->trb_pool, VAR_0->trb_pool_dma);
  VAR_0->trb_pool = ((void*)0);
 }
}
