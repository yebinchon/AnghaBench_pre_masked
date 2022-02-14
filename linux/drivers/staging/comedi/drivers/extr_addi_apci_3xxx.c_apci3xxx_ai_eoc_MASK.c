
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {scalar_t__ mmio; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
      struct comedi_subdevice *VAR_2,
      struct comedi_insn *VAR_3,
      unsigned long VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = FUNC_0(VAR_1->mmio + 20);
 if (VAR_5 & 0x1)
  return 0;
 return -VAR_0;
}
