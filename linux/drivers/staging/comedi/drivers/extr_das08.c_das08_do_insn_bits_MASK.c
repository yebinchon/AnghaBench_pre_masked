
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das08_private_struct {int do_mux_bits; } ;
struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int spinlock; scalar_t__ iobase; struct das08_private_struct* private; } ;


 int FUNC_0 (unsigned int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_2,
         struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4, unsigned int *VAR_5)
{
 struct das08_private_struct *VAR_6 = VAR_2->private;

 if (FUNC_1(VAR_3, VAR_5)) {

  FUNC_3(&VAR_2->spinlock);
  VAR_6->do_mux_bits &= ~VAR_0;
  VAR_6->do_mux_bits |= FUNC_0(VAR_3->state);
  FUNC_2(VAR_6->do_mux_bits, VAR_2->iobase + VAR_1);
  FUNC_4(&VAR_2->spinlock);
 }

 VAR_5[1] = VAR_3->state;

 return VAR_4->n;
}
