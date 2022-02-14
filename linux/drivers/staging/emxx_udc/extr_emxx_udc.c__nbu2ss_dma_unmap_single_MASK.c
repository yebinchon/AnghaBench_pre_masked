
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_4__ {int parent; } ;
struct TYPE_5__ {TYPE_1__ dev; } ;
struct nbu2ss_udc {TYPE_2__ gadget; } ;
struct TYPE_6__ {int actual; scalar_t__* buf; int length; int dma; } ;
struct nbu2ss_req {TYPE_3__ req; scalar_t__ unaligned; scalar_t__ mapped; } ;
struct nbu2ss_ep {scalar_t__* virt_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (scalar_t__*,scalar_t__*,int) ;

__attribute__((used)) static void FUNC_3(struct nbu2ss_udc *VAR_5,
         struct nbu2ss_ep *VAR_6,
         struct nbu2ss_req *VAR_7, u8 VAR_8)
{
 u8 VAR_9[4];
 u8 *VAR_10;
 u32 VAR_11 = 0;

 if (VAR_8 == VAR_4) {
  VAR_11 = VAR_7->req.actual % 4;
  if (VAR_11) {
   VAR_10 = VAR_7->req.buf;
   VAR_10 += (VAR_7->req.actual - VAR_11);
   FUNC_2(VAR_9, VAR_10, VAR_11);
  }
 }

 if (VAR_7->mapped) {
  if (VAR_7->unaligned) {
   if (VAR_8 == VAR_4)
    FUNC_2(VAR_7->req.buf, VAR_6->virt_buf,
           VAR_7->req.actual & 0xfffffffc);
  } else {
   FUNC_1(VAR_5->gadget.dev.parent,
      VAR_7->req.dma, VAR_7->req.length,
    (VAR_8 == VAR_3)
    ? VAR_2
    : VAR_1);
  }
  VAR_7->req.dma = VAR_0;
  VAR_7->mapped = 0;
 } else {
  if (!VAR_7->unaligned)
   FUNC_0(VAR_5->gadget.dev.parent,
      VAR_7->req.dma, VAR_7->req.length,
    (VAR_8 == VAR_3)
    ? VAR_2
    : VAR_1);
 }

 if (VAR_11) {
  VAR_10 = VAR_7->req.buf;
  VAR_10 += (VAR_7->req.actual - VAR_11);
  FUNC_2(VAR_10, VAR_9, VAR_11);
 }
}
