
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int maxdata; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_4,
         struct comedi_subdevice *VAR_5,
         struct comedi_insn *VAR_6,
         unsigned int *VAR_7)
{
 unsigned int VAR_8 = FUNC_0(VAR_6->chanspec);
 unsigned int VAR_9;
 int VAR_10;

 FUNC_2(VAR_8, VAR_4->iobase + VAR_2);

 for (VAR_10 = 0; VAR_10 < VAR_6->n; VAR_10++) {
  FUNC_2(0, VAR_4->iobase + VAR_3);


  FUNC_3(30, 100);

  VAR_9 = FUNC_1(VAR_4->iobase + VAR_0);
  VAR_9 |= (FUNC_1(VAR_4->iobase + VAR_1) << 8);
  VAR_9 &= VAR_5->maxdata;

  VAR_7[VAR_10] = VAR_9;
 }

 return VAR_6->n;
}
