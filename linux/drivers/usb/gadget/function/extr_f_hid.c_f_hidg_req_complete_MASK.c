
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_request {int status; } ;
struct usb_ep {scalar_t__ driver_data; } ;
struct TYPE_4__ {TYPE_1__* config; } ;
struct f_hidg {int write_queue; int write_spinlock; scalar_t__ write_pending; TYPE_2__ func; } ;
struct TYPE_3__ {int cdev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 struct f_hidg *VAR_2 = (struct f_hidg *)VAR_0->driver_data;
 unsigned long VAR_3;

 if (VAR_1->status != 0) {
  FUNC_0(VAR_2->func.config->cdev,
   "End Point Request ERROR: %d\n", VAR_1->status);
 }

 FUNC_1(&VAR_2->write_spinlock, VAR_3);
 VAR_2->write_pending = 0;
 FUNC_2(&VAR_2->write_spinlock, VAR_3);
 FUNC_3(&VAR_2->write_queue);
}
