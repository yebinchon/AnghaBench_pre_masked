
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial_port {int port_number; struct usb_serial* serial; } ;
struct usb_serial {int dummy; } ;
struct keyspan_serial_private {struct keyspan_device_details* device_details; } ;
struct keyspan_port_private {struct keyspan_port_private** in_buffer; struct keyspan_port_private** out_buffer; struct keyspan_port_private* inack_buffer; struct keyspan_port_private* outcont_buffer; void* outcont_urb; void* inack_urb; void** out_urbs; void** in_urbs; struct keyspan_device_details const* device_details; } ;
struct keyspan_device_details {size_t msg_format; int* indat_endpoints; int indat_endp_flip; int* outdat_endpoints; int outdat_endp_flip; int* inack_endpoints; int* outcont_endpoints; } ;
struct callbacks {int outcont_callback; int inack_callback; int outdat_callback; int indat_callback; } ;


 int FUNC_0 (struct keyspan_port_private**) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct callbacks* VAR_8 ;
 void* FUNC_1 (struct usb_serial*,int,int ,struct usb_serial_port*,struct keyspan_port_private*,int,int ) ;
 int FUNC_2 (struct keyspan_port_private*) ;
 void* FUNC_3 (int,int ) ;
 struct keyspan_serial_private* FUNC_4 (struct usb_serial*) ;
 int FUNC_5 (struct usb_serial_port*,struct keyspan_port_private*) ;

__attribute__((used)) static int FUNC_6(struct usb_serial_port *VAR_9)
{
 struct usb_serial *VAR_10 = VAR_9->serial;
 struct keyspan_serial_private *VAR_11;
 struct keyspan_port_private *VAR_12;
 const struct keyspan_device_details *VAR_13;
 struct callbacks *VAR_14;
 int VAR_15;
 int VAR_16;
 int VAR_17;

 VAR_11 = FUNC_4(VAR_10);
 VAR_13 = VAR_11->device_details;

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->in_buffer); ++VAR_17) {
  VAR_12->in_buffer[VAR_17] = FUNC_3(VAR_3, VAR_1);
  if (!VAR_12->in_buffer[VAR_17])
   goto err_in_buffer;
 }

 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->out_buffer); ++VAR_17) {
  VAR_12->out_buffer[VAR_17] = FUNC_3(VAR_5, VAR_1);
  if (!VAR_12->out_buffer[VAR_17])
   goto err_out_buffer;
 }

 VAR_12->inack_buffer = FUNC_3(VAR_2, VAR_1);
 if (!VAR_12->inack_buffer)
  goto err_inack_buffer;

 VAR_12->outcont_buffer = FUNC_3(VAR_4, VAR_1);
 if (!VAR_12->outcont_buffer)
  goto err_outcont_buffer;

 VAR_12->device_details = VAR_13;


 VAR_14 = &VAR_8[VAR_13->msg_format];

 VAR_16 = VAR_9->port_number;


 VAR_15 = VAR_13->indat_endpoints[VAR_16];
 for (VAR_17 = 0; VAR_17 <= VAR_13->indat_endp_flip; ++VAR_17, ++VAR_15) {
  VAR_12->in_urbs[VAR_17] = FUNC_1(VAR_10, VAR_15,
      VAR_6, VAR_9,
      VAR_12->in_buffer[VAR_17],
      VAR_3,
      VAR_14->indat_callback);
 }

 VAR_15 = VAR_13->outdat_endpoints[VAR_16];
 for (VAR_17 = 0; VAR_17 <= VAR_13->outdat_endp_flip; ++VAR_17, ++VAR_15) {
  VAR_12->out_urbs[VAR_17] = FUNC_1(VAR_10, VAR_15,
      VAR_7, VAR_9,
      VAR_12->out_buffer[VAR_17],
      VAR_5,
      VAR_14->outdat_callback);
 }

 VAR_12->inack_urb = FUNC_1(VAR_10,
     VAR_13->inack_endpoints[VAR_16],
     VAR_6, VAR_9,
     VAR_12->inack_buffer,
     VAR_2,
     VAR_14->inack_callback);

 VAR_12->outcont_urb = FUNC_1(VAR_10,
     VAR_13->outcont_endpoints[VAR_16],
     VAR_7, VAR_9,
     VAR_12->outcont_buffer,
     VAR_4,
      VAR_14->outcont_callback);

 FUNC_5(VAR_9, VAR_12);

 return 0;

err_outcont_buffer:
 FUNC_2(VAR_12->inack_buffer);
err_inack_buffer:
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->out_buffer); ++VAR_17)
  FUNC_2(VAR_12->out_buffer[VAR_17]);
err_out_buffer:
 for (VAR_17 = 0; VAR_17 < FUNC_0(VAR_12->in_buffer); ++VAR_17)
  FUNC_2(VAR_12->in_buffer[VAR_17]);
err_in_buffer:
 FUNC_2(VAR_12);

 return -VAR_0;
}
