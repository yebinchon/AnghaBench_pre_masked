
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_interface {int dummy; } ;
struct cx231xx {scalar_t__ users; int lock; int wait_stream; int wait_frame; scalar_t__ USE_ISO; int vdev; int dev; int open; int state; int udev; } ;


 int VAR_0 ;
 int FUNC_0 (struct cx231xx*) ;
 int FUNC_1 (struct cx231xx*) ;
 int FUNC_2 (struct cx231xx*) ;
 int FUNC_3 (struct cx231xx*) ;
 int FUNC_4 (struct cx231xx*) ;
 int FUNC_5 (int ,char*,int ) ;
 int FUNC_6 (struct cx231xx*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct cx231xx* FUNC_9 (struct usb_interface*) ;
 int FUNC_10 (struct usb_interface*,int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static void FUNC_14(struct usb_interface *VAR_1)
{
 struct cx231xx *VAR_2;

 VAR_2 = FUNC_9(VAR_1);
 FUNC_10(VAR_1, ((void*)0));

 if (!VAR_2)
  return;

 if (!VAR_2->udev)
  return;

 VAR_2->state |= VAR_0;

 FUNC_6(VAR_2);



 FUNC_7(&VAR_2->lock);

 FUNC_13(&VAR_2->open);

 if (VAR_2->users) {
  FUNC_5(VAR_2->dev,
    "device %s is open! Deregistration and memory deallocation are deferred on close.\n",
    FUNC_11(&VAR_2->vdev));


  FUNC_1(VAR_2);

  if (VAR_2->USE_ISO)
   FUNC_4(VAR_2);
  else
   FUNC_3(VAR_2);
  FUNC_12(&VAR_2->wait_frame);
  FUNC_12(&VAR_2->wait_stream);
 } else {
 }

 FUNC_0(VAR_2);

 FUNC_8(&VAR_2->lock);

 if (!VAR_2->users)
  FUNC_2(VAR_2);
}
