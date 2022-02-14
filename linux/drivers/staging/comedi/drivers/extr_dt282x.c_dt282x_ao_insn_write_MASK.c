
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dt282x_private {int dacsr; unsigned int supcsr; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct dt282x_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (unsigned int) ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_3 (struct comedi_subdevice*,unsigned int) ;
 scalar_t__ FUNC_4 (struct comedi_subdevice*,unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7,
    unsigned int *VAR_8)
{
 struct dt282x_private *VAR_9 = VAR_5->private;
 unsigned int VAR_10 = FUNC_0(VAR_7->chanspec);
 unsigned int VAR_11 = FUNC_1(VAR_7->chanspec);
 int VAR_12;

 VAR_9->dacsr |= VAR_1 | FUNC_2(VAR_10);

 for (VAR_12 = 0; VAR_12 < VAR_7->n; VAR_12++) {
  unsigned int VAR_13 = VAR_8[VAR_12];

  VAR_6->readback[VAR_10] = VAR_13;

  if (FUNC_4(VAR_6, VAR_11))
   VAR_13 = FUNC_3(VAR_6, VAR_13);

  FUNC_5(VAR_9->dacsr, VAR_5->iobase + VAR_0);

  FUNC_5(VAR_13, VAR_5->iobase + VAR_2);

  FUNC_5(VAR_9->supcsr | VAR_3,
       VAR_5->iobase + VAR_4);
 }

 return VAR_7->n;
}
