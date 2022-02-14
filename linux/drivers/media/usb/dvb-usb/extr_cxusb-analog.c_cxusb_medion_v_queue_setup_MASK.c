
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vb2_queue {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct device {int dummy; } ;
struct cxusb_medion_dev {int width; int height; } ;


 int VAR_0 ;
 struct dvb_usb_device* FUNC_0 (struct vb2_queue*) ;

__attribute__((used)) static int FUNC_1(struct vb2_queue *VAR_1,
          unsigned int *VAR_2,
          unsigned int *VAR_3,
          unsigned int VAR_4[],
          struct device *VAR_5[])
{
 struct dvb_usb_device *VAR_6 = FUNC_0(VAR_1);
 struct cxusb_medion_dev *VAR_7 = VAR_6->priv;
 unsigned int VAR_8 = VAR_7->width * VAR_7->height * 2;

 if (*VAR_3 > 0) {
  if (*VAR_3 != 1)
   return -VAR_0;

  if (VAR_4[0] < VAR_8)
   return -VAR_0;
 } else {
  *VAR_3 = 1;
  VAR_4[0] = VAR_8;
 }

 return 0;
}
