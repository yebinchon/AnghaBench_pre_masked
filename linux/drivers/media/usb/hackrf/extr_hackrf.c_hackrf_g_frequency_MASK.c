
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_frequency {int tuner; int frequency; int type; } ;
struct usb_interface {int dev; } ;
struct hackrf_dev {int f_tx; int f_rx; int f_dac; int f_adc; int dev; struct usb_interface* intf; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int,...) ;
 struct video_device* FUNC_1 (struct file*) ;
 struct hackrf_dev* FUNC_2 (struct file*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
  struct v4l2_frequency *VAR_6)
{
 struct hackrf_dev *VAR_7 = FUNC_2(VAR_4);
 struct usb_interface *VAR_8 = VAR_7->intf;
 struct video_device *VAR_9 = FUNC_1(VAR_4);
 int VAR_10;

 FUNC_0(&VAR_7->dev, "tuner=%d type=%d\n", VAR_6->tuner, VAR_6->type);

 if (VAR_6->tuner == 0) {
  VAR_6->type = VAR_2;
  if (VAR_9->vfl_dir == VAR_3)
   VAR_6->frequency = VAR_7->f_adc;
  else
   VAR_6->frequency = VAR_7->f_dac;
 } else if (VAR_6->tuner == 1) {
  VAR_6->type = VAR_1;
  if (VAR_9->vfl_dir == VAR_3)
   VAR_6->frequency = VAR_7->f_rx;
  else
   VAR_6->frequency = VAR_7->f_tx;
 } else {
  VAR_10 = -VAR_0;
  goto err;
 }

 return 0;
err:
 FUNC_0(&VAR_8->dev, "failed=%d\n", VAR_10);
 return VAR_10;
}
