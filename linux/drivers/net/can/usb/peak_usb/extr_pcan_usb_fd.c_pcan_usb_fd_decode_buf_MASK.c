
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct urb {int actual_length; int * transfer_buffer; } ;
struct pucan_msg {int type; int size; } ;
struct peak_usb_device {struct net_device* netdev; } ;
struct pcan_usb_fd_if {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;





 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,char*,...) ;
 int FUNC_2 (char*,int *,int) ;
 int FUNC_3 (struct pcan_usb_fd_if*,struct pucan_msg*) ;
 int FUNC_4 (struct pcan_usb_fd_if*,struct pucan_msg*) ;
 int FUNC_5 (struct pcan_usb_fd_if*,struct pucan_msg*) ;
 int FUNC_6 (struct pcan_usb_fd_if*,struct pucan_msg*) ;
 int FUNC_7 (struct pcan_usb_fd_if*,struct pucan_msg*) ;
 struct pcan_usb_fd_if* FUNC_8 (struct peak_usb_device*) ;

__attribute__((used)) static int FUNC_9(struct peak_usb_device *VAR_1, struct urb *VAR_2)
{
 struct pcan_usb_fd_if *VAR_3 = FUNC_8(VAR_1);
 struct net_device *VAR_4 = VAR_1->netdev;
 struct pucan_msg *VAR_5;
 u8 *VAR_6, *VAR_7;
 int VAR_8 = 0;


 VAR_6 = VAR_2->transfer_buffer;
 VAR_7 = VAR_2->transfer_buffer + VAR_2->actual_length;
 for (; VAR_6 < VAR_7;) {
  u16 VAR_9, VAR_10;

  VAR_5 = (struct pucan_msg *)VAR_6;
  if (!VAR_5->size) {

   break;
  }

  VAR_10 = FUNC_0(VAR_5->size);
  VAR_9 = FUNC_0(VAR_5->type);


  if (VAR_6 + VAR_10 > VAR_7) {
   FUNC_1(VAR_4,
       "got frag rec: should inc usb rx buf sze\n");
   VAR_8 = -VAR_0;
   break;
  }

  switch (VAR_9) {
  case 130:
   VAR_8 = FUNC_3(VAR_3, VAR_5);
   if (VAR_8 < 0)
    goto fail;
   break;

  case 132:
   FUNC_7(VAR_3, VAR_5);
   break;

  case 129:
   VAR_8 = FUNC_4(VAR_3, VAR_5);
   if (VAR_8 < 0)
    goto fail;
   break;

  case 128:
   VAR_8 = FUNC_6(VAR_3, VAR_5);
   if (VAR_8 < 0)
    goto fail;
   break;

  case 131:
   VAR_8 = FUNC_5(VAR_3, VAR_5);
   if (VAR_8 < 0)
    goto fail;
   break;

  default:
   FUNC_1(VAR_4,
       "unhandled msg type 0x%02x (%d): ignored\n",
       VAR_9, VAR_9);
   break;
  }

  VAR_6 += VAR_10;
 }

fail:
 if (VAR_8)
  FUNC_2("received msg",
         VAR_2->transfer_buffer, VAR_2->actual_length);
 return VAR_8;
}
