
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {unsigned int length; int zero; scalar_t__ actual; struct nbu2ss_udc* context; int status; int complete; scalar_t__ dma; void* buf; } ;
struct TYPE_3__ {TYPE_2__ req; } ;
struct nbu2ss_udc {TYPE_1__ ep0_req; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct nbu2ss_udc *VAR_2,
          void *VAR_3, unsigned int VAR_4)
{
 VAR_2->ep0_req.req.buf = VAR_3;
 VAR_2->ep0_req.req.length = VAR_4;
 VAR_2->ep0_req.req.dma = 0;
 VAR_2->ep0_req.req.zero = 1;
 VAR_2->ep0_req.req.complete = VAR_1;
 VAR_2->ep0_req.req.status = -VAR_0;
 VAR_2->ep0_req.req.context = VAR_2;
 VAR_2->ep0_req.req.actual = 0;
}
