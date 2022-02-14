
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_request {int context; scalar_t__ actual; scalar_t__ status; } ;
struct usb_ep {struct ffs_ep* driver_data; } ;
struct ffs_ep {scalar_t__ status; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct usb_ep *VAR_0, struct usb_request *VAR_1)
{
 FUNC_0();
 if (FUNC_2(VAR_1->context)) {
  struct ffs_ep *VAR_2 = VAR_0->driver_data;
  VAR_2->status = VAR_1->status ? VAR_1->status : VAR_1->actual;
  FUNC_1(VAR_1->context);
 }
}
