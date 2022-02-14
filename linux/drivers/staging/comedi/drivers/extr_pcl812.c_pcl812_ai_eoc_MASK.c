
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int maxdata; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7,
    unsigned long VAR_8)
{
 unsigned int VAR_9;

 if (VAR_6->maxdata > 0x0fff) {
  VAR_9 = FUNC_0(VAR_5->iobase + VAR_4);
  if ((VAR_9 & VAR_3) == 0)
   return 0;
 } else {
  VAR_9 = FUNC_0(VAR_5->iobase + VAR_2);
  if ((VAR_9 & VAR_1) == 0)
   return 0;
 }
 return -VAR_0;
}
