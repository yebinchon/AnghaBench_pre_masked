
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_1 (scalar_t__) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_3,
          struct comedi_subdevice *VAR_4,
          struct comedi_insn *VAR_5,
          unsigned int *VAR_6)
{
 unsigned int VAR_7;

 if (FUNC_0(VAR_4, VAR_6)) {
  VAR_7 = FUNC_1(VAR_3->iobase + VAR_2);
  VAR_7 &= (VAR_1 | VAR_0);
  VAR_7 |= VAR_4->state;
  FUNC_2(VAR_7, VAR_3->iobase + VAR_2);
 }

 VAR_6[1] = VAR_4->state;

 return VAR_5->n;
}
