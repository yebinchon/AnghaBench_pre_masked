
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int v4l2_release; int v4l2dev; int videodev; int radiodev; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dvb_usb_device *VAR_1)
{
 struct cxusb_medion_dev *VAR_2 = VAR_1->priv;

 FUNC_0(VAR_1, VAR_0, "unregistering analog\n");

 FUNC_2(VAR_2->radiodev);
 FUNC_2(VAR_2->videodev);

 FUNC_1(&VAR_2->v4l2dev);
 FUNC_3(&VAR_2->v4l2_release);

 FUNC_0(VAR_1, VAR_0, "analog unregistered\n");
}
