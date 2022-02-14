
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 VAR_3[1] = FUNC_1(VAR_0->iobase + FUNC_0(3));

 return VAR_2->n;
}
