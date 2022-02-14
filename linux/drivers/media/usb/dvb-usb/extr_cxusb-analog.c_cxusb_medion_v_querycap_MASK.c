
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct v4l2_capability {int capabilities; int bus_info; int card; int driver; } ;
struct file {int dummy; } ;
struct dvb_usb_device {TYPE_3__* udev; } ;
struct TYPE_5__ {TYPE_1__* driver; } ;
struct TYPE_6__ {TYPE_2__ dev; } ;
struct TYPE_4__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 struct dvb_usb_device* FUNC_2 (struct file*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, void *VAR_4,
       struct v4l2_capability *VAR_5)
{
 struct dvb_usb_device *VAR_6 = FUNC_2(VAR_3);

 FUNC_0(VAR_5->driver, VAR_6->udev->dev.driver->name,
  sizeof(VAR_5->driver));
 FUNC_0(VAR_5->card, "Medion 95700", sizeof(VAR_5->card));
 FUNC_1(VAR_6->udev, VAR_5->bus_info, sizeof(VAR_5->bus_info));

 VAR_5->capabilities = VAR_2 | VAR_1 | VAR_0;

 return 0;
}
