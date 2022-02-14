
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ buf; int complete; } ;
struct usb_ep {struct dev_data* driver_data; } ;
struct dev_data {scalar_t__ rbuf; scalar_t__ setup_out_ready; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;

__attribute__((used)) static void FUNC_1 (struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct dev_data *VAR_3 = VAR_1->driver_data;

 if (VAR_2->buf != VAR_3->rbuf) {
  FUNC_0(VAR_2->buf);
  VAR_2->buf = VAR_3->rbuf;
 }
 VAR_2->complete = VAR_0;
 VAR_3->setup_out_ready = 0;
}
