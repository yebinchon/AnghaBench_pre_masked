
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct cxusb_medion_dev {scalar_t__ input; int norm; int cx25840; int tuner; int tda9887; struct dvb_usb_device* dvbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,unsigned int,unsigned long) ;
 int FUNC_1 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct cxusb_medion_dev *VAR_6,
     v4l2_std_id VAR_7)
{
 struct dvb_usb_device *VAR_8 = VAR_6->dvbdev;
 int VAR_9;

 FUNC_0(VAR_8, VAR_1,
        "trying to set standard for input %u to %lx\n",
        (unsigned int)VAR_6->input,
        (unsigned long)VAR_7);


 if (VAR_7 == VAR_3)
  return -VAR_0;


 if (VAR_6->input != 0) {
  VAR_9 = FUNC_2(VAR_6->cx25840, VAR_5, VAR_4, VAR_7);
  if (VAR_9)
   return VAR_9;

  goto ret_savenorm;
 }


 if ((VAR_7 & ~VAR_2) != 0)
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_6->tda9887, VAR_5, VAR_4, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1(&VAR_8->udev->dev,
   "tda9887 norm setup failed (%d)\n",
   VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_6->tuner, VAR_5, VAR_4, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1(&VAR_8->udev->dev,
   "tuner norm setup failed (%d)\n",
   VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_2(VAR_6->cx25840, VAR_5, VAR_4, VAR_7);
 if (VAR_9 != 0) {
  FUNC_1(&VAR_8->udev->dev,
   "cx25840 norm setup failed (%d)\n",
   VAR_9);
  return VAR_9;
 }

ret_savenorm:
 VAR_6->norm = VAR_7;

 return 0;
}
