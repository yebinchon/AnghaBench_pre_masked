
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; struct apci3120_private* private; } ;
struct apci3120_private {unsigned int do_bits; } ;


 int FUNC_0 (unsigned int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_1,
     struct comedi_subdevice *VAR_2,
     struct comedi_insn *VAR_3,
     unsigned int *VAR_4)
{
 struct apci3120_private *VAR_5 = VAR_1->private;

 if (FUNC_1(VAR_2, VAR_4)) {
  VAR_5->do_bits = VAR_2->state;
  FUNC_2(FUNC_0(VAR_5->do_bits),
       VAR_1->iobase + VAR_0);
 }

 VAR_4[1] = VAR_2->state;

 return VAR_3->n;
}
