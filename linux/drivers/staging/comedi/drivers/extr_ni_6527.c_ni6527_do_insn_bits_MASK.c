
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int state; } ;
struct comedi_insn {int n; } ;
struct comedi_device {scalar_t__ mmio; } ;


 scalar_t__ FUNC_0 (int) ;
 unsigned int FUNC_1 (struct comedi_subdevice*,unsigned int*) ;
 int FUNC_2 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_0,
          struct comedi_subdevice *VAR_1,
          struct comedi_insn *VAR_2,
          unsigned int *VAR_3)
{
 unsigned int VAR_4;

 VAR_4 = FUNC_1(VAR_1, VAR_3);
 if (VAR_4) {

  unsigned int VAR_5 = VAR_1->state ^ 0xffffff;

  if (VAR_4 & 0x0000ff)
   FUNC_2(VAR_5 & 0xff, VAR_0->mmio + FUNC_0(0));
  if (VAR_4 & 0x00ff00)
   FUNC_2((VAR_5 >> 8) & 0xff,
          VAR_0->mmio + FUNC_0(1));
  if (VAR_4 & 0xff0000)
   FUNC_2((VAR_5 >> 16) & 0xff,
          VAR_0->mmio + FUNC_0(2));
 }

 VAR_3[1] = VAR_1->state;

 return VAR_2->n;
}
