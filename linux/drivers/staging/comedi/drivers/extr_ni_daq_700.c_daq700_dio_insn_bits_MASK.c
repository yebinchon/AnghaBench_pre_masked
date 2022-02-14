
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2,
    struct comedi_subdevice *VAR_3,
    struct comedi_insn *VAR_4,
    unsigned int *VAR_5)
{
 unsigned int VAR_6;
 unsigned int VAR_7;

 VAR_6 = FUNC_0(VAR_3, VAR_5);
 if (VAR_6) {
  if (VAR_6 & 0xff)
   FUNC_2(VAR_3->state & 0xff, VAR_2->iobase + VAR_1);
 }

 VAR_7 = VAR_3->state & 0xff;
 VAR_7 |= FUNC_1(VAR_2->iobase + VAR_0) << 8;

 VAR_5[1] = VAR_7;

 return VAR_4->n;
}
