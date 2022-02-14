
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ v4l2_std_id ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {scalar_t__ input; int cx25840; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_usb_device*,int ,char*,unsigned int,...) ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,scalar_t__*) ;
 int VAR_4 ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_5, void *VAR_6,
     v4l2_std_id *VAR_7)
{
 struct dvb_usb_device *VAR_8 = FUNC_2(VAR_5);
 struct cxusb_medion_dev *VAR_9 = VAR_8->priv;
 v4l2_std_id VAR_10;
 int VAR_11;





 if (VAR_9->input == 0)
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_1;

 VAR_11 = FUNC_1(VAR_9->cx25840, VAR_4, VAR_3, VAR_7);
 if (VAR_11 != 0) {
  FUNC_0(VAR_8, VAR_0,
         "cannot get detected standard for input %u\n",
         (unsigned int)VAR_9->input);
  return VAR_11;
 }

 FUNC_0(VAR_8, VAR_0, "input %u detected standard is %lx\n",
        (unsigned int)VAR_9->input, (unsigned long)*VAR_7);
 *VAR_7 &= VAR_10;

 return 0;
}
