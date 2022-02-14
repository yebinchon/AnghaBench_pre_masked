
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct work_struct {int dummy; } ;
struct most_dev {int* is_channel_healthy; int io_mutex; int iface; TYPE_2__* usb_device; int * ep_address; TYPE_1__* conf; int * busy_urbs; } ;
struct clear_hold_work {unsigned int channel; int pipe; struct most_dev* mdev; } ;
struct TYPE_5__ {int dev; } ;
struct TYPE_4__ {scalar_t__ data_type; scalar_t__ direction; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,unsigned int) ;
 int FUNC_2 (int *,unsigned int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 struct clear_hold_work* FUNC_5 (struct work_struct*) ;
 scalar_t__ FUNC_6 (TYPE_2__*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_9(struct work_struct *VAR_2)
{
 struct clear_hold_work *VAR_3 = FUNC_5(VAR_2);
 struct most_dev *VAR_4 = VAR_3->mdev;
 unsigned int VAR_5 = VAR_3->channel;
 int VAR_6 = VAR_3->pipe;

 FUNC_3(&VAR_4->io_mutex);
 FUNC_2(&VAR_4->iface, VAR_5);
 FUNC_7(&VAR_4->busy_urbs[VAR_5]);
 if (FUNC_6(VAR_4->usb_device, VAR_6))
  FUNC_0(&VAR_4->usb_device->dev, "Failed to reset endpoint.\n");
 if (VAR_4->conf[VAR_5].data_type == VAR_0 &&
     VAR_4->conf[VAR_5].direction == VAR_1) {
  int VAR_7 = 1 - VAR_5;
  int VAR_8 = FUNC_8(VAR_4->usb_device,
            VAR_4->ep_address[VAR_7]);
  FUNC_6(VAR_4->usb_device, VAR_8);
 }
 VAR_4->is_channel_healthy[VAR_5] = 1;
 FUNC_1(&VAR_4->iface, VAR_5);
 FUNC_4(&VAR_4->io_mutex);
}
