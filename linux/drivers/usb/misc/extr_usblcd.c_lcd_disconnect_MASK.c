
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_lcd {int disconnected; int kref; int submitted; int io_rwsem; } ;
struct usb_interface {int minor; int dev; } ;


 int FUNC_0 (int *,char*,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct usb_interface*,int *) ;
 struct usb_lcd* FUNC_5 (struct usb_interface*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct usb_interface *VAR_2)
{
 struct usb_lcd *VAR_3 = FUNC_5(VAR_2);
 int VAR_4 = VAR_2->minor;


 FUNC_4(VAR_2, &VAR_0);

 FUNC_1(&VAR_3->io_rwsem);
 VAR_3->disconnected = 1;
 FUNC_3(&VAR_3->io_rwsem);

 FUNC_6(&VAR_3->submitted);


 FUNC_2(&VAR_3->kref, VAR_1);

 FUNC_0(&VAR_2->dev, "USB LCD #%d now disconnected\n", VAR_4);
}
