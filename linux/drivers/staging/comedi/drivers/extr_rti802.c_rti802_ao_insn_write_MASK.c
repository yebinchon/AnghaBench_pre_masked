
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rti802_private {scalar_t__* dac_coding; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct rti802_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4,
    struct comedi_subdevice *VAR_5,
    struct comedi_insn *VAR_6,
    unsigned int *VAR_7)
{
 struct rti802_private *VAR_8 = VAR_4->private;
 unsigned int VAR_9 = FUNC_0(VAR_6->chanspec);
 int VAR_10;

 FUNC_2(VAR_9, VAR_4->iobase + VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_6->n; VAR_10++) {
  unsigned int VAR_11 = VAR_7[VAR_10];

  VAR_5->readback[VAR_9] = VAR_11;


  if (VAR_8->dac_coding[VAR_9] == VAR_3)
   VAR_11 = FUNC_1(VAR_5, VAR_11);

  FUNC_2(VAR_11 & 0xff, VAR_4->iobase + VAR_1);
  FUNC_2((VAR_11 >> 8) & 0xff, VAR_4->iobase + VAR_0);
 }

 return VAR_6->n;
}
