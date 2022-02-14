
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct nbu2ss_udc {TYPE_2__ gadget; } ;
struct TYPE_6__ {scalar_t__ dma; int length; int buf; } ;
struct nbu2ss_req {int mapped; TYPE_3__ req; scalar_t__ unaligned; } ;
struct nbu2ss_ep {scalar_t__ phys_buf; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct nbu2ss_udc *VAR_4,
       struct nbu2ss_ep *VAR_5,
       struct nbu2ss_req *VAR_6, u8 VAR_7)
{
 if (VAR_6->req.dma == VAR_0) {
  if (VAR_6->unaligned) {
   VAR_6->req.dma = VAR_5->phys_buf;
  } else {
   VAR_6->req.dma = FUNC_0(VAR_4->gadget.dev.parent,
            VAR_6->req.buf,
            VAR_6->req.length,
            (VAR_7 == VAR_3)
            ? VAR_2
            : VAR_1);
  }
  VAR_6->mapped = 1;
 } else {
  if (!VAR_6->unaligned)
   FUNC_1(VAR_4->gadget.dev.parent,
         VAR_6->req.dma,
         VAR_6->req.length,
         (VAR_7 == VAR_3)
         ? VAR_2
         : VAR_1);

  VAR_6->mapped = 0;
 }
}
