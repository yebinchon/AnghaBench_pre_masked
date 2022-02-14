
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int v4l2_std_id ;
typedef scalar_t__ u32 ;
struct dvb_usb_device {TYPE_1__* udev; } ;
struct cxusb_medion_dev {scalar_t__ input; int cx25840; int norm; struct dvb_usb_device* dvbdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct dvb_usb_device*,int ,char*,unsigned int) ;
 int FUNC_2 (int *,char*) ;
 int VAR_3 ;
 int FUNC_3 (int ,int ,int ,int *) ;
 int VAR_4 ;

__attribute__((used)) static u32 FUNC_4(struct cxusb_medion_dev *VAR_5)
{
 struct dvb_usb_device *VAR_6 = VAR_5->dvbdev;
 u32 VAR_7;
 int VAR_8;
 v4l2_std_id VAR_9;


 if (VAR_5->input == 0)
  return VAR_2;

 VAR_7 = FUNC_0(VAR_5->norm);
 if (VAR_7 != VAR_1)
  return VAR_7;

 VAR_8 = FUNC_3(VAR_5->cx25840, VAR_4, VAR_3, &VAR_9);
 if (VAR_8 != 0) {
  FUNC_1(VAR_6, VAR_0,
         "cannot get current standard for input %u\n",
         (unsigned int)VAR_5->input);
 } else {
  VAR_7 = FUNC_0(VAR_9);
  if (VAR_7 != VAR_1)
   return VAR_7;
 }

 FUNC_2(&VAR_6->udev->dev,
   "cannot determine field order for the current standard setup and received signal, using TB\n");
 return VAR_2;
}
