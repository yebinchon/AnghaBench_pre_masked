
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_2 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5, unsigned int *VAR_6)
{
 int VAR_7, VAR_8, VAR_9;
 int VAR_10;
 int VAR_11;

 for (VAR_7 = 0; VAR_7 < VAR_5->n; VAR_7++) {
  VAR_10 = FUNC_0(VAR_5->chanspec);

  FUNC_3(VAR_10, VAR_3->iobase + VAR_0);

  VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_5, VAR_2, 0);
  if (VAR_11)
   return VAR_11;

  VAR_8 = FUNC_2(VAR_3->iobase + VAR_1);
  VAR_9 = FUNC_2(VAR_3->iobase + VAR_1);

  VAR_6[VAR_7] = (VAR_8 << 4) | (VAR_9 >> 4);
 }

 return VAR_7;
}
