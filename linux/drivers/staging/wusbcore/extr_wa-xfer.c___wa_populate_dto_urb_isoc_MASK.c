
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct wa_xfer {TYPE_4__* urb; TYPE_1__* wa; } ;
struct wa_seg {TYPE_2__* dto_urb; int isoc_size; } ;
struct TYPE_8__ {TYPE_3__* iso_frame_desc; scalar_t__ transfer_dma; } ;
struct TYPE_7__ {int length; scalar_t__ offset; } ;
struct TYPE_6__ {int transfer_buffer_length; scalar_t__ transfer_dma; scalar_t__ num_sgs; int * sg; int transfer_flags; } ;
struct TYPE_5__ {int quirks; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_0(struct wa_xfer *VAR_2,
 struct wa_seg *VAR_3, int VAR_4)
{
 VAR_3->dto_urb->transfer_flags |= VAR_0;
 VAR_3->dto_urb->sg = ((void*)0);
 VAR_3->dto_urb->num_sgs = 0;

 VAR_3->dto_urb->transfer_dma = VAR_2->urb->transfer_dma +
  VAR_2->urb->iso_frame_desc[VAR_4].offset;

 if (VAR_2->wa->quirks & VAR_1)
  VAR_3->dto_urb->transfer_buffer_length = VAR_3->isoc_size;
 else
  VAR_3->dto_urb->transfer_buffer_length =
   VAR_2->urb->iso_frame_desc[VAR_4].length;
}
