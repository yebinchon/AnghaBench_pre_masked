
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int chanspec; } ;
struct comedi_device {scalar_t__ mmio; } ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (unsigned int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 unsigned int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_2, struct comedi_subdevice *VAR_3,
         struct comedi_insn *VAR_4, unsigned long VAR_5)
{
 unsigned int VAR_6 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_7;

 VAR_7 = FUNC_2(VAR_2->mmio + VAR_0);
 if ((VAR_7 & FUNC_1(VAR_6)) == 0)
  return 0;
 return -VAR_1;
}
