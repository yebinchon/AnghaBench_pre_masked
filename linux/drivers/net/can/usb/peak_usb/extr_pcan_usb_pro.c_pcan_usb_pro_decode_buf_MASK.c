
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union pcan_usb_pro_rec {size_t data_type; int rx_ts; int rx_status; int rx_msg; } ;
typedef int u8 ;
typedef scalar_t__ u16 ;
struct urb {int actual_length; int * transfer_buffer; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct TYPE_2__ {int * rec_cnt_rd; } ;
struct pcan_usb_pro_msg {TYPE_1__ u; } ;
struct pcan_usb_pro_interface {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;






 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 int FUNC_2 (char*,int *,int) ;
 int * FUNC_3 (struct pcan_usb_pro_msg*,int *,int) ;
 struct pcan_usb_pro_interface* FUNC_4 (struct peak_usb_device*) ;
 int FUNC_5 (struct pcan_usb_pro_interface*,int *) ;
 int FUNC_6 (struct pcan_usb_pro_interface*,int *) ;
 int FUNC_7 (struct pcan_usb_pro_interface*,int *) ;
 scalar_t__* VAR_3 ;

__attribute__((used)) static int FUNC_8(struct peak_usb_device *VAR_4, struct urb *VAR_5)
{
 struct pcan_usb_pro_interface *VAR_6 = FUNC_4(VAR_4);
 struct net_device *VAR_7 = VAR_4->netdev;
 struct pcan_usb_pro_msg VAR_8;
 u8 *VAR_9, *VAR_10;
 u16 VAR_11;
 int VAR_12 = 0;

 VAR_9 = FUNC_3(&VAR_8, VAR_5->transfer_buffer,
     VAR_5->actual_length);
 if (!VAR_9) {
  FUNC_1(VAR_7, "bad msg hdr len %d\n", VAR_5->actual_length);
  return -VAR_1;
 }


 VAR_10 = VAR_5->transfer_buffer + VAR_5->actual_length;
 VAR_11 = FUNC_0(*VAR_8.u.rec_cnt_rd);
 for (; VAR_11 > 0; VAR_11--) {
  union pcan_usb_pro_rec *VAR_13 = (union pcan_usb_pro_rec *)VAR_9;
  u16 VAR_14 = VAR_3[VAR_13->data_type];

  if (!VAR_14) {
   FUNC_1(VAR_7,
       "got unsupported rec in usb msg:\n");
   VAR_12 = -VAR_2;
   break;
  }


  if (VAR_9 + VAR_14 > VAR_10) {
   FUNC_1(VAR_7,
    "got frag rec: should inc usb rx buf size\n");
   VAR_12 = -VAR_0;
   break;
  }

  switch (VAR_13->data_type) {
  case 131:
  case 132:
  case 133:
  case 130:
   VAR_12 = FUNC_5(VAR_6, &VAR_13->rx_msg);
   if (VAR_12 < 0)
    goto fail;
   break;

  case 129:
   VAR_12 = FUNC_6(VAR_6, &VAR_13->rx_status);
   if (VAR_12 < 0)
    goto fail;
   break;

  case 128:
   FUNC_7(VAR_6, &VAR_13->rx_ts);
   break;

  default:
   FUNC_1(VAR_7,
       "unhandled rec type 0x%02x (%d): ignored\n",
       VAR_13->data_type, VAR_13->data_type);
   break;
  }

  VAR_9 += VAR_14;
 }

fail:
 if (VAR_12)
  FUNC_2("received msg",
         VAR_5->transfer_buffer, VAR_5->actual_length);

 return VAR_12;
}
