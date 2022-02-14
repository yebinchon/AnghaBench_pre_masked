
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct wahc {unsigned int dti_isoc_xfer_seg; int dti_edc; int xfer_error_work; int xfer_list_lock; int xfer_errored_list; int active_buf_in_urbs; int dti_state; int dti_isoc_xfer_in_progress; struct urb* buf_in_urbs; TYPE_1__* usb_iface; } ;
struct wa_xfer_result {int bTransferSegment; int bTransferStatus; int dwNumOfPackets; int dwTransferLength; } ;
struct wa_xfer {unsigned int segs; int lock; TYPE_3__* urb; int list_node; TYPE_2__* ep; int segs_done; scalar_t__ is_inbound; int id; struct wa_seg** seg; } ;
struct wa_seg {scalar_t__ status; unsigned int result; scalar_t__ index; } ;
struct wa_rpipe {int dummy; } ;
struct urb {int * sg; } ;
struct device {int dummy; } ;
struct TYPE_6__ {int pipe; } ;
struct TYPE_5__ {int desc; struct wa_rpipe* hcpriv; } ;
struct TYPE_4__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct wa_xfer*) ;
 unsigned int FUNC_1 (struct wa_xfer*) ;
 unsigned int FUNC_2 (struct wa_xfer*,struct wa_seg*,scalar_t__) ;
 int FUNC_3 (struct device*,char*,struct wa_xfer*,int ,unsigned int,int,scalar_t__) ;
 int FUNC_4 (struct device*,char*,...) ;
 int FUNC_5 (struct device*,char*) ;
 scalar_t__ FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 unsigned int FUNC_12 (struct wa_rpipe*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,unsigned long) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ FUNC_18 (int *) ;
 scalar_t__ FUNC_19 (int ) ;
 int FUNC_20 (struct urb*,int ) ;
 int FUNC_21 (struct wa_xfer*,scalar_t__,scalar_t__) ;
 int FUNC_22 (struct urb*,struct wa_xfer*,unsigned int,unsigned int) ;
 int FUNC_23 (struct wahc*) ;
 int FUNC_24 (struct wahc*,TYPE_3__*,int ) ;
 int FUNC_25 (struct wa_xfer*) ;
 int FUNC_26 (struct wa_rpipe*) ;
 int FUNC_27 (struct wa_xfer*) ;
 unsigned int FUNC_28 (int) ;
 int VAR_13 ;

__attribute__((used)) static void FUNC_29(struct wahc *VAR_14, struct wa_xfer *VAR_15,
  struct wa_xfer_result *VAR_16)
{
 int VAR_17;
 struct device *VAR_18 = &VAR_14->usb_iface->dev;
 unsigned long VAR_19;
 unsigned int VAR_20;
 struct wa_seg *VAR_21;
 struct wa_rpipe *VAR_22;
 unsigned VAR_23 = 0;
 u8 VAR_24;
 unsigned VAR_25 = 0;
 unsigned VAR_26 = FUNC_8(VAR_16->dwTransferLength);
 struct urb *VAR_27 = &(VAR_14->buf_in_urbs[0]);

 FUNC_14(&VAR_15->lock, VAR_19);
 VAR_20 = VAR_16->bTransferSegment & 0x7f;
 if (FUNC_17(VAR_20 >= VAR_15->segs))
  goto error_bad_seg;
 VAR_21 = VAR_15->seg[VAR_20];
 VAR_22 = VAR_15->ep->hcpriv;
 VAR_24 = VAR_16->bTransferStatus;
 FUNC_3(VAR_18, "xfer %p ID 0x%08X#%u: bTransferStatus 0x%02x (seg status %u)\n",
  VAR_15, FUNC_27(VAR_15), VAR_20, VAR_24, VAR_21->status);
 if (VAR_21->status == VAR_5
     || VAR_21->status == VAR_8)
  goto segment_aborted;
 if (VAR_21->status == VAR_10)
  VAR_21->status = VAR_9;
 if (VAR_21->status != VAR_9) {
  if (FUNC_10())
   FUNC_4(VAR_18, "xfer %p#%u: Bad segment state %u\n",
    VAR_15, VAR_20, VAR_21->status);
  VAR_21->status = VAR_9;
 }
 if (VAR_24 & 0x80) {
  VAR_21->result = FUNC_28(VAR_24);
  FUNC_4(VAR_18, "DTI: xfer %p 0x%08X:#%u failed (0x%02x)\n",
   VAR_15, VAR_15->id, VAR_21->index, VAR_24);
  VAR_21->status = ((VAR_24 & 0x7F) == VAR_11) ?
   VAR_5 : VAR_8;
  goto error_complete;
 }

 if (VAR_24 & 0x40)
  VAR_24 = 0;





 if (VAR_16->bTransferSegment & 0x80)
  FUNC_21(VAR_15, VAR_21->index + 1,
   VAR_6);
 if (FUNC_19(VAR_15->urb->pipe)
  && (FUNC_8(VAR_16->dwNumOfPackets) > 0)) {

  VAR_14->dti_isoc_xfer_in_progress = FUNC_27(VAR_15);
  VAR_14->dti_isoc_xfer_seg = VAR_20;
  VAR_14->dti_state = VAR_4;
 } else if (VAR_15->is_inbound && !FUNC_19(VAR_15->urb->pipe)
   && (VAR_26 > 0)) {

  VAR_21->status = VAR_7;
  VAR_17 = FUNC_22(VAR_27, VAR_15, VAR_20,
   VAR_26);
  if (VAR_17 < 0)
   goto error_buf_in_populate;
  ++(VAR_14->active_buf_in_urbs);
  VAR_17 = FUNC_20(VAR_27, VAR_3);
  if (VAR_17 < 0) {
   --(VAR_14->active_buf_in_urbs);
   goto error_submit_buf_in;
  }
 } else {

  VAR_21->result = VAR_26;
  VAR_25 = FUNC_12(VAR_22);
  VAR_23 = FUNC_2(VAR_15, VAR_21, VAR_6);
 }
 FUNC_16(&VAR_15->lock, VAR_19);
 if (VAR_23)
  FUNC_25(VAR_15);
 if (VAR_25)
  FUNC_26(VAR_22);
 return;

error_submit_buf_in:
 if (FUNC_6(&VAR_14->dti_edc, VAR_1, VAR_0)) {
  FUNC_4(VAR_18, "DTI: URB max acceptable errors "
   "exceeded, resetting device\n");
  FUNC_23(VAR_14);
 }
 if (FUNC_10())
  FUNC_4(VAR_18, "xfer %p#%u: can't submit DTI data phase: %d\n",
   VAR_15, VAR_20, VAR_17);
 VAR_21->result = VAR_17;
 FUNC_7(VAR_27->sg);
 VAR_27->sg = ((void*)0);
error_buf_in_populate:
 FUNC_0(VAR_15);
 VAR_21->status = VAR_8;
error_complete:
 VAR_15->segs_done++;
 VAR_25 = FUNC_12(VAR_22);
 FUNC_21(VAR_15, VAR_21->index + 1, VAR_21->status);
 VAR_23 = FUNC_1(VAR_15);




 if (((VAR_24 & 0x3f) == VAR_12) &&
  FUNC_18(&VAR_15->ep->desc) &&
  VAR_23) {

  FUNC_5(VAR_18, "Control EP stall.  Queue delayed work.\n");
  FUNC_13(&VAR_14->xfer_list_lock);

  FUNC_9(&VAR_15->list_node, &VAR_14->xfer_errored_list);
  FUNC_15(&VAR_14->xfer_list_lock);
  FUNC_16(&VAR_15->lock, VAR_19);
  FUNC_11(VAR_13, &VAR_14->xfer_error_work);
 } else {
  FUNC_16(&VAR_15->lock, VAR_19);
  if (VAR_23)
   FUNC_25(VAR_15);
  if (VAR_25)
   FUNC_26(VAR_22);
 }

 return;

error_bad_seg:
 FUNC_16(&VAR_15->lock, VAR_19);
 FUNC_24(VAR_14, VAR_15->urb, -VAR_2);
 if (FUNC_10())
  FUNC_4(VAR_18, "xfer %p#%u: bad segment\n", VAR_15, VAR_20);
 if (FUNC_6(&VAR_14->dti_edc, VAR_1, VAR_0)) {
  FUNC_4(VAR_18, "DTI: URB max acceptable errors "
   "exceeded, resetting device\n");
  FUNC_23(VAR_14);
 }
 return;

segment_aborted:

 FUNC_16(&VAR_15->lock, VAR_19);
}
