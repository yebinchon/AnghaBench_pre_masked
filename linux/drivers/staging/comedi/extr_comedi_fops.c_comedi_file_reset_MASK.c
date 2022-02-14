
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {int subdev_flags; } ;
struct comedi_file {int write_subdev; int read_subdev; int last_detach_count; int last_attached; struct comedi_device* dev; } ;
struct comedi_device {int detach_count; int attached; struct comedi_subdevice* write_subdev; struct comedi_subdevice* read_subdev; } ;


 unsigned int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct comedi_subdevice*) ;
 struct comedi_subdevice* FUNC_1 (struct comedi_device*,unsigned int) ;
 int FUNC_2 (struct file*) ;
 unsigned int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct file *VAR_3)
{
 struct comedi_file *VAR_4 = VAR_3->private_data;
 struct comedi_device *VAR_5 = VAR_4->dev;
 struct comedi_subdevice *VAR_6, *VAR_7, *VAR_8;
 unsigned int VAR_9 = FUNC_3(FUNC_2(VAR_3));

 VAR_7 = VAR_5->read_subdev;
 VAR_8 = VAR_5->write_subdev;
 if (VAR_9 >= VAR_0) {
  VAR_6 = FUNC_1(VAR_5, VAR_9);
  if (!VAR_6 || VAR_6->subdev_flags & VAR_1)
   VAR_7 = VAR_6;
  if (!VAR_6 || VAR_6->subdev_flags & VAR_2)
   VAR_8 = VAR_6;
 }
 VAR_4->last_attached = VAR_5->attached;
 VAR_4->last_detach_count = VAR_5->detach_count;
 FUNC_0(VAR_4->read_subdev, VAR_7);
 FUNC_0(VAR_4->write_subdev, VAR_8);
}
