
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {int iobase; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int FUNC_1 (int ) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_1,
          struct comedi_subdevice *VAR_2,
          struct comedi_insn *VAR_3,
          unsigned long VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_1(VAR_1->iobase);
 if (VAR_5 & FUNC_0(15))
  return 0;
 return -VAR_0;
}
