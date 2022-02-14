
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {int transfer_buffer_length; int transfer_flags; int pipe; int dev; void* transfer_buffer; void* setup_packet; int transfer_dma; } ;
struct oxu_hcd {TYPE_1__* async; } ;
struct list_head {int dummy; } ;
struct ehci_qtd {int buffer_dma; int hw_token; int qtd_list; int qtd_dma; void* hw_next; struct urb* urb; int hw_alt_next; void* transfer_buffer; int buffer; } ;
typedef int gfp_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {int hw_alt_next; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 struct ehci_qtd* FUNC_2 (struct oxu_hcd*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *,struct list_head*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,void*,int) ;
 int FUNC_7 (struct oxu_hcd*,struct ehci_qtd*,int) ;
 void* FUNC_8 (int ) ;
 int FUNC_9 (struct ehci_qtd*,int,int,int,int) ;
 int FUNC_10 (struct oxu_hcd*,struct urb*,struct list_head*) ;
 scalar_t__ FUNC_11 (int) ;
 int FUNC_12 (int ,int ,int) ;
 scalar_t__ FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static struct list_head *FUNC_16(struct oxu_hcd *VAR_7,
      struct urb *VAR_8,
      struct list_head *VAR_9,
      gfp_t VAR_10)
{
 struct ehci_qtd *VAR_11, *VAR_12;
 dma_addr_t VAR_13;
 int VAR_14, VAR_15;
 int VAR_16;
 u32 VAR_17;
 void *VAR_18 = ((void*)0);
 int VAR_19;




 VAR_11 = FUNC_2(VAR_7);
 if (FUNC_11(!VAR_11))
  return ((void*)0);
 FUNC_4(&VAR_11->qtd_list, VAR_9);
 VAR_11->urb = VAR_8;

 VAR_17 = VAR_3;
 VAR_17 |= (VAR_1 << 10);


 VAR_14 = VAR_8->transfer_buffer_length;
 VAR_16 = FUNC_15(VAR_8->pipe);
 if (!VAR_8->transfer_buffer && VAR_8->transfer_buffer_length && VAR_16)
  VAR_8->transfer_buffer = FUNC_8(VAR_8->transfer_dma);

 if (FUNC_14(VAR_8->pipe)) {

  VAR_19 = FUNC_7(VAR_7, VAR_11, sizeof(struct usb_ctrlrequest));
  if (VAR_19)
   goto cleanup;

  FUNC_9(VAR_11, VAR_11->buffer_dma, sizeof(struct usb_ctrlrequest),
    VAR_17 | (2 << 8), 8);
  FUNC_6(VAR_11->buffer, VAR_11->urb->setup_packet,
    sizeof(struct usb_ctrlrequest));


  VAR_17 ^= VAR_4;
  VAR_12 = VAR_11;
  VAR_11 = FUNC_2(VAR_7);
  if (FUNC_11(!VAR_11))
   goto cleanup;
  VAR_11->urb = VAR_8;
  VAR_12->hw_next = FUNC_0(VAR_11->qtd_dma);
  FUNC_4(&VAR_11->qtd_list, VAR_9);


  if (VAR_14 == 0)
   VAR_17 |= (1 << 8);
 }





 VAR_19 = FUNC_7(VAR_7, VAR_11, VAR_14);
 if (VAR_19)
  goto cleanup;

 VAR_13 = VAR_11->buffer_dma;
 VAR_18 = VAR_8->transfer_buffer;

 if (!VAR_16)
  FUNC_6(VAR_11->buffer, VAR_11->urb->transfer_buffer, VAR_14);

 if (VAR_16)
  VAR_17 |= (1 << 8);


 VAR_15 = FUNC_5(FUNC_12(VAR_8->dev, VAR_8->pipe, !VAR_16));






 for (;;) {
  int VAR_20;

  VAR_20 = FUNC_9(VAR_11, VAR_13, VAR_14, VAR_17, VAR_15);
  VAR_11->transfer_buffer = VAR_18;
  VAR_14 -= VAR_20;
  VAR_13 += VAR_20;
  VAR_18 += VAR_20;
  if (VAR_16)
   VAR_11->hw_alt_next = VAR_7->async->hw_alt_next;


  if ((VAR_15 & (VAR_20 + (VAR_15 - 1))) == 0)
   VAR_17 ^= VAR_4;

  if (FUNC_3(VAR_14 <= 0))
   break;

  VAR_12 = VAR_11;
  VAR_11 = FUNC_2(VAR_7);
  if (FUNC_11(!VAR_11))
   goto cleanup;
  if (FUNC_3(VAR_14 > 0)) {
   VAR_19 = FUNC_7(VAR_7, VAR_11, VAR_14);
   if (VAR_19)
    goto cleanup;
  }
  VAR_11->urb = VAR_8;
  VAR_12->hw_next = FUNC_0(VAR_11->qtd_dma);
  FUNC_4(&VAR_11->qtd_list, VAR_9);
 }




 if (FUNC_3((VAR_8->transfer_flags & VAR_5) == 0
    || FUNC_14(VAR_8->pipe)))
  VAR_11->hw_alt_next = VAR_0;





 if (FUNC_3(VAR_8->transfer_buffer_length != 0)) {
  int VAR_21 = 0;

  if (FUNC_14(VAR_8->pipe)) {
   VAR_21 = 1;
   VAR_17 ^= 0x0100;
   VAR_17 |= VAR_4;
  } else if (FUNC_13(VAR_8->pipe)
    && (VAR_8->transfer_flags & VAR_6)
    && !(VAR_8->transfer_buffer_length % VAR_15)) {
   VAR_21 = 1;
  }
  if (VAR_21) {
   VAR_12 = VAR_11;
   VAR_11 = FUNC_2(VAR_7);
   if (FUNC_11(!VAR_11))
    goto cleanup;
   VAR_11->urb = VAR_8;
   VAR_12->hw_next = FUNC_0(VAR_11->qtd_dma);
   FUNC_4(&VAR_11->qtd_list, VAR_9);


   FUNC_9(VAR_11, 0, 0, VAR_17, 0);
  }
 }


 VAR_11->hw_token |= FUNC_1(VAR_2);
 return VAR_9;

cleanup:
 FUNC_10(VAR_7, VAR_8, VAR_9);
 return ((void*)0);
}
