
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ iobase; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_5,
    struct comedi_subdevice *VAR_6,
    struct comedi_insn *VAR_7,
    unsigned long VAR_8)
{
 unsigned int VAR_9;

 VAR_9 = FUNC_0(VAR_5->iobase + VAR_4);
 if ((VAR_9 & 0x03))
  return -VAR_2;
 VAR_9 = FUNC_0(VAR_5->iobase + VAR_3);
 if ((VAR_9 & 0x02))
  return -VAR_1;
 if ((VAR_9 & 0x11) == 0x01)
  return 0;
 return -VAR_0;
}
