
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned int u32 ;
struct xhci_segment {unsigned int bounce_len; unsigned int bounce_offs; void* bounce_dma; int bounce_buf; } ;
struct xhci_hcd {int dummy; } ;
struct urb {unsigned int transfer_buffer_length; int num_sgs; int sg; TYPE_2__* ep; } ;
struct device {int dummy; } ;
struct TYPE_4__ {struct device* controller; } ;
struct TYPE_6__ {TYPE_1__ self; } ;
struct TYPE_5__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (struct device*,int ,unsigned int,int ) ;
 scalar_t__ FUNC_1 (struct device*,void*) ;
 size_t FUNC_2 (int ,int ,int ,unsigned int,unsigned int) ;
 unsigned int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (struct urb*) ;
 int FUNC_5 (struct xhci_hcd*,char*,unsigned int,...) ;
 TYPE_3__* FUNC_6 (struct xhci_hcd*) ;
 int FUNC_7 (struct xhci_hcd*,char*,...) ;

__attribute__((used)) static int FUNC_8(struct xhci_hcd *VAR_2, struct urb *VAR_3, u32 VAR_4,
    u32 *VAR_5, struct xhci_segment *VAR_6)
{
 struct device *VAR_7 = FUNC_6(VAR_2)->self.controller;
 unsigned int VAR_8;
 unsigned int VAR_9;
 u32 VAR_10;
 size_t VAR_11;

 VAR_9 = FUNC_3(&VAR_3->ep->desc);
 VAR_8 = (VAR_4 + *VAR_5) % VAR_9;


 if (VAR_8 == 0)
  return 0;

 FUNC_5(VAR_2, "Unaligned %d bytes, buff len %d\n",
   VAR_8, *VAR_5);


 if (*VAR_5 > VAR_8) {
  *VAR_5 -= VAR_8;
  FUNC_5(VAR_2, "split align, new buff len %d\n", *VAR_5);
  return 0;
 }






 VAR_10 = VAR_9 - (VAR_4 % VAR_9);

 if (VAR_10 > (VAR_3->transfer_buffer_length - VAR_4))
  VAR_10 = (VAR_3->transfer_buffer_length - VAR_4);


 if (FUNC_4(VAR_3)) {
  VAR_11 = FUNC_2(VAR_3->sg, VAR_3->num_sgs,
       VAR_6->bounce_buf, VAR_10, VAR_4);
  if (VAR_11 != VAR_10)
   FUNC_7(VAR_2,
    "WARN Wrong bounce buffer write length: %zu != %d\n",
    VAR_11, VAR_10);
  VAR_6->bounce_dma = FUNC_0(VAR_7, VAR_6->bounce_buf,
       VAR_9, VAR_1);
 } else {
  VAR_6->bounce_dma = FUNC_0(VAR_7, VAR_6->bounce_buf,
       VAR_9, VAR_0);
 }

 if (FUNC_1(VAR_7, VAR_6->bounce_dma)) {

  FUNC_7(VAR_2, "Failed mapping bounce buffer, not aligning\n");
  return 0;
 }
 *VAR_5 = VAR_10;
 VAR_6->bounce_len = VAR_10;
 VAR_6->bounce_offs = VAR_4;

 FUNC_5(VAR_2, "Bounce align, new buff len %d\n", *VAR_5);

 return 1;
}
