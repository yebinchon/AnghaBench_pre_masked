
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct wa_xfer {TYPE_1__* urb; scalar_t__ is_dma; } ;
struct wa_seg {TYPE_2__* dto_urb; } ;
struct TYPE_4__ {size_t transfer_buffer_length; int * sg; scalar_t__ num_sgs; int * transfer_buffer; scalar_t__ num_mapped_sgs; int transfer_flags; scalar_t__ transfer_dma; } ;
struct TYPE_3__ {int sg; int * transfer_buffer; scalar_t__ transfer_dma; } ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int ,size_t,size_t,scalar_t__*) ;

__attribute__((used)) static int FUNC_1(struct wa_xfer *VAR_2,
 struct wa_seg *VAR_3, size_t VAR_4, size_t VAR_5)
{
 int VAR_6 = 0;

 if (VAR_2->is_dma) {
  VAR_3->dto_urb->transfer_dma =
   VAR_2->urb->transfer_dma + VAR_4;
  VAR_3->dto_urb->transfer_flags |= VAR_1;
  VAR_3->dto_urb->sg = ((void*)0);
  VAR_3->dto_urb->num_sgs = 0;
 } else {

  VAR_3->dto_urb->transfer_flags &=
   ~VAR_1;

  VAR_3->dto_urb->num_mapped_sgs = 0;

  if (VAR_2->urb->transfer_buffer) {
   VAR_3->dto_urb->transfer_buffer =
    VAR_2->urb->transfer_buffer +
    VAR_4;
   VAR_3->dto_urb->sg = ((void*)0);
   VAR_3->dto_urb->num_sgs = 0;
  } else {
   VAR_3->dto_urb->transfer_buffer = ((void*)0);







   VAR_3->dto_urb->sg = FUNC_0(
    VAR_2->urb->sg,
    VAR_4, VAR_5,
    &(VAR_3->dto_urb->num_sgs));
   if (!(VAR_3->dto_urb->sg))
    VAR_6 = -VAR_0;
  }
 }
 VAR_3->dto_urb->transfer_buffer_length = VAR_5;

 return VAR_6;
}
