
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct daqp_private {scalar_t__ stop; } ;
struct comedi_subdevice {unsigned int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; struct daqp_private* private; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_1 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned int *VAR_5)
{
 struct daqp_private *VAR_6 = VAR_2->private;

 if (VAR_6->stop)
  return -VAR_1;

 if (FUNC_0(VAR_3, VAR_5))
  FUNC_1(VAR_3->state, VAR_2->iobase + VAR_0);

 VAR_5[1] = VAR_3->state;

 return VAR_4->n;
}
