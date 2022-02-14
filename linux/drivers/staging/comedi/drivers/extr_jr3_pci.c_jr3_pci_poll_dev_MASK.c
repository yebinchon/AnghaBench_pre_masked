
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timer_list {int dummy; } ;
struct jr3_pci_subdev_private {void* next_time_min; } ;
struct jr3_pci_poll_delay {int min; int max; } ;
struct TYPE_2__ {void* expires; } ;
struct jr3_pci_dev_private {TYPE_1__ timer; struct comedi_device* dev; } ;
struct comedi_subdevice {struct jr3_pci_subdev_private* private; } ;
struct comedi_device {int n_subdevices; int spinlock; struct comedi_subdevice* subdevices; } ;


 int FUNC_0 (TYPE_1__*) ;
 struct jr3_pci_dev_private* VAR_0 ;
 struct jr3_pci_dev_private* FUNC_1 (int ,struct timer_list*,int ) ;
 unsigned long VAR_1 ;
 struct jr3_pci_poll_delay FUNC_2 (struct comedi_subdevice*) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (unsigned long,void*) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_7(struct timer_list *VAR_3)
{
 struct jr3_pci_dev_private *VAR_4 = FUNC_1(VAR_4, VAR_3, VAR_2);
 struct comedi_device *VAR_5 = VAR_4->dev;
 struct jr3_pci_subdev_private *VAR_6;
 struct comedi_subdevice *VAR_7;
 unsigned long VAR_8;
 unsigned long VAR_9;
 int VAR_10;
 int VAR_11;

 FUNC_4(&VAR_5->spinlock, VAR_8);
 VAR_10 = 1000;
 VAR_9 = VAR_1;


 for (VAR_11 = 0; VAR_11 < VAR_5->n_subdevices; VAR_11++) {
  VAR_7 = &VAR_5->subdevices[VAR_11];
  VAR_6 = VAR_7->private;

  if (FUNC_6(VAR_9, VAR_6->next_time_min)) {
   struct jr3_pci_poll_delay VAR_12;

   VAR_12 = FUNC_2(VAR_7);

   VAR_6->next_time_min = VAR_1 +
            FUNC_3(VAR_12.min);

   if (VAR_12.max && VAR_12.max < VAR_10)




    VAR_10 = VAR_12.max;
  }
 }
 FUNC_5(&VAR_5->spinlock, VAR_8);

 VAR_4->timer.expires = VAR_1 + FUNC_3(VAR_10);
 FUNC_0(&VAR_4->timer);
}
