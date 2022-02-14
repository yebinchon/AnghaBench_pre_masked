
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_request {int actual; int length; } ;
struct nbu2ss_udc {int dummy; } ;
struct nbu2ss_req {int dma_flag; scalar_t__ div_len; struct usb_request req; } ;
struct TYPE_2__ {int maxpacket; } ;
struct nbu2ss_ep {int epnum; TYPE_1__ ep; } ;


 int VAR_0 ;
 int FUNC_0 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*,int ) ;
 int FUNC_1 (struct nbu2ss_udc*,int ,int ,int ) ;
 int FUNC_2 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*) ;
 int FUNC_3 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*) ;

__attribute__((used)) static inline void FUNC_4(struct nbu2ss_udc *VAR_1,
       struct nbu2ss_ep *VAR_2,
       struct nbu2ss_req *VAR_3)
{
 u32 VAR_4;
 u32 VAR_5;
 struct usb_request *VAR_6;

 VAR_6 = &VAR_3->req;

 if (!VAR_3->dma_flag)
  return;

 VAR_6->actual += VAR_3->div_len;
 VAR_3->div_len = 0;
 VAR_3->dma_flag = 0;





 if (VAR_6->actual != VAR_6->length) {
  FUNC_3(VAR_1, VAR_2, VAR_3);
 } else {
  VAR_4 = VAR_2->ep.maxpacket;
  VAR_5 = VAR_6->actual % VAR_4;
  if (VAR_5 > 0) {
   if (((VAR_6->actual & 0x03) == 0) && (VAR_5 < VAR_4))
    FUNC_1(VAR_1, VAR_2->epnum, 0, 0);
  } else {
   FUNC_2(VAR_1, VAR_2, VAR_3);
  }
 }
}
