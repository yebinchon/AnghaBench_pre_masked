
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rti800_private {scalar_t__* dac_2comp; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct rti800_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6,
    unsigned int *VAR_7)
{
 struct rti800_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);
 int VAR_10 = VAR_9 ? VAR_3 : VAR_1;
 int VAR_11 = VAR_9 ? VAR_2 : VAR_0;
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < VAR_6->n; VAR_12++) {
  unsigned int VAR_13 = VAR_7[VAR_12];

  VAR_5->readback[VAR_9] = VAR_13;

  if (VAR_8->dac_2comp[VAR_9])
   VAR_13 = FUNC_1(VAR_5, VAR_13);

  FUNC_2(VAR_13 & 0xff, VAR_4->iobase + VAR_10);
  FUNC_2((VAR_13 >> 8) & 0xff, VAR_4->iobase + VAR_11);
 }

 return VAR_6->n;
}
