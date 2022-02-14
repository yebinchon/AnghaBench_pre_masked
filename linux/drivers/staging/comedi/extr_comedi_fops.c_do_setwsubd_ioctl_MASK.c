
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {int subdev_flags; TYPE_2__* async; struct file* busy; } ;
struct comedi_file {int write_subdev; } ;
struct comedi_device {unsigned long n_subdevices; struct comedi_subdevice* subdevices; int mutex; } ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ cmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct comedi_subdevice*) ;
 struct comedi_subdevice* FUNC_1 (struct file*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, unsigned long VAR_5,
        struct file *VAR_6)
{
 struct comedi_file *VAR_7 = VAR_6->private_data;
 struct comedi_subdevice *VAR_8, *VAR_9;

 FUNC_2(&VAR_4->mutex);
 if (VAR_5 >= VAR_4->n_subdevices)
  return -VAR_2;

 VAR_9 = &VAR_4->subdevices[VAR_5];
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8 == VAR_9)
  return 0;

 if (!(VAR_9->subdev_flags & VAR_3))
  return -VAR_2;





 if (VAR_8 && VAR_8->busy == VAR_6 && VAR_8->async &&
     (VAR_8->async->cmd.flags & VAR_0))
  return -VAR_1;

 FUNC_0(VAR_7->write_subdev, VAR_9);
 return 0;
}
