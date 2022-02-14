
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct usb_hcd {int dummy; } ;
struct urb_priv {int num_of_tds; struct urb_priv* tds; } ;
struct urb {int transfer_buffer_length; int transfer_flags; int number_of_packets; struct urb_priv* hcpriv; scalar_t__ error_count; scalar_t__ actual_length; int status; TYPE_1__* iso_frame_desc; int dev; int pipe; } ;
struct fhci_hcd {int lock; } ;
typedef int gfp_t ;
struct TYPE_2__ {int status; int actual_length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 int FUNC_0 (struct fhci_hcd*,struct urb*) ;
 struct fhci_hcd* FUNC_1 (struct usb_hcd*) ;
 struct urb_priv* FUNC_2 (int,int,int ) ;
 int FUNC_3 (struct urb_priv*) ;
 struct urb_priv* FUNC_4 (int,int ) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct usb_hcd*,struct urb*) ;
 int FUNC_8 (int ,int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static int FUNC_11(struct usb_hcd *VAR_5, struct urb *VAR_6,
       gfp_t VAR_7)
{
 struct fhci_hcd *VAR_8 = FUNC_1(VAR_5);
 u32 VAR_9 = VAR_6->pipe;
 int VAR_10;
 int VAR_11;
 int VAR_12 = 0;
 struct urb_priv *VAR_13;
 unsigned long VAR_14;

 switch (FUNC_10(VAR_9)) {
 case 130:

  VAR_12 = 2;
 case 131:

  VAR_12 += VAR_6->transfer_buffer_length / 4096;

  if ((VAR_6->transfer_buffer_length % 4096) != 0)
   VAR_12++;

  if (VAR_12 == 0)
   VAR_12++;
  else if ((VAR_6->transfer_flags & VAR_4) != 0
    && (VAR_6->transfer_buffer_length
        % FUNC_8(VAR_6->dev, VAR_9,
          FUNC_9(VAR_9))) != 0)
   VAR_12++;
  break;
 case 128:
  VAR_12 = VAR_6->number_of_packets;
  if (VAR_12 <= 0)
   return -VAR_1;
  for (VAR_11 = 0; VAR_11 < VAR_6->number_of_packets; VAR_11++) {
   VAR_6->iso_frame_desc[VAR_11].actual_length = 0;
   VAR_6->iso_frame_desc[VAR_11].status = (u32) (-VAR_3);
  }
  break;
 case 129:
  VAR_12 = 1;
 }


 VAR_13 = FUNC_4(sizeof(*VAR_13), VAR_7);
 if (!VAR_13)
  return -VAR_2;


 VAR_13->tds = FUNC_2(VAR_12, sizeof(*VAR_13->tds), VAR_7);
 if (!VAR_13->tds) {
  FUNC_3(VAR_13);
  return -VAR_2;
 }

 FUNC_5(&VAR_8->lock, VAR_14);

 VAR_10 = FUNC_7(VAR_5, VAR_6);
 if (VAR_10)
  goto err;


 VAR_13->num_of_tds = VAR_12;

 VAR_6->status = -VAR_0;
 VAR_6->actual_length = 0;
 VAR_6->error_count = 0;
 VAR_6->hcpriv = VAR_13;

 FUNC_0(VAR_8, VAR_6);
err:
 if (VAR_10) {
  FUNC_3(VAR_13->tds);
  FUNC_3(VAR_13);
 }
 FUNC_6(&VAR_8->lock, VAR_14);
 return VAR_10;
}
