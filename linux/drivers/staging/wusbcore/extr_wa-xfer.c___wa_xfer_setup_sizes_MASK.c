
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct wa_xfer_hwaiso {int dummy; } ;
struct wa_xfer_ctl {int dummy; } ;
struct wa_xfer_bi {int dummy; } ;
struct wa_xfer {int is_inbound; int is_dma; int seg_size; int segs; TYPE_4__* wa; TYPE_2__* ep; struct urb* urb; } ;
struct TYPE_10__ {int bmAttribute; int wBlocks; int wMaxPacketSize; } ;
struct wa_rpipe {TYPE_5__ descr; } ;
struct urb {int pipe; int transfer_flags; int number_of_packets; int transfer_buffer_length; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum wa_xfer_type { ____Placeholder_wa_xfer_type } wa_xfer_type ;
struct TYPE_9__ {TYPE_3__* wa_descr; TYPE_1__* usb_iface; } ;
struct TYPE_8__ {int bRPipeBlockSize; } ;
struct TYPE_7__ {struct wa_rpipe* hcpriv; } ;
struct TYPE_6__ {struct device dev; } ;


 int FUNC_0 () ;
 int FUNC_1 (int,size_t) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;




 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct wa_xfer*,int,int*) ;
 int FUNC_3 (struct device*,char*,int,size_t) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static ssize_t FUNC_5(struct wa_xfer *VAR_7,
         enum wa_xfer_type *VAR_8)
{
 ssize_t VAR_9;
 struct device *VAR_10 = &VAR_7->wa->usb_iface->dev;
 size_t VAR_11;
 struct urb *VAR_12 = VAR_7->urb;
 struct wa_rpipe *VAR_13 = VAR_7->ep->hcpriv;

 switch (VAR_13->descr.bmAttribute & 0x3) {
 case 130:
  *VAR_8 = VAR_5;
  VAR_9 = sizeof(struct wa_xfer_ctl);
  break;
 case 129:
 case 131:
  *VAR_8 = VAR_4;
  VAR_9 = sizeof(struct wa_xfer_bi);
  break;
 case 128:
  *VAR_8 = VAR_6;
  VAR_9 = sizeof(struct wa_xfer_hwaiso);
  break;
 default:

  FUNC_0();
  VAR_9 = -VAR_0;
 }
 VAR_7->is_inbound = VAR_12->pipe & VAR_2 ? 1 : 0;
 VAR_7->is_dma = VAR_12->transfer_flags & VAR_1 ? 1 : 0;

 VAR_11 = FUNC_4(VAR_13->descr.wMaxPacketSize);
 VAR_7->seg_size = FUNC_4(VAR_13->descr.wBlocks)
  * 1 << (VAR_7->wa->wa_descr->bRPipeBlockSize - 1);



 if (VAR_7->seg_size < VAR_11) {
  FUNC_3(VAR_10,
   "HW BUG? seg_size %zu smaller than maxpktsize %zu\n",
   VAR_7->seg_size, VAR_11);
  VAR_9 = -VAR_0;
  goto error;
 }
 VAR_7->seg_size = (VAR_7->seg_size / VAR_11) * VAR_11;
 if ((VAR_13->descr.bmAttribute & 0x3) == 128) {
  int VAR_14 = 0;

  VAR_7->segs = 0;




  while (VAR_14 < VAR_12->number_of_packets) {
   int VAR_15;
   VAR_14 += FUNC_2(VAR_7,
     VAR_14, &VAR_15);
   ++VAR_7->segs;
  }
 } else {
  VAR_7->segs = FUNC_1(VAR_12->transfer_buffer_length,
      VAR_7->seg_size);
  if (VAR_7->segs == 0 && *VAR_8 == VAR_5)
   VAR_7->segs = 1;
 }

 if (VAR_7->segs > VAR_3) {
  FUNC_3(VAR_10, "BUG? oops, number of segments %zu bigger than %d\n",
   (VAR_12->transfer_buffer_length/VAR_7->seg_size),
   VAR_3);
  VAR_9 = -VAR_0;
  goto error;
 }
error:
 return VAR_9;
}
