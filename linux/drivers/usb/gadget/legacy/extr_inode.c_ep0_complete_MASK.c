
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {scalar_t__ status; int complete; int * buf; } ;
struct usb_ep {struct dev_data* driver_data; } ;
struct dev_data {int setup_out_error; int setup_out_ready; int lock; int rbuf; int setup_in; } ;


 int FUNC_0 (struct usb_ep*,struct usb_request*) ;
 int FUNC_1 (struct dev_data*) ;
 int VAR_0 ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_4 (struct usb_ep *VAR_1, struct usb_request *VAR_2)
{
 struct dev_data *VAR_3 = VAR_1->driver_data;
 unsigned long VAR_4;
 int VAR_5 = 1;


 FUNC_2(&VAR_3->lock, VAR_4);
 if (!VAR_3->setup_in) {
  VAR_3->setup_out_error = (VAR_2->status != 0);
  if (!VAR_3->setup_out_error)
   VAR_5 = 0;
  VAR_3->setup_out_ready = 1;
  FUNC_1 (VAR_3);
 }


 if (VAR_5 && VAR_2->buf != &VAR_3->rbuf)
  FUNC_0 (VAR_1, VAR_2);
 VAR_2->complete = VAR_0;
 FUNC_3(&VAR_3->lock, VAR_4);
}
