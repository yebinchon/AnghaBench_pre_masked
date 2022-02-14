
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcl812_private {scalar_t__ ai_dma; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_device {int attached; struct pcl812_private* private; struct comedi_subdevice* read_subdev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*) ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_1, void *VAR_2)
{
 struct comedi_device *VAR_3 = VAR_2;
 struct comedi_subdevice *VAR_4 = VAR_3->read_subdev;
 struct pcl812_private *VAR_5 = VAR_3->private;

 if (!VAR_3->attached) {
  FUNC_1(VAR_3);
  return VAR_0;
 }

 if (VAR_5->ai_dma)
  FUNC_2(VAR_3, VAR_4);
 else
  FUNC_3(VAR_3, VAR_4);

 FUNC_1(VAR_3);

 FUNC_0(VAR_3, VAR_4);
 return VAR_0;
}
