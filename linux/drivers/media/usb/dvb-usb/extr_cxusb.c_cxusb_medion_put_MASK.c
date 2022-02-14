
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {scalar_t__ open_type; int open_ctr; int open_lock; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct dvb_usb_device *VAR_3)
{
 struct cxusb_medion_dev *VAR_4 = VAR_3->priv;

 FUNC_2(&VAR_4->open_lock);

 if (VAR_4->open_type == VAR_1) {
  FUNC_0(VAR_4->open_ctr != 0);
  VAR_4->open_type = VAR_2;
  goto unlock;
 }

 if (!FUNC_0(VAR_4->open_ctr < 1)) {
  VAR_4->open_ctr--;

  FUNC_1("release %s\n",
    VAR_4->open_type == VAR_0 ?
    "analog" : "digital");
 }

unlock:
 FUNC_3(&VAR_4->open_lock);
}
