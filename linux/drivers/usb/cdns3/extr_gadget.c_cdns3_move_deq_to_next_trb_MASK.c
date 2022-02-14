
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cdns3_request {int start_trb; int end_trb; struct cdns3_endpoint* priv_ep; } ;
struct cdns3_endpoint {int dequeue; } ;


 int FUNC_0 (struct cdns3_endpoint*) ;

void FUNC_1(struct cdns3_request *VAR_0)
{
 struct cdns3_endpoint *VAR_1 = VAR_0->priv_ep;
 int VAR_2 = VAR_0->start_trb;

 while (VAR_2 != VAR_0->end_trb) {
  FUNC_0(VAR_1);
  VAR_2 = VAR_1->dequeue;
 }

 FUNC_0(VAR_1);
}
