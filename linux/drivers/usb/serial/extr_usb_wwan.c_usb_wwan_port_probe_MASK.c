
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_wwan_port_private {struct usb_wwan_port_private** in_buffer; struct urb** in_urbs; struct usb_wwan_port_private** out_buffer; struct urb** out_urbs; int delayed; } ;
typedef struct usb_wwan_port_private u8 ;
struct usb_serial_port {int bulk_out_endpointAddress; int bulk_in_endpointAddress; int bulk_out_size; int bulk_in_size; } ;
struct urb {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct usb_wwan_port_private*) ;
 struct usb_wwan_port_private* FUNC_4 (int ,int ) ;
 struct usb_wwan_port_private* FUNC_5 (int,int ) ;
 int FUNC_6 (struct urb*) ;
 int FUNC_7 (struct usb_serial_port*,struct usb_wwan_port_private*) ;
 int VAR_9 ;
 int VAR_10 ;
 struct urb* FUNC_8 (struct usb_serial_port*,int ,int ,struct usb_serial_port*,struct usb_wwan_port_private*,int ,int ) ;

int FUNC_9(struct usb_serial_port *VAR_11)
{
 struct usb_wwan_port_private *VAR_12;
 struct urb *VAR_13;
 u8 *VAR_14;
 int VAR_15;

 if (!VAR_11->bulk_in_size || !VAR_11->bulk_out_size)
  return -VAR_0;

 VAR_12 = FUNC_5(sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_2(&VAR_12->delayed);

 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  VAR_14 = (u8 *)FUNC_0(VAR_2);
  if (!VAR_14)
   goto bail_out_error;
  VAR_12->in_buffer[VAR_15] = VAR_14;

  VAR_13 = FUNC_8(VAR_11, VAR_11->bulk_in_endpointAddress,
      VAR_7, VAR_11,
      VAR_14, VAR_3,
      VAR_9);
  VAR_12->in_urbs[VAR_15] = VAR_13;
 }

 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  VAR_14 = FUNC_4(VAR_6, VAR_2);
  if (!VAR_14)
   goto bail_out_error2;
  VAR_12->out_buffer[VAR_15] = VAR_14;

  VAR_13 = FUNC_8(VAR_11, VAR_11->bulk_out_endpointAddress,
      VAR_8, VAR_11,
      VAR_14, VAR_6,
      VAR_10);
  VAR_12->out_urbs[VAR_15] = VAR_13;
 }

 FUNC_7(VAR_11, VAR_12);

 return 0;

bail_out_error2:
 for (VAR_15 = 0; VAR_15 < VAR_5; VAR_15++) {
  FUNC_6(VAR_12->out_urbs[VAR_15]);
  FUNC_3(VAR_12->out_buffer[VAR_15]);
 }
bail_out_error:
 for (VAR_15 = 0; VAR_15 < VAR_4; VAR_15++) {
  FUNC_6(VAR_12->in_urbs[VAR_15]);
  FUNC_1((unsigned long)VAR_12->in_buffer[VAR_15]);
 }
 FUNC_3(VAR_12);

 return -VAR_1;
}
