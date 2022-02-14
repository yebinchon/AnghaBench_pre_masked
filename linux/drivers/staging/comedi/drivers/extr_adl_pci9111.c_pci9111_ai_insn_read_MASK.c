
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_2 (unsigned int) ;
 unsigned int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 unsigned int FUNC_4 (scalar_t__) ;
 unsigned int FUNC_5 (scalar_t__) ;
 int FUNC_6 (unsigned int,scalar_t__) ;
 int VAR_5 ;
 int FUNC_7 (struct comedi_device*) ;

__attribute__((used)) static int FUNC_8(struct comedi_device *VAR_6,
    struct comedi_subdevice *VAR_7,
    struct comedi_insn *VAR_8, unsigned int *VAR_9)
{
 unsigned int VAR_10 = FUNC_0(VAR_8->chanspec);
 unsigned int VAR_11 = FUNC_1(VAR_8->chanspec);
 unsigned int VAR_12 = VAR_7->maxdata;
 unsigned int VAR_13 = (VAR_12 + 1) >> 1;
 unsigned int VAR_14 = (VAR_12 == 0xffff) ? 0 : 4;
 unsigned int VAR_15;
 int VAR_16;
 int VAR_17;

 FUNC_6(VAR_10, VAR_6->iobase + VAR_0);

 VAR_15 = FUNC_4(VAR_6->iobase + VAR_3);
 if ((VAR_15 & VAR_2) != VAR_11) {
  FUNC_6(FUNC_2(VAR_11),
       VAR_6->iobase + VAR_3);
 }

 FUNC_7(VAR_6);

 for (VAR_17 = 0; VAR_17 < VAR_8->n; VAR_17++) {

  FUNC_6(0, VAR_6->iobase + VAR_4);

  VAR_16 = FUNC_3(VAR_6, VAR_7, VAR_8, VAR_5, 0);
  if (VAR_16) {
   FUNC_7(VAR_6);
   return VAR_16;
  }

  VAR_9[VAR_17] = FUNC_5(VAR_6->iobase + VAR_1);
  VAR_9[VAR_17] = ((VAR_9[VAR_17] >> VAR_14) & VAR_12) ^ VAR_13;
 }

 return VAR_17;
}
