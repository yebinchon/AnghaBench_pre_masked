
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net2280_request {int td_dma; struct net2280_dma* td; } ;
struct net2280_ep {int td_dma; struct net2280_dma* dummy; } ;
struct net2280_dma {int dmadesc; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct net2280_ep*,struct net2280_request*,int) ;

__attribute__((used)) static inline void
FUNC_2(struct net2280_ep *VAR_0, struct net2280_request *VAR_1, int VAR_2)
{
 struct net2280_dma *VAR_3;
 dma_addr_t VAR_4;


 VAR_3 = VAR_0->dummy;
 VAR_0->dummy = VAR_1->td;
 VAR_1->td = VAR_3;

 VAR_4 = VAR_0->td_dma;
 VAR_0->td_dma = VAR_1->td_dma;
 VAR_1->td_dma = VAR_4;

 VAR_3->dmadesc = FUNC_0 (VAR_0->td_dma);

 FUNC_1(VAR_0, VAR_1, VAR_2);
}
