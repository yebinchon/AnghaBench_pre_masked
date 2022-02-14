
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct comedi_file* private_data; } ;
struct comedi_file {struct comedi_device* dev; } ;
struct comedi_device {int async_queue; } ;


 int FUNC_0 (int,struct file*,int,int *) ;

__attribute__((used)) static int FUNC_1(int VAR_0, struct file *VAR_1, int VAR_2)
{
 struct comedi_file *VAR_3 = VAR_1->private_data;
 struct comedi_device *VAR_4 = VAR_3->dev;

 return FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_4->async_queue);
}
