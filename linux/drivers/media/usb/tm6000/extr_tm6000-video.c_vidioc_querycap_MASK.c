
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct tm6000_fh {struct tm6000_core* dev; } ;
struct TYPE_2__ {scalar_t__ has_radio; } ;
struct tm6000_core {scalar_t__ tuner_type; TYPE_1__ caps; int udev; } ;
struct file {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_6, void *VAR_7,
     struct v4l2_capability *VAR_8)
{
 struct tm6000_core *VAR_9 = ((struct tm6000_fh *)VAR_7)->dev;

 FUNC_0(VAR_8->driver, "tm6000", sizeof(VAR_8->driver));
 FUNC_0(VAR_8->card, "Trident TVMaster TM5600/6000/6010",
  sizeof(VAR_8->card));
 FUNC_1(VAR_9->udev, VAR_8->bus_info, sizeof(VAR_8->bus_info));
 VAR_8->capabilities = VAR_5 | VAR_3 |
       VAR_1;
 if (VAR_9->tuner_type != VAR_0)
  VAR_8->capabilities |= VAR_4;
 if (VAR_9->caps.has_radio)
  VAR_8->capabilities |= VAR_2;

 return 0;
}
