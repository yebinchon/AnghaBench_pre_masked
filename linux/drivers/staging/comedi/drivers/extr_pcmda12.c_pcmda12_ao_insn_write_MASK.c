
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmda12_private {int simultaneous_xfer_mode; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {unsigned int iobase; struct pcmda12_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (unsigned int,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 struct pcmda12_private *VAR_4 = VAR_0->private;
 unsigned int VAR_5 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_6 = VAR_1->readback[VAR_5];
 unsigned long VAR_7 = VAR_0->iobase + (VAR_5 * 2);
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_2->n; ++VAR_8) {
  VAR_6 = VAR_3[VAR_8];
  FUNC_2(VAR_6 & 0xff, VAR_7);
  FUNC_2((VAR_6 >> 8) & 0xff, VAR_7 + 1);





  if (!VAR_4->simultaneous_xfer_mode)
   FUNC_1(VAR_7);
 }
 VAR_1->readback[VAR_5] = VAR_6;

 return VAR_2->n;
}
