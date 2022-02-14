
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {TYPE_1__* async; } ;
struct comedi_device {int class_dev; scalar_t__ iobase; } ;
struct TYPE_2__ {int events; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 unsigned int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,unsigned int*) ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_4(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3)
{
 unsigned int VAR_4;
 unsigned int VAR_5;
 unsigned int VAR_6;
 int VAR_7, VAR_8;

 VAR_4 = FUNC_1(VAR_2->iobase + VAR_1);

 if (VAR_4 & 4) {
  FUNC_0(VAR_2->class_dev, "A/D mode1/3 FIFO overflow!\n");
  VAR_3->async->events |= VAR_0;
  return;
 }

 if (VAR_4 & 1) {
  FUNC_0(VAR_2->class_dev,
   "A/D mode1/3 FIFO interrupt without data!\n");
  VAR_3->async->events |= VAR_0;
  return;
 }

 if (VAR_4 & 2)
  VAR_8 = 512;
 else
  VAR_8 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  VAR_6 = FUNC_2(VAR_2, VAR_3, &VAR_5);
  if (!FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6))
   break;
 }
}
