
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct usb_device {int dummy; } ;
struct urb {int number_of_packets; TYPE_5__* iso_frame_desc; void* transfer_flags; } ;
struct TYPE_10__ {struct bas_bc_state* bas; } ;
struct bc_state {scalar_t__ proto2; int channel; int limit; struct urb* urb; int inputstate; TYPE_4__ hw; TYPE_3__* cs; } ;
struct bas_bc_state {int running; int * isooutovfl; int isooutdone; struct bc_state* isoouturbs; struct bc_state* isooutfree; TYPE_6__* isooutbuf; scalar_t__ isoinbuf; struct urb** isoinurbs; } ;
struct TYPE_12__ {scalar_t__ data; } ;
struct TYPE_11__ {int offset; int length; scalar_t__ actual_length; scalar_t__ status; } ;
struct TYPE_8__ {TYPE_1__* bas; } ;
struct TYPE_9__ {TYPE_2__ hw; } ;
struct TYPE_7__ {struct usb_device* udev; } ;


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
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 (int ,char*,struct urb*) ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int VAR_15 ;
 int FUNC_2 (struct bas_bc_state*) ;
 int FUNC_3 (struct urb*,struct usb_device*,int ,scalar_t__,int,int ,struct bc_state*,int ) ;
 int FUNC_4 (struct usb_device*,int) ;
 int FUNC_5 (struct usb_device*,int) ;
 int FUNC_6 (struct urb*,int ) ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_7(struct bc_state *VAR_17)
{
 struct usb_device *VAR_18 = VAR_17->cs->hw.bas->udev;
 struct bas_bc_state *VAR_19 = VAR_17->hw.bas;
 struct urb *VAR_20;
 int VAR_21, VAR_22;
 int VAR_23;


 if (VAR_17->proto2 == VAR_12)
  VAR_17->inputstate |= VAR_11;


 VAR_19->running = 1;
 for (VAR_22 = 0; VAR_22 < VAR_2; VAR_22++) {
  VAR_20 = VAR_19->isoinurbs[VAR_22];
  if (!VAR_20) {
   VAR_23 = -VAR_9;
   goto error;
  }
  FUNC_3(VAR_20, VAR_18,
     FUNC_4(VAR_18, 3 + 2 * VAR_17->channel),
     VAR_19->isoinbuf + VAR_22 * VAR_1,
     VAR_1, VAR_15, VAR_17,
     VAR_0);

  VAR_20->transfer_flags = VAR_14;
  VAR_20->number_of_packets = VAR_5;
  for (VAR_21 = 0; VAR_21 < VAR_5; VAR_21++) {
   VAR_20->iso_frame_desc[VAR_21].offset = VAR_21 * VAR_3;
   VAR_20->iso_frame_desc[VAR_21].length = VAR_3;
   VAR_20->iso_frame_desc[VAR_21].status = 0;
   VAR_20->iso_frame_desc[VAR_21].actual_length = 0;
  }

  FUNC_0(VAR_8, "Initial isoc read", VAR_20);
  VAR_23 = FUNC_6(VAR_20, VAR_10);
  if (VAR_23 != 0)
   goto error;
 }


 FUNC_1(VAR_19->isooutbuf, VAR_13);


 for (VAR_22 = 0; VAR_22 < VAR_7; ++VAR_22) {
  VAR_20 = VAR_19->isoouturbs[VAR_22].urb;
  if (!VAR_20) {
   VAR_23 = -VAR_9;
   goto error;
  }
  FUNC_3(VAR_20, VAR_18,
     FUNC_5(VAR_18, 4 + 2 * VAR_17->channel),
     VAR_19->isooutbuf->data,
     sizeof(VAR_19->isooutbuf->data),
     VAR_16, &VAR_19->isoouturbs[VAR_22],
     VAR_0);

  VAR_20->transfer_flags = VAR_14;
  VAR_20->number_of_packets = VAR_5;
  for (VAR_21 = 0; VAR_21 < VAR_5; ++VAR_21) {
   VAR_20->iso_frame_desc[VAR_21].offset = VAR_6;
   VAR_20->iso_frame_desc[VAR_21].length = VAR_4;
   VAR_20->iso_frame_desc[VAR_21].status = 0;
   VAR_20->iso_frame_desc[VAR_21].actual_length = 0;
  }
  VAR_19->isoouturbs[VAR_22].limit = -1;
 }


 for (VAR_22 = 0; VAR_22 < VAR_7 - 1; ++VAR_22) {
  FUNC_0(VAR_8, "Initial isoc write", VAR_20);
  VAR_23 = FUNC_6(VAR_19->isoouturbs[VAR_22].urb, VAR_10);
  if (VAR_23 != 0)
   goto error;
 }
 FUNC_0(VAR_8, "Initial isoc write (free)", VAR_20);
 VAR_19->isooutfree = &VAR_19->isoouturbs[VAR_7 - 1];
 VAR_19->isooutdone = *(VAR_19->isooutovfl = ((void*)0));
 return 0;
error:
 FUNC_2(VAR_19);
 return VAR_23;
}
