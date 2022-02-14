
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (struct comedi_device*,struct comedi_subdevice*,struct comedi_insn*,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct comedi_device*,unsigned int,unsigned int,unsigned int) ;
 unsigned int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6->chanspec);
 unsigned int VAR_9 = FUNC_1(VAR_6->chanspec);
 unsigned int VAR_10;
 int VAR_11;
 int VAR_12;


 FUNC_3(VAR_4, VAR_8, VAR_8, VAR_9);

 for (VAR_12 = 0; VAR_12 < VAR_6->n; VAR_12++) {

  FUNC_5(0, VAR_4->iobase + VAR_2);

  VAR_11 = FUNC_2(VAR_4, VAR_5, VAR_6, VAR_3, 0);
  if (VAR_11)
   return VAR_11;

  VAR_10 = FUNC_4(VAR_4->iobase + VAR_1) << 8;
  VAR_10 |= FUNC_4(VAR_4->iobase + VAR_0);
  if (VAR_5->maxdata == 0x0fff)
   VAR_10 >>= 4;
  VAR_10 &= VAR_5->maxdata;

  VAR_7[VAR_12] = VAR_10;
 }

 return VAR_6->n;
}
