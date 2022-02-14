
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ dma; int length; } ;
struct musb_request {scalar_t__ map_state; scalar_t__ tx; TYPE_1__ request; struct musb_ep* ep; } ;
struct musb_ep {int dma; } ;
struct musb {int controller; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;
 int FUNC_2 (int ,scalar_t__,int ,int ) ;
 int FUNC_3 (struct musb_request*) ;

__attribute__((used)) static inline void FUNC_4(struct musb_request *VAR_5,
    struct musb *VAR_6)
{
 struct musb_ep *VAR_7 = VAR_5->ep;

 if (!FUNC_3(VAR_5) || !VAR_7->dma)
  return;

 if (VAR_5->request.dma == VAR_0) {
  FUNC_0(VAR_6->controller,
    "not unmapping a never mapped buffer\n");
  return;
 }
 if (VAR_5->map_state == VAR_3) {
  FUNC_2(VAR_6->controller,
   VAR_5->request.dma,
   VAR_5->request.length,
   VAR_5->tx
    ? VAR_2
    : VAR_1);
  VAR_5->request.dma = VAR_0;
 } else {
  FUNC_1(VAR_6->controller,
   VAR_5->request.dma,
   VAR_5->request.length,
   VAR_5->tx
    ? VAR_2
    : VAR_1);
 }
 VAR_5->map_state = VAR_4;
}
