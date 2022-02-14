
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int open_lock; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct dvb_usb_device *VAR_0)
{
 struct cxusb_medion_dev *VAR_1 = VAR_0->priv;

 FUNC_0(&VAR_1->open_lock);
}
