
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_yurex {int disconnected; int kref; int waitq; int async_queue; int io_mutex; int cntl_urb; int urb; } ;
struct usb_interface {int minor; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct usb_interface*,int *) ;
 struct usb_yurex* FUNC_6 (struct usb_interface*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct usb_interface*,int *) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_10(struct usb_interface *VAR_4)
{
 struct usb_yurex *VAR_5;
 int VAR_6 = VAR_4->minor;

 VAR_5 = FUNC_6(VAR_4);
 FUNC_8(VAR_4, ((void*)0));


 FUNC_5(VAR_4, &VAR_2);


 FUNC_7(VAR_5->urb);
 FUNC_7(VAR_5->cntl_urb);
 FUNC_3(&VAR_5->io_mutex);
 VAR_5->disconnected = 1;
 FUNC_4(&VAR_5->io_mutex);


 FUNC_1(&VAR_5->async_queue, VAR_1, VAR_0);
 FUNC_9(&VAR_5->waitq);


 FUNC_2(&VAR_5->kref, VAR_3);

 FUNC_0(&VAR_4->dev, "USB YUREX #%d now disconnected\n", VAR_6);
}
