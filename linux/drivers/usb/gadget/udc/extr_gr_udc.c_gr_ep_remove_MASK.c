
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gr_udc {int dev; struct gr_ep* epo; struct gr_ep* epi; } ;
struct TYPE_2__ {int maxpacket_limit; } ;
struct gr_ep {int tailbuf_paddr; scalar_t__ tailbuf; TYPE_1__ ep; } ;


 int FUNC_0 (int ,int ,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_1(struct gr_udc *VAR_0, int VAR_1, int VAR_2)
{
 struct gr_ep *VAR_3;

 if (VAR_2)
  VAR_3 = &VAR_0->epi[VAR_1];
 else
  VAR_3 = &VAR_0->epo[VAR_1];

 if (VAR_3->tailbuf)
  FUNC_0(VAR_0->dev, VAR_3->ep.maxpacket_limit,
      VAR_3->tailbuf, VAR_3->tailbuf_paddr);
}
