
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct usb_device {int dummy; } ;
struct file {int dummy; } ;
struct em28xx_v4l2 {int radio_dev; int vbi_dev; } ;
struct em28xx {size_t model; scalar_t__ int_audio_type; scalar_t__ tuner_type; int intf; struct em28xx_v4l2* v4l2; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_1__* VAR_10 ;
 struct usb_device* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct usb_device*,int ,int) ;
 struct em28xx* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_11, void *VAR_12,
      struct v4l2_capability *VAR_13)
{
 struct em28xx *VAR_14 = FUNC_3(VAR_11);
 struct em28xx_v4l2 *VAR_15 = VAR_14->v4l2;
 struct usb_device *VAR_16 = FUNC_0(VAR_14->intf);

 FUNC_1(VAR_13->driver, "em28xx", sizeof(VAR_13->driver));
 FUNC_1(VAR_13->card, VAR_10[VAR_14->model].name, sizeof(VAR_13->card));
 FUNC_2(VAR_16, VAR_13->bus_info, sizeof(VAR_13->bus_info));

 VAR_13->capabilities = VAR_3 | VAR_5 |
       VAR_9 | VAR_6;
 if (VAR_14->int_audio_type != VAR_0)
  VAR_13->capabilities |= VAR_2;
 if (VAR_14->tuner_type != VAR_1)
  VAR_13->capabilities |= VAR_7;
 if (FUNC_4(&VAR_15->vbi_dev))
  VAR_13->capabilities |= VAR_8;
 if (FUNC_4(&VAR_15->radio_dev))
  VAR_13->capabilities |= VAR_4;
 return 0;
}
