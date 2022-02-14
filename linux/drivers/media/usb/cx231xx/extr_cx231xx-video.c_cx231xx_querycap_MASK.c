
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {size_t model; scalar_t__ tuner_type; int radio_dev; int udev; } ;
struct TYPE_2__ {char* name; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;

int FUNC_3(struct file *VAR_9, void *VAR_10,
      struct v4l2_capability *VAR_11)
{
 struct cx231xx_fh *VAR_12 = VAR_10;
 struct cx231xx *VAR_13 = VAR_12->dev;

 FUNC_0(VAR_11->driver, "cx231xx", sizeof(VAR_11->driver));
 FUNC_0(VAR_11->card, VAR_8[VAR_13->model].name, sizeof(VAR_11->card));
 FUNC_1(VAR_13->udev, VAR_11->bus_info, sizeof(VAR_11->bus_info));
 VAR_11->capabilities = VAR_3 |
  VAR_6 | VAR_7 |
  VAR_4 | VAR_1;
 if (FUNC_2(&VAR_13->radio_dev))
  VAR_11->capabilities |= VAR_2;
 if (VAR_13->tuner_type != VAR_0)
  VAR_11->capabilities |= VAR_5;

 return 0;
}
