
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_6,
      struct comedi_subdevice *VAR_7,
      struct comedi_insn *VAR_8,
      unsigned long VAR_9)
{
 unsigned int VAR_10;

 VAR_10 = FUNC_0(VAR_6->iobase + VAR_5);
 if (VAR_10 & VAR_3)
  return 0;
 if (VAR_10 & VAR_4) {
  FUNC_1(0, VAR_6->iobase + VAR_0);
  return -VAR_2;
 }
 return -VAR_1;
}
