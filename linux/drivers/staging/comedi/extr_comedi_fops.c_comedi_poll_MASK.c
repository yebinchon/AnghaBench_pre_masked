
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {TYPE_2__* async; struct file* busy; } ;
struct comedi_file {struct comedi_device* dev; } ;
struct comedi_device {int attach_lock; int class_dev; int attached; } ;
typedef int poll_table ;
typedef int __poll_t ;
struct TYPE_3__ {int flags; } ;
struct TYPE_4__ {TYPE_1__ cmd; int wait_head; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*) ;
 unsigned int FUNC_1 (struct comedi_subdevice*) ;
 unsigned int FUNC_2 (struct comedi_subdevice*) ;
 struct comedi_subdevice* FUNC_3 (struct file*) ;
 struct comedi_subdevice* FUNC_4 (struct file*) ;
 int FUNC_5 (struct comedi_subdevice*) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct file*,int *,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static __poll_t FUNC_10(struct file *VAR_5, poll_table *VAR_6)
{
 __poll_t VAR_7 = 0;
 struct comedi_file *VAR_8 = VAR_5->private_data;
 struct comedi_device *VAR_9 = VAR_8->dev;
 struct comedi_subdevice *VAR_10, *VAR_11;

 FUNC_7(&VAR_9->attach_lock);

 if (!VAR_9->attached) {
  FUNC_6(VAR_9->class_dev, "no driver attached\n");
  goto done;
 }

 VAR_10 = FUNC_3(VAR_5);
 VAR_11 = VAR_10;
 if (VAR_10 && VAR_10->async) {
  FUNC_8(VAR_5, &VAR_10->async->wait_head, VAR_6);
  if (VAR_10->busy != VAR_5 || !FUNC_5(VAR_10) ||
      (VAR_10->async->cmd.flags & VAR_0) ||
      FUNC_0(VAR_10) > 0)
   VAR_7 |= VAR_1 | VAR_3;
 }

 VAR_10 = FUNC_4(VAR_5);
 if (VAR_10 && VAR_10->async) {
  unsigned int VAR_12 = FUNC_2(VAR_10);

  if (VAR_10 != VAR_11)
   FUNC_8(VAR_5, &VAR_10->async->wait_head, VAR_6);
  if (VAR_10->busy != VAR_5 || !FUNC_5(VAR_10) ||
      !(VAR_10->async->cmd.flags & VAR_0) ||
      FUNC_1(VAR_10) >= VAR_12)
   VAR_7 |= VAR_2 | VAR_4;
 }

done:
 FUNC_9(&VAR_9->attach_lock);
 return VAR_7;
}
