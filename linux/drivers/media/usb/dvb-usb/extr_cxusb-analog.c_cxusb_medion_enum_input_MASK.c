
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u32 ;
struct v4l2_input {size_t index; size_t status; int capabilities; } ;
struct file {int dummy; } ;
struct dvb_usb_device {TYPE_1__* udev; struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {size_t input; int cx25840; } ;
struct TYPE_4__ {struct v4l2_input input; } ;
struct TYPE_3__ {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* VAR_3 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,size_t*) ;
 int VAR_5 ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
       struct v4l2_input *VAR_8)
{
 struct dvb_usb_device *VAR_9 = FUNC_2(VAR_6);
 struct cxusb_medion_dev *VAR_10 = VAR_9->priv;
 u32 VAR_11 = VAR_8->index;

 if (VAR_11 >= VAR_0)
  return -VAR_1;

 *VAR_8 = VAR_3[VAR_11].input;
 VAR_8->index = VAR_11;
 VAR_8->capabilities |= VAR_2;

 if (VAR_11 == VAR_10->input) {
  int VAR_12;
  u32 VAR_13 = 0;

  VAR_12 = FUNC_1(VAR_10->cx25840, VAR_5, VAR_4,
           &VAR_13);
  if (VAR_12 != 0)
   FUNC_0(&VAR_9->udev->dev,
     "cx25840 input status query failed (%d)\n",
     VAR_12);
  else
   VAR_8->status = VAR_13;
 }

 return 0;
}
