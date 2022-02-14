
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das16cs_private {unsigned short misc1; } ;
struct comedi_subdevice {unsigned int* readback; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; struct das16cs_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 unsigned short VAR_3 ;
 unsigned short VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (unsigned short,scalar_t__) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6,
     struct comedi_subdevice *VAR_7,
     struct comedi_insn *VAR_8,
     unsigned int *VAR_9)
{
 struct das16cs_private *VAR_10 = VAR_6->private;
 unsigned int VAR_11 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_12 = VAR_7->readback[VAR_11];
 unsigned short VAR_13;
 int VAR_14;
 int VAR_15;

 for (VAR_15 = 0; VAR_15 < VAR_8->n; VAR_15++) {
  VAR_12 = VAR_9[VAR_15];

  FUNC_1(VAR_10->misc1, VAR_6->iobase + VAR_5);
  FUNC_2(1);


  VAR_13 = VAR_10->misc1 & ~VAR_4;
  if (VAR_11)
   VAR_13 |= VAR_0;
  else
   VAR_13 |= VAR_1;

  FUNC_1(VAR_13, VAR_6->iobase + VAR_5);
  FUNC_2(1);

  for (VAR_14 = 15; VAR_14 >= 0; VAR_14--) {
   if ((VAR_12 >> VAR_14) & 0x1)
    VAR_13 |= VAR_3;
   else
    VAR_13 &= ~VAR_3;
   FUNC_1(VAR_13, VAR_6->iobase + VAR_5);
   FUNC_2(1);
   FUNC_1(VAR_13 | VAR_2,
        VAR_6->iobase + VAR_5);
   FUNC_2(1);
  }




  FUNC_1(VAR_13 | VAR_0 | VAR_1,
       VAR_6->iobase + VAR_5);
 }
 VAR_7->readback[VAR_11] = VAR_12;

 return VAR_8->n;
}
