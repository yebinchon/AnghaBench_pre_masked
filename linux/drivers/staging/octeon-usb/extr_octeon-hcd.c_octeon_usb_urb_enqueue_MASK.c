
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int wMaxPacketSize; } ;
struct usb_host_endpoint {struct cvmx_usb_pipe* hcpriv; TYPE_2__ desc; } ;
struct TYPE_4__ {struct device* controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct usb_device {int speed; int devnum; int portnum; struct usb_device* parent; } ;
struct urb {int number_of_packets; char* setup_packet; struct cvmx_usb_transaction* hcpriv; int pipe; TYPE_3__* iso_frame_desc; int interval; struct usb_device* dev; scalar_t__ status; struct usb_host_endpoint* ep; } ;
struct octeon_hcd {int lock; } ;
struct device {int dummy; } ;
struct cvmx_usb_transaction {int dummy; } ;
struct cvmx_usb_pipe {int dummy; } ;
struct cvmx_usb_iso_packet {int status; int length; int offset; } ;
typedef int gfp_t ;
typedef enum cvmx_usb_transfer { ____Placeholder_cvmx_usb_transfer } cvmx_usb_transfer ;
typedef enum cvmx_usb_speed { ____Placeholder_cvmx_usb_speed } cvmx_usb_speed ;
struct TYPE_6__ {int length; int offset; } ;


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

 struct cvmx_usb_pipe* FUNC_0 (struct octeon_hcd*,int ,int ,int,int,int,int ,int ,int,int,int) ;
 struct cvmx_usb_transaction* FUNC_1 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct urb*) ;
 struct cvmx_usb_transaction* FUNC_2 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct urb*) ;
 struct cvmx_usb_transaction* FUNC_3 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct urb*) ;
 struct cvmx_usb_transaction* FUNC_4 (struct octeon_hcd*,struct cvmx_usb_pipe*,struct urb*) ;
 int FUNC_5 (struct device*,char*,...) ;
 struct octeon_hcd* FUNC_6 (struct usb_hcd*) ;
 int FUNC_7 (struct cvmx_usb_iso_packet*) ;
 struct cvmx_usb_iso_packet* FUNC_8 (int,int,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (int *,unsigned long) ;
 int FUNC_12 (struct usb_hcd*,struct urb*) ;
 int FUNC_13 (struct usb_hcd*,struct urb*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 scalar_t__ FUNC_16 (int ) ;
 int FUNC_17 (int ) ;

__attribute__((used)) static int FUNC_18(struct usb_hcd *VAR_13,
      struct urb *VAR_14,
      gfp_t VAR_15)
{
 struct octeon_hcd *VAR_16 = FUNC_6(VAR_13);
 struct device *VAR_17 = VAR_13->self.controller;
 struct cvmx_usb_transaction *VAR_18 = ((void*)0);
 struct cvmx_usb_pipe *VAR_19;
 unsigned long VAR_20;
 struct cvmx_usb_iso_packet *VAR_21;
 struct usb_host_endpoint *VAR_22 = VAR_14->ep;
 int VAR_23;

 VAR_14->status = 0;
 FUNC_10(&VAR_16->lock, VAR_20);

 VAR_23 = FUNC_12(VAR_13, VAR_14);
 if (VAR_23) {
  FUNC_11(&VAR_16->lock, VAR_20);
  return VAR_23;
 }

 if (!VAR_22->hcpriv) {
  enum cvmx_usb_transfer VAR_24;
  enum cvmx_usb_speed VAR_25;
  int VAR_26 = 0;
  int VAR_27 = 0;

  switch (FUNC_17(VAR_14->pipe)) {
  case 130:
   VAR_24 = VAR_9;
   break;
  case 131:
   VAR_24 = VAR_8;
   break;
  case 132:
   VAR_24 = VAR_7;
   break;
  default:
   VAR_24 = VAR_6;
   break;
  }
  switch (VAR_14->dev->speed) {
  case 128:
   VAR_25 = VAR_4;
   break;
  case 129:
   VAR_25 = VAR_2;
   break;
  default:
   VAR_25 = VAR_3;
   break;
  }





  if (VAR_25 != VAR_3) {




   struct usb_device *VAR_28 = VAR_14->dev;

   while (VAR_28->parent) {




    if (VAR_28->parent->speed == VAR_12) {
     VAR_26 = VAR_28->parent->devnum;
     VAR_27 = VAR_28->portnum;
     break;
    }






    VAR_28 = VAR_28->parent;
   }
  }
  VAR_19 = FUNC_0(VAR_16, FUNC_14(VAR_14->pipe),
       FUNC_15(VAR_14->pipe), VAR_25,
       FUNC_9(VAR_22->desc.wMaxPacketSize)
       & 0x7ff,
       VAR_24,
       FUNC_16(VAR_14->pipe) ?
      VAR_0 :
      VAR_1,
       VAR_14->interval,
       (FUNC_9(VAR_22->desc.wMaxPacketSize)
        >> 11) & 0x3,
       VAR_26, VAR_27);
  if (!VAR_19) {
   FUNC_13(VAR_13, VAR_14);
   FUNC_11(&VAR_16->lock, VAR_20);
   FUNC_5(VAR_17, "Failed to create pipe\n");
   return -VAR_10;
  }
  VAR_22->hcpriv = VAR_19;
 } else {
  VAR_19 = VAR_22->hcpriv;
 }

 switch (FUNC_17(VAR_14->pipe)) {
 case 130:
  FUNC_5(VAR_17, "Submit isochronous to %d.%d\n",
   FUNC_14(VAR_14->pipe),
   FUNC_15(VAR_14->pipe));




  VAR_21 = FUNC_8(VAR_14->number_of_packets,
        sizeof(struct cvmx_usb_iso_packet),
        VAR_11);
  if (VAR_21) {
   int VAR_29;

   for (VAR_29 = 0; VAR_29 < VAR_14->number_of_packets; VAR_29++) {
    VAR_21[VAR_29].offset =
     VAR_14->iso_frame_desc[VAR_29].offset;
    VAR_21[VAR_29].length =
     VAR_14->iso_frame_desc[VAR_29].length;
    VAR_21[VAR_29].status = VAR_5;
   }





   VAR_14->setup_packet = (char *)VAR_21;
   VAR_18 = FUNC_4(VAR_16,
          VAR_19, VAR_14);




   if (!VAR_18) {
    VAR_14->setup_packet = ((void*)0);
    FUNC_7(VAR_21);
   }
  }
  break;
 case 131:
  FUNC_5(VAR_17, "Submit interrupt to %d.%d\n",
   FUNC_14(VAR_14->pipe),
   FUNC_15(VAR_14->pipe));
  VAR_18 = FUNC_3(VAR_16, VAR_19, VAR_14);
  break;
 case 132:
  FUNC_5(VAR_17, "Submit control to %d.%d\n",
   FUNC_14(VAR_14->pipe),
   FUNC_15(VAR_14->pipe));
  VAR_18 = FUNC_2(VAR_16, VAR_19, VAR_14);
  break;
 case 133:
  FUNC_5(VAR_17, "Submit bulk to %d.%d\n",
   FUNC_14(VAR_14->pipe),
   FUNC_15(VAR_14->pipe));
  VAR_18 = FUNC_1(VAR_16, VAR_19, VAR_14);
  break;
 }
 if (!VAR_18) {
  FUNC_13(VAR_13, VAR_14);
  FUNC_11(&VAR_16->lock, VAR_20);
  FUNC_5(VAR_17, "Failed to submit\n");
  return -VAR_10;
 }
 VAR_14->hcpriv = VAR_18;
 FUNC_11(&VAR_16->lock, VAR_20);
 return 0;
}
