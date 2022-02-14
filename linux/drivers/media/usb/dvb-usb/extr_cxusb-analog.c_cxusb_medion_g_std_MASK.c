
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int norm; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct dvb_usb_device* FUNC_0 (struct file*) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
         v4l2_std_id *VAR_4)
{
 struct dvb_usb_device *VAR_5 = FUNC_0(VAR_2);
 struct cxusb_medion_dev *VAR_6 = VAR_5->priv;

 *VAR_4 = VAR_6->norm;

 if (*VAR_4 == VAR_1)
  return -VAR_0;

 return 0;
}
