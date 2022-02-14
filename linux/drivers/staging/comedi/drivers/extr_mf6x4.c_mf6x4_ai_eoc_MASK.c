
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mf6x4_private {int gpioc_reg; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct mf6x4_private* private; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_2,
   struct comedi_subdevice *VAR_3,
   struct comedi_insn *VAR_4,
   unsigned long VAR_5)
{
 struct mf6x4_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7;

 VAR_7 = FUNC_0(VAR_6->gpioc_reg);
 if (VAR_7 & VAR_1)
  return 0;
 return -VAR_0;
}
