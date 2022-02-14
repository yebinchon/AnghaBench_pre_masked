
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wa_xfer {unsigned int seg_size; TYPE_1__* urb; scalar_t__ is_dma; struct wa_seg** seg; } ;
struct wa_seg {int dummy; } ;
struct urb {unsigned int transfer_buffer_length; struct wa_seg* context; int * transfer_buffer; scalar_t__ num_sgs; int * sg; int transfer_flags; scalar_t__ transfer_dma; scalar_t__ num_mapped_sgs; int status; } ;
struct TYPE_2__ {int sg; int * transfer_buffer; scalar_t__ transfer_dma; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_1 (int ,unsigned int,unsigned int,scalar_t__*) ;

__attribute__((used)) static int FUNC_2(struct urb *VAR_3, struct wa_xfer *VAR_4,
 unsigned int VAR_5, unsigned int VAR_6)
{
 int VAR_7 = 0;
 struct wa_seg *VAR_8 = VAR_4->seg[VAR_5];

 FUNC_0(VAR_3->status == -VAR_0);

 VAR_3->num_mapped_sgs = 0;

 if (VAR_4->is_dma) {
  VAR_3->transfer_dma = VAR_4->urb->transfer_dma
   + (VAR_5 * VAR_4->seg_size);
  VAR_3->transfer_flags |= VAR_2;
  VAR_3->transfer_buffer = ((void*)0);
  VAR_3->sg = ((void*)0);
  VAR_3->num_sgs = 0;
 } else {

  VAR_3->transfer_flags &= ~VAR_2;

  if (VAR_4->urb->transfer_buffer) {
   VAR_3->transfer_buffer =
    VAR_4->urb->transfer_buffer
    + (VAR_5 * VAR_4->seg_size);
   VAR_3->sg = ((void*)0);
   VAR_3->num_sgs = 0;
  } else {




   VAR_3->sg = FUNC_1(
    VAR_4->urb->sg,
    VAR_5 * VAR_4->seg_size,
    VAR_6,
    &(VAR_3->num_sgs));

   if (!(VAR_3->sg)) {
    VAR_3->num_sgs = 0;
    VAR_7 = -VAR_1;
   }
   VAR_3->transfer_buffer = ((void*)0);
  }
 }
 VAR_3->transfer_buffer_length = VAR_6;
 VAR_3->context = VAR_8;

 return VAR_7;
}
