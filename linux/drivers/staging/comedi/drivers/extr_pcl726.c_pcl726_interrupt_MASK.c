
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl726_private {scalar_t__ cmd_running; } ;
struct comedi_subdevice {int state; } ;
struct comedi_device {struct pcl726_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_subdevice*,int *,int) ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_3(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 struct comedi_subdevice *VAR_4 = VAR_3->read_subdev;
 struct pcl726_private *VAR_5 = VAR_3->private;

 if (VAR_5->cmd_running) {
  FUNC_2(VAR_3, VAR_4);

  FUNC_0(VAR_4, &VAR_4->state, 1);
  FUNC_1(VAR_3, VAR_4);
 }

 return VAR_0;
}
