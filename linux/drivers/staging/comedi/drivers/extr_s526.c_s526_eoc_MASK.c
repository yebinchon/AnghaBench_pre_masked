
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned long,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_2,
      struct comedi_subdevice *VAR_3,
      struct comedi_insn *VAR_4,
      unsigned long VAR_5)
{
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_2->iobase + VAR_1);
 if (VAR_6 & VAR_5) {

  FUNC_1(VAR_5, VAR_2->iobase + VAR_1);
  return 0;
 }
 return -VAR_0;
}
