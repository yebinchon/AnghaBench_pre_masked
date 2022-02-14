
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int open_lock; int open_type; struct dvb_usb_device* dvbdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct dvb_usb_device *VAR_1)
{
 struct cxusb_medion_dev *VAR_2 = VAR_1->priv;

 VAR_2->dvbdev = VAR_1;
 VAR_2->open_type = VAR_0;
 FUNC_0(&VAR_2->open_lock);

 return 0;
}
