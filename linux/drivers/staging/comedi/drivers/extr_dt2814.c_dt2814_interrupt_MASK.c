
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dt2814_private {int ntrig; } ;
struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {scalar_t__ iobase; int class_dev; int attached; struct comedi_subdevice* read_subdev; struct dt2814_private* private; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*,struct comedi_subdevice*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_6, void *VAR_7)
{
 int VAR_8, VAR_9;
 struct comedi_device *VAR_10 = VAR_7;
 struct dt2814_private *VAR_11 = VAR_10->private;
 struct comedi_subdevice *VAR_12 = VAR_10->read_subdev;
 int VAR_13;

 if (!VAR_10->attached) {
  FUNC_1(VAR_10->class_dev, "spurious interrupt\n");
  return VAR_5;
 }

 VAR_9 = FUNC_2(VAR_10->iobase + VAR_2);
 VAR_8 = FUNC_2(VAR_10->iobase + VAR_2);

 VAR_13 = (VAR_9 << 4) | (VAR_8 >> 4);

 if (!(--VAR_11->ntrig)) {
  int VAR_14;

  FUNC_3(0, VAR_10->iobase + VAR_1);





  for (VAR_14 = 0; VAR_14 < VAR_4; VAR_14++) {
   if (FUNC_2(VAR_10->iobase + VAR_1) & VAR_3)
    break;
  }
  FUNC_2(VAR_10->iobase + VAR_2);
  FUNC_2(VAR_10->iobase + VAR_2);

  VAR_12->async->events |= VAR_0;
 }
 FUNC_0(VAR_10, VAR_12);
 return VAR_5;
}
