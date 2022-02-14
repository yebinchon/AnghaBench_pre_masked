
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct atmio16d_private* private; } ;
struct atmio16d_private {scalar_t__ dac0_coding; scalar_t__ dac1_coding; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 struct atmio16d_private *VAR_7 = VAR_3->private;
 unsigned int VAR_8 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_9 = (VAR_8) ? VAR_1 : VAR_0;
 bool VAR_10 = 0;
 int VAR_11;

 if (VAR_8 == 0 && VAR_7->dac0_coding == VAR_2)
  VAR_10 = 1;
 if (VAR_8 == 1 && VAR_7->dac1_coding == VAR_2)
  VAR_10 = 1;

 for (VAR_11 = 0; VAR_11 < VAR_5->n; VAR_11++) {
  unsigned int VAR_12 = VAR_6[VAR_11];

  VAR_4->readback[VAR_8] = VAR_12;

  if (VAR_10)
   VAR_12 ^= 0x800;

  FUNC_1(VAR_12, VAR_3->iobase + VAR_9);
 }

 return VAR_5->n;
}
