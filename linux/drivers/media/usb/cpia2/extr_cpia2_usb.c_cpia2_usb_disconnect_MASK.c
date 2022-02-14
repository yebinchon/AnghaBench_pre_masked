
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_interface {int dummy; } ;
struct camera_data {int v4l2_dev; int wq_stream; TYPE_1__* curbuff; scalar_t__ buffers; int v4l2_lock; } ;
struct TYPE_2__ {scalar_t__ length; int status; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct camera_data*) ;
 int FUNC_3 (struct camera_data*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct camera_data* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (struct usb_interface*,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct usb_interface *VAR_1)
{
 struct camera_data *VAR_2 = FUNC_6(VAR_1);
 FUNC_7(VAR_1, ((void*)0));

 FUNC_0("Stopping stream\n");
 FUNC_3(VAR_2);

 FUNC_4(&VAR_2->v4l2_lock);
 FUNC_0("Unregistering camera\n");
 FUNC_2(VAR_2);
 FUNC_8(&VAR_2->v4l2_dev);
 FUNC_5(&VAR_2->v4l2_lock);

 if(VAR_2->buffers) {
  FUNC_0("Wakeup waiting processes\n");
  VAR_2->curbuff->status = VAR_0;
  VAR_2->curbuff->length = 0;
  FUNC_10(&VAR_2->wq_stream);
 }

 FUNC_9(&VAR_2->v4l2_dev);

 FUNC_1("CPiA2 camera disconnected.\n");
}
