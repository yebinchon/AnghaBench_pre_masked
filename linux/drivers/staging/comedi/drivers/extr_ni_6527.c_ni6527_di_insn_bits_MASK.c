
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_0->mmio + FUNC_0(0));
 VAR_4 |= (FUNC_1(VAR_0->mmio + FUNC_0(1)) << 8);
 VAR_4 |= (FUNC_1(VAR_0->mmio + FUNC_0(2)) << 16);

 VAR_3[1] = VAR_4;

 return VAR_2->n;
}
