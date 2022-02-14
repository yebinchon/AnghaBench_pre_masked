
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_tuner {scalar_t__ index; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int cx25840; struct v4l2_tuner const* norm; int tuner; int tda9887; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,struct v4l2_tuner const*,int ,...) ;
 struct v4l2_tuner const* VAR_5 ;
 struct video_device* FUNC_1 (struct file*) ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_6, void *VAR_7,
    const struct v4l2_tuner *VAR_8)
{
 struct dvb_usb_device *VAR_9 = FUNC_2(VAR_6);
 struct cxusb_medion_dev *VAR_10 = VAR_9->priv;
 struct video_device *VAR_11 = FUNC_1(VAR_6);
 int VAR_12;

 if (VAR_8->index != 0)
  return -VAR_0;

 VAR_12 = FUNC_0(VAR_10->tda9887, VAR_8, VAR_4, VAR_8);
 if (VAR_12 != 0)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_10->tuner, VAR_8, VAR_4, VAR_8);
 if (VAR_12 != 0)
  return VAR_12;





 if (VAR_11->vfl_type == VAR_1)
  FUNC_0(VAR_10->cx25840, VAR_5, VAR_3, VAR_10->norm);
 else
  FUNC_0(VAR_10->cx25840, VAR_8, VAR_2);

 return FUNC_0(VAR_10->cx25840, VAR_8, VAR_4, VAR_8);
}
