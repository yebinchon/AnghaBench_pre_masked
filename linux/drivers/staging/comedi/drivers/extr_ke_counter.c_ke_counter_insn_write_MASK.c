
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 scalar_t__ FUNC_3 (unsigned int) ;
 scalar_t__ FUNC_4 (unsigned int) ;
 int FUNC_5 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct comedi_device *VAR_0,
     struct comedi_subdevice *VAR_1,
     struct comedi_insn *VAR_2,
     unsigned int *VAR_3)
{
 unsigned int VAR_4 = FUNC_0(VAR_2->chanspec);
 unsigned int VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_2->n; VAR_6++) {
  VAR_5 = VAR_3[0];


  FUNC_5((VAR_5 >> 24) & 0xff, VAR_0->iobase + FUNC_4(VAR_4));
  FUNC_5((VAR_5 >> 16) & 0xff, VAR_0->iobase + FUNC_3(VAR_4));
  FUNC_5((VAR_5 >> 8) & 0xff, VAR_0->iobase + FUNC_2(VAR_4));
  FUNC_5((VAR_5 >> 0) & 0xff, VAR_0->iobase + FUNC_1(VAR_4));
 }

 return VAR_2->n;
}
