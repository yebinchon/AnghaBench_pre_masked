
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct usb_interface {int dev; } ;
struct TYPE_2__ {int name; } ;
struct hackrf_dev {int udev; TYPE_1__ rx_vdev; struct usb_interface* intf; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 struct hackrf_dev* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_8, void *VAR_9,
  struct v4l2_capability *VAR_10)
{
 struct hackrf_dev *VAR_11 = FUNC_3(VAR_8);
 struct usb_interface *VAR_12 = VAR_11->intf;

 FUNC_0(&VAR_12->dev, "\n");

 VAR_10->capabilities = VAR_4 | VAR_7 |
       VAR_5 | VAR_2 |
       VAR_6 | VAR_3 |
       VAR_1;
 FUNC_1(VAR_10->driver, VAR_0, sizeof(VAR_10->driver));
 FUNC_1(VAR_10->card, VAR_11->rx_vdev.name, sizeof(VAR_10->card));
 FUNC_2(VAR_11->udev, VAR_10->bus_info, sizeof(VAR_10->bus_info));

 return 0;
}
