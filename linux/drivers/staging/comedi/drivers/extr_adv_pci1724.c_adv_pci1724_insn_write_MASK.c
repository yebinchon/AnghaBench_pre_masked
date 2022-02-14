
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int* readback; scalar_t__ private; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned long FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned long FUNC_3 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_3,
      struct comedi_subdevice *VAR_4,
      struct comedi_insn *VAR_5,
      unsigned int *VAR_6)
{
 unsigned long VAR_7 = (unsigned long)VAR_4->private;
 unsigned int VAR_8 = FUNC_0(VAR_5->chanspec);
 unsigned int VAR_9;
 int VAR_10;
 int VAR_11;

 VAR_9 = FUNC_3(VAR_8) | FUNC_1(VAR_8) | VAR_7;


 FUNC_5(0, VAR_3->iobase + VAR_1);

 for (VAR_11 = 0; VAR_11 < VAR_5->n; ++VAR_11) {
  unsigned int VAR_12 = VAR_6[VAR_11];

  VAR_10 = FUNC_4(VAR_3, VAR_4, VAR_5, VAR_2, 0);
  if (VAR_10)
   return VAR_10;

  FUNC_5(VAR_9 | FUNC_2(VAR_12),
       VAR_3->iobase + VAR_0);

  VAR_4->readback[VAR_8] = VAR_12;
 }

 return VAR_5->n;
}
