
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl726_private {int cmd_running; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {struct pcl726_private* private; } ;



__attribute__((used)) static int FUNC_0(struct comedi_device *VAR_0,
      struct comedi_subdevice *VAR_1)
{
 struct pcl726_private *VAR_2 = VAR_0->private;

 VAR_2->cmd_running = 1;

 return 0;
}
