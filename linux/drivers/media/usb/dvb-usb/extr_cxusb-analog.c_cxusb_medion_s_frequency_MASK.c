
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_frequency {scalar_t__ tuner; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int cx25840; struct v4l2_frequency const* norm; int tuner; int tda9887; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,...) ;
 int VAR_6 ;
 struct video_device* FUNC_1 (struct file*) ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_7, void *VAR_8,
        const struct v4l2_frequency *VAR_9)
{
 struct dvb_usb_device *VAR_10 = FUNC_2(VAR_7);
 struct cxusb_medion_dev *VAR_11 = VAR_10->priv;
 struct video_device *VAR_12 = FUNC_1(VAR_7);
 int VAR_13;

 if (VAR_9->tuner != 0)
  return -VAR_0;

 VAR_13 = FUNC_0(VAR_11->tda9887, VAR_5, VAR_2, VAR_9);
 if (VAR_13 != 0)
  return VAR_13;

 VAR_13 = FUNC_0(VAR_11->tuner, VAR_5, VAR_2, VAR_9);
 if (VAR_13 != 0)
  return VAR_13;





 if (VAR_12->vfl_type == VAR_1)
  FUNC_0(VAR_11->cx25840, VAR_6, VAR_4, VAR_11->norm);
 else
  FUNC_0(VAR_11->cx25840, VAR_5, VAR_3);

 return FUNC_0(VAR_11->cx25840, VAR_5, VAR_2, VAR_9);
}
