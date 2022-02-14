
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_td {struct urb* urb; struct xhci_segment* bounce_seg; } ;
struct xhci_segment {size_t bounce_len; scalar_t__ bounce_offs; int bounce_buf; int bounce_dma; } ;
struct xhci_ring {int bounce_buf_len; } ;
struct xhci_hcd {int dummy; } ;
struct urb {int num_sgs; int sg; } ;
struct device {int dummy; } ;
struct TYPE_3__ {struct device* controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*,int ,int ,int ) ;
 size_t FUNC_1 (int ,int ,int ,size_t,scalar_t__) ;
 scalar_t__ FUNC_2 (struct urb*) ;
 TYPE_2__* FUNC_3 (struct xhci_hcd*) ;
 int FUNC_4 (struct xhci_hcd*,char*,size_t,size_t) ;

__attribute__((used)) static void FUNC_5(struct xhci_hcd *VAR_2,
  struct xhci_ring *VAR_3, struct xhci_td *VAR_4)
{
 struct device *VAR_5 = FUNC_3(VAR_2)->self.controller;
 struct xhci_segment *VAR_6 = VAR_4->bounce_seg;
 struct urb *VAR_7 = VAR_4->urb;
 size_t VAR_8;

 if (!VAR_3 || !VAR_6 || !VAR_7)
  return;

 if (FUNC_2(VAR_7)) {
  FUNC_0(VAR_5, VAR_6->bounce_dma, VAR_3->bounce_buf_len,
     VAR_1);
  return;
 }

 FUNC_0(VAR_5, VAR_6->bounce_dma, VAR_3->bounce_buf_len,
    VAR_0);

 VAR_8 = FUNC_1(VAR_7->sg, VAR_7->num_sgs, VAR_6->bounce_buf,
        VAR_6->bounce_len, VAR_6->bounce_offs);
 if (VAR_8 != VAR_6->bounce_len)
  FUNC_4(VAR_2, "WARN Wrong bounce buffer read length: %zu != %d\n",
    VAR_8, VAR_6->bounce_len);
 VAR_6->bounce_len = 0;
 VAR_6->bounce_offs = 0;
}
