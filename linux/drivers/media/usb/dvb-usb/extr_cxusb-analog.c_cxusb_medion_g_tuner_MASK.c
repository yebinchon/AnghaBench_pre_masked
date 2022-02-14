
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_type; } ;
struct v4l2_tuner {scalar_t__ index; int reserved; int name; scalar_t__ signal; scalar_t__ afc; scalar_t__ capability; int type; } ;
struct file {int dummy; } ;
struct dvb_usb_device {struct cxusb_medion_dev* priv; } ;
struct cxusb_medion_dev {int cx25840; int tuner; int tda9887; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ,struct v4l2_tuner*,int ,struct v4l2_tuner*) ;
 struct video_device* FUNC_3 (struct file*) ;
 struct dvb_usb_device* FUNC_4 (struct file*) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_5, void *VAR_6,
    struct v4l2_tuner *VAR_7)
{
 struct dvb_usb_device *VAR_8 = FUNC_4(VAR_5);
 struct cxusb_medion_dev *VAR_9 = VAR_8->priv;
 struct video_device *VAR_10 = FUNC_3(VAR_5);
 int VAR_11;

 if (VAR_7->index != 0)
  return -VAR_0;

 if (VAR_10->vfl_type == VAR_3)
  VAR_7->type = VAR_1;
 else
  VAR_7->type = VAR_2;

 VAR_7->capability = 0;
 VAR_7->afc = 0;






 VAR_11 = FUNC_2(VAR_9->tda9887, VAR_7, VAR_4, VAR_7);
 if (VAR_11 != 0)
  return VAR_11;







 VAR_11 = FUNC_2(VAR_9->tuner, VAR_7, VAR_4, VAR_7);
 if (VAR_11 != 0)
  return VAR_11;

 VAR_7->signal = 0;




 VAR_11 = FUNC_2(VAR_9->cx25840, VAR_7, VAR_4, VAR_7);
 if (VAR_11 != 0)
  return VAR_11;

 if (VAR_10->vfl_type == VAR_3)
  FUNC_1(VAR_7->name, "TV tuner", sizeof(VAR_7->name));
 else
  FUNC_1(VAR_7->name, "Radio tuner", sizeof(VAR_7->name));

 FUNC_0(VAR_7->reserved, 0, sizeof(VAR_7->reserved));

 return 0;
}
