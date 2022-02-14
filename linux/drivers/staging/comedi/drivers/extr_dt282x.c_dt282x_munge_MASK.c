
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {scalar_t__ ad_2scomp; } ;
struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_device {int class_dev; struct dt282x_private* private; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static void FUNC_2(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    unsigned short *VAR_2,
    unsigned int VAR_3)
{
 struct dt282x_private *VAR_4 = VAR_0->private;
 unsigned int VAR_5;
 int VAR_6;

 if (VAR_3 % 2)
  FUNC_1(VAR_0->class_dev,
   "bug! odd number of bytes from dma xfer\n");

 for (VAR_6 = 0; VAR_6 < VAR_3 / 2; VAR_6++) {
  VAR_5 = VAR_2[VAR_6];
  VAR_5 &= VAR_1->maxdata;
  if (VAR_4->ad_2scomp)
   VAR_5 = FUNC_0(VAR_1, VAR_5);

  VAR_2[VAR_6] = VAR_5;
 }
}
