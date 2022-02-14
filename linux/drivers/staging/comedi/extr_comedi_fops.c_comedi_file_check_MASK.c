
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct comedi_file* private_data; } ;
struct comedi_file {scalar_t__ last_attached; scalar_t__ last_detach_count; struct comedi_device* dev; } ;
struct comedi_device {scalar_t__ attached; scalar_t__ detach_count; } ;


 int FUNC_0 (struct file*) ;

__attribute__((used)) static void FUNC_1(struct file *VAR_0)
{
 struct comedi_file *VAR_1 = VAR_0->private_data;
 struct comedi_device *VAR_2 = VAR_1->dev;

 if (VAR_1->last_attached != VAR_2->attached ||
     VAR_1->last_detach_count != VAR_2->detach_count)
  FUNC_0(VAR_0);
}
