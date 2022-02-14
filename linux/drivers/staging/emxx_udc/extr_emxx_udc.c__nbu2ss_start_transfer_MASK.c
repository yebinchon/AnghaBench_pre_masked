
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nbu2ss_udc {int ep0state; } ;
struct TYPE_4__ {int length; int zero; } ;
struct nbu2ss_req {int dma_flag; int zero; TYPE_2__ req; scalar_t__ div_len; } ;
struct TYPE_3__ {int maxpacket; } ;
struct nbu2ss_ep {scalar_t__ epnum; scalar_t__ direct; TYPE_1__ ep; } ;


 int VAR_0 ;



 int FUNC_0 (struct nbu2ss_udc*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct nbu2ss_udc*,struct nbu2ss_req*) ;
 int FUNC_2 (struct nbu2ss_udc*,struct nbu2ss_req*) ;
 int FUNC_3 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*) ;
 int FUNC_4 (struct nbu2ss_udc*,struct nbu2ss_ep*,struct nbu2ss_req*) ;

__attribute__((used)) static int FUNC_5(struct nbu2ss_udc *VAR_2,
      struct nbu2ss_ep *VAR_3,
      struct nbu2ss_req *VAR_4,
      bool VAR_5)
{
 int VAR_6 = -VAR_0;

 VAR_4->dma_flag = 0;
 VAR_4->div_len = 0;

 if (VAR_4->req.length == 0) {
  VAR_4->zero = 0;
 } else {
  if ((VAR_4->req.length % VAR_3->ep.maxpacket) == 0)
   VAR_4->zero = VAR_4->req.zero;
  else
   VAR_4->zero = 0;
 }

 if (VAR_3->epnum == 0) {

  switch (VAR_2->ep0state) {
  case 130:
   VAR_6 = FUNC_1(VAR_2, VAR_4);
   break;

  case 128:
   VAR_6 = FUNC_2(VAR_2, VAR_4);
   break;

  case 129:
   VAR_6 = FUNC_0(VAR_2, 1);
   break;

  default:
   break;
  }

 } else {

  if (VAR_3->direct == VAR_1) {

   if (!VAR_5)
    VAR_6 = FUNC_4(VAR_2, VAR_3, VAR_4);
  } else {

   VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4);
  }
 }

 return VAR_6;
}
