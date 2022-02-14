
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int v4l2dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 struct dvb_usb_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, void *VAR_3)
{
 struct dvb_usb_device *VAR_4 = FUNC_1(VAR_2);
 struct cxusb_medion_dev *VAR_5 = VAR_4->priv;

 FUNC_0(&VAR_5->v4l2dev, 0, VAR_0, VAR_1);

 return 0;
}
