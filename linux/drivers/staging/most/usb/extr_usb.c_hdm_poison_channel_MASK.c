
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct most_interface {int num_channels; } ;
struct most_dev {int* is_channel_healthy; int* padding_active; int io_mutex; int poll_work_obj; int link_stat_timer; TYPE_3__* conf; int * busy_urbs; TYPE_2__* clear_work; int * channel_lock; TYPE_1__* usb_device; } ;
typedef int spinlock_t ;
struct TYPE_6__ {scalar_t__ data_type; } ;
struct TYPE_5__ {int ws; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct most_dev* FUNC_7 (struct most_interface*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct most_interface *VAR_3, int VAR_4)
{
 struct most_dev *VAR_5 = FUNC_7(VAR_3);
 unsigned long VAR_6;
 spinlock_t *VAR_7;

 if (FUNC_8(!VAR_3)) {
  FUNC_2(&VAR_5->usb_device->dev, "Poison: Bad interface.\n");
  return -VAR_1;
 }
 if (FUNC_8(VAR_4 < 0 || VAR_4 >= VAR_3->num_channels)) {
  FUNC_2(&VAR_5->usb_device->dev, "Channel ID out of range.\n");
  return -VAR_0;
 }

 VAR_7 = VAR_5->channel_lock + VAR_4;
 FUNC_5(VAR_7, VAR_6);
 VAR_5->is_channel_healthy[VAR_4] = 0;
 FUNC_6(VAR_7, VAR_6);

 FUNC_0(&VAR_5->clear_work[VAR_4].ws);

 FUNC_3(&VAR_5->io_mutex);
 FUNC_9(&VAR_5->busy_urbs[VAR_4]);
 if (VAR_5->padding_active[VAR_4])
  VAR_5->padding_active[VAR_4] = 0;

 if (VAR_5->conf[VAR_4].data_type == VAR_2) {
  FUNC_1(&VAR_5->link_stat_timer);
  FUNC_0(&VAR_5->poll_work_obj);
 }
 FUNC_4(&VAR_5->io_mutex);
 return 0;
}
