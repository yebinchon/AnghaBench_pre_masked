
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int sysdev; scalar_t__ uses_pio_for_control; } ;
struct usb_hcd {scalar_t__ localmem_pool; TYPE_2__ self; } ;
struct usb_ctrlrequest {int dummy; } ;
struct urb {void* setup_packet; int transfer_flags; int transfer_buffer_length; int num_sgs; int num_mapped_sgs; void* transfer_buffer; void* transfer_dma; TYPE_3__* dev; struct scatterlist* sg; TYPE_1__* ep; void* setup_dma; } ;
struct scatterlist {int offset; } ;
typedef int gfp_t ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_6__ {int bus; } ;
struct TYPE_4__ {int desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*) ;
 void* FUNC_2 (int ,int ,int ,int,int) ;
 int FUNC_3 (int ,struct scatterlist*,int,int) ;
 void* FUNC_4 (int ,void*,int,int) ;
 scalar_t__ FUNC_5 (int ,void*) ;
 int FUNC_6 (int ,int ,void**,void**,int,int) ;
 scalar_t__ FUNC_7 (struct usb_hcd*) ;
 scalar_t__ FUNC_8 (void*) ;
 scalar_t__ FUNC_9 (void*) ;
 int FUNC_10 (struct scatterlist*) ;
 scalar_t__ FUNC_11 (int *) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;
 scalar_t__ FUNC_14 (struct urb*) ;

int FUNC_15(struct usb_hcd *VAR_12, struct urb *VAR_13,
       gfp_t VAR_14)
{
 enum dma_data_direction VAR_15;
 int VAR_16 = 0;







 if (FUNC_11(&VAR_13->ep->desc)) {
  if (VAR_12->self.uses_pio_for_control)
   return VAR_16;
  if (FUNC_7(VAR_12)) {
   if (FUNC_8(VAR_13->setup_packet)) {
    FUNC_1(1, "setup packet is not dma capable\n");
    return -VAR_2;
   } else if (FUNC_9(VAR_13->setup_packet)) {
    FUNC_1(1, "setup packet is on stack\n");
    return -VAR_2;
   }

   VAR_13->setup_dma = FUNC_4(
     VAR_12->self.sysdev,
     VAR_13->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
   if (FUNC_5(VAR_12->self.sysdev,
      VAR_13->setup_dma))
    return -VAR_2;
   VAR_13->transfer_flags |= VAR_11;
  } else if (VAR_12->localmem_pool) {
   VAR_16 = FUNC_6(
     VAR_13->dev->bus, VAR_14,
     &VAR_13->setup_dma,
     (void **)&VAR_13->setup_packet,
     sizeof(struct usb_ctrlrequest),
     VAR_1);
   if (VAR_16)
    return VAR_16;
   VAR_13->transfer_flags |= VAR_10;
  }
 }

 VAR_15 = FUNC_14(VAR_13) ? VAR_0 : VAR_1;
 if (VAR_13->transfer_buffer_length != 0
     && !(VAR_13->transfer_flags & VAR_9)) {
  if (FUNC_7(VAR_12)) {
   if (VAR_13->num_sgs) {
    int VAR_17;


    if (FUNC_12(&VAR_13->ep->desc)) {
     FUNC_0(1);
     return -VAR_3;
    }

    VAR_17 = FUNC_3(
      VAR_12->self.sysdev,
      VAR_13->sg,
      VAR_13->num_sgs,
      VAR_15);
    if (VAR_17 <= 0)
     VAR_16 = -VAR_2;
    else
     VAR_13->transfer_flags |= VAR_5;
    VAR_13->num_mapped_sgs = VAR_17;
    if (VAR_17 != VAR_13->num_sgs)
     VAR_13->transfer_flags |=
       VAR_7;
   } else if (VAR_13->sg) {
    struct scatterlist *VAR_18 = VAR_13->sg;
    VAR_13->transfer_dma = FUNC_2(
      VAR_12->self.sysdev,
      FUNC_10(VAR_18),
      VAR_18->offset,
      VAR_13->transfer_buffer_length,
      VAR_15);
    if (FUNC_5(VAR_12->self.sysdev,
      VAR_13->transfer_dma))
     VAR_16 = -VAR_2;
    else
     VAR_13->transfer_flags |= VAR_4;
   } else if (FUNC_8(VAR_13->transfer_buffer)) {
    FUNC_1(1, "transfer buffer not dma capable\n");
    VAR_16 = -VAR_2;
   } else if (FUNC_9(VAR_13->transfer_buffer)) {
    FUNC_1(1, "transfer buffer is on stack\n");
    VAR_16 = -VAR_2;
   } else {
    VAR_13->transfer_dma = FUNC_4(
      VAR_12->self.sysdev,
      VAR_13->transfer_buffer,
      VAR_13->transfer_buffer_length,
      VAR_15);
    if (FUNC_5(VAR_12->self.sysdev,
      VAR_13->transfer_dma))
     VAR_16 = -VAR_2;
    else
     VAR_13->transfer_flags |= VAR_6;
   }
  } else if (VAR_12->localmem_pool) {
   VAR_16 = FUNC_6(
     VAR_13->dev->bus, VAR_14,
     &VAR_13->transfer_dma,
     &VAR_13->transfer_buffer,
     VAR_13->transfer_buffer_length,
     VAR_15);
   if (VAR_16 == 0)
    VAR_13->transfer_flags |= VAR_8;
  }
  if (VAR_16 && (VAR_13->transfer_flags & (VAR_11 |
    VAR_10)))
   FUNC_13(VAR_12, VAR_13);
 }
 return VAR_16;
}
