
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_frequency {scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int tuner; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,struct v4l2_frequency*) ;
 struct dvb_usb_device* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
        struct v4l2_frequency *VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_1(VAR_3);
 struct cxusb_medion_dev *VAR_7 = VAR_6->priv;

 if (VAR_5->tuner != 0)
  return -VAR_0;

 return FUNC_0(VAR_7->tuner, VAR_2, VAR_1, VAR_5);
}
