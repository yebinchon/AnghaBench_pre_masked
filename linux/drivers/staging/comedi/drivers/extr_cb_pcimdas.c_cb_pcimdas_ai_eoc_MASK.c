
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int dummy; } ;
struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ BADR3; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 scalar_t__ VAR_2 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_3,
        struct comedi_subdevice *VAR_4,
        struct comedi_insn *VAR_5,
        unsigned long VAR_6)
{
 struct cb_pcimdas_private *VAR_7 = VAR_3->private;
 unsigned int VAR_8;

 VAR_8 = FUNC_0(VAR_7->BADR3 + VAR_2);
 if ((VAR_8 & VAR_1) == 0)
  return 0;
 return -VAR_0;
}
