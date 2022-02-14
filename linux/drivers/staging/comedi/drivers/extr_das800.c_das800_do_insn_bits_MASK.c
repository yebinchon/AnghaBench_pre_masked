
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct das800_private {int do_bits; } ;
struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int spinlock; struct das800_private* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (struct comedi_device*,int,int ) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
          struct comedi_subdevice *VAR_3,
          struct comedi_insn *VAR_4,
          unsigned int *VAR_5)
{
 struct das800_private *VAR_6 = VAR_2->private;
 unsigned long VAR_7;

 if (FUNC_0(VAR_3, VAR_5)) {
  VAR_6->do_bits = VAR_3->state << 4;

  FUNC_2(&VAR_2->spinlock, VAR_7);
  FUNC_1(VAR_2, VAR_1 | VAR_6->do_bits,
     VAR_0);
  FUNC_3(&VAR_2->spinlock, VAR_7);
 }

 VAR_5[1] = VAR_3->state;

 return VAR_4->n;
}
