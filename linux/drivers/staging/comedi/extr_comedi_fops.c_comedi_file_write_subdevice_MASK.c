
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct comedi_file* private_data; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_file {int write_subdev; } ;


 struct comedi_subdevice* FUNC_0 (int ) ;
 int FUNC_1 (struct file*) ;

__attribute__((used)) static struct comedi_subdevice *FUNC_2(struct file *VAR_0)
{
 struct comedi_file *VAR_1 = VAR_0->private_data;

 FUNC_1(VAR_0);
 return FUNC_0(VAR_1->write_subdev);
}
