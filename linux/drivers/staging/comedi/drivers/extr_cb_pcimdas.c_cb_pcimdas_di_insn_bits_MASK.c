
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {struct cb_pcimdas_private* private; } ;
struct cb_pcimdas_private {scalar_t__ BADR3; } ;


 scalar_t__ VAR_0 ;
 unsigned int FUNC_0 (scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct comedi_device *VAR_1,
       struct comedi_subdevice *VAR_2,
       struct comedi_insn *VAR_3,
       unsigned int *VAR_4)
{
 struct cb_pcimdas_private *VAR_5 = VAR_1->private;
 unsigned int VAR_6;

 VAR_6 = FUNC_0(VAR_5->BADR3 + VAR_0);

 VAR_4[1] = VAR_6 & 0x0f;

 return VAR_3->n;
}
