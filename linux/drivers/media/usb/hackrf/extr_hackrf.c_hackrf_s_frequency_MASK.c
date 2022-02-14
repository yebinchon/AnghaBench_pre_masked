
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct video_device {scalar_t__ vfl_dir; } ;
struct v4l2_frequency {int tuner; int frequency; int type; } ;
struct usb_interface {int dev; } ;
struct hackrf_dev {unsigned int f_adc; unsigned int f_dac; unsigned int f_rx; unsigned int f_tx; int flags; struct usb_interface* intf; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int rangehigh; int rangelow; } ;
struct TYPE_3__ {int rangehigh; int rangelow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_2__* VAR_6 ;
 TYPE_1__* VAR_7 ;
 unsigned int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int *,char*,int,...) ;
 int FUNC_2 (struct hackrf_dev*) ;
 int FUNC_3 (int ,int *) ;
 struct video_device* FUNC_4 (struct file*) ;
 struct hackrf_dev* FUNC_5 (struct file*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_8, void *VAR_9,
  const struct v4l2_frequency *VAR_10)
{
 struct hackrf_dev *VAR_11 = FUNC_5(VAR_8);
 struct usb_interface *VAR_12 = VAR_11->intf;
 struct video_device *VAR_13 = FUNC_4(VAR_8);
 int VAR_14;
 unsigned int VAR_15;

 FUNC_1(&VAR_12->dev, "tuner=%d type=%d frequency=%u\n",
   VAR_10->tuner, VAR_10->type, VAR_10->frequency);

 if (VAR_10->tuner == 0) {
  VAR_15 = FUNC_0(VAR_10->frequency, VAR_6[0].rangelow,
         VAR_6[0].rangehigh);
  if (VAR_13->vfl_dir == VAR_5) {
   VAR_11->f_adc = VAR_15;
   FUNC_3(VAR_1, &VAR_11->flags);
  } else {
   VAR_11->f_dac = VAR_15;
   FUNC_3(VAR_3, &VAR_11->flags);
  }
 } else if (VAR_10->tuner == 1) {
  VAR_15 = FUNC_0(VAR_10->frequency, VAR_7[0].rangelow,
         VAR_7[0].rangehigh);
  if (VAR_13->vfl_dir == VAR_5) {
   VAR_11->f_rx = VAR_15;
   FUNC_3(VAR_2, &VAR_11->flags);
  } else {
   VAR_11->f_tx = VAR_15;
   FUNC_3(VAR_4, &VAR_11->flags);
  }
 } else {
  VAR_14 = -VAR_0;
  goto err;
 }

 VAR_14 = FUNC_2(VAR_11);
 if (VAR_14)
  goto err;

 return 0;
err:
 FUNC_1(&VAR_12->dev, "failed=%d\n", VAR_14);
 return VAR_14;
}
