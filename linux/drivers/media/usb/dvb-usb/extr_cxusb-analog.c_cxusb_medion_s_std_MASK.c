
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int dummy; } ;


 int FUNC_0 (struct cxusb_medion_dev*,int ) ;
 struct dvb_usb_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, void *VAR_1,
         v4l2_std_id VAR_2)
{
 struct dvb_usb_device *VAR_3 = FUNC_1(VAR_0);
 struct cxusb_medion_dev *VAR_4 = VAR_3->priv;

 return FUNC_0(VAR_4, VAR_2);
}
