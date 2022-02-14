
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 unsigned char VAR_0 ;
 int VAR_1 ;
 unsigned char FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
        struct comedi_subdevice *VAR_3,
        struct comedi_insn *VAR_4,
        unsigned long VAR_5)
{
 unsigned char VAR_6;

 VAR_6 = FUNC_0(VAR_2->iobase + VAR_5);
 if ((VAR_6 & VAR_0) == 0)
  return 0;
 return -VAR_1;
}
