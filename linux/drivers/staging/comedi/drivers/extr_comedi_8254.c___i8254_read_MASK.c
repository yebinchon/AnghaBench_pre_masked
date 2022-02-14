
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {unsigned int iosize; unsigned int regshift; int iobase; int mmio; } ;





 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int ) ;
 unsigned int FUNC_2 (int ) ;
 unsigned int FUNC_3 (int ) ;
 unsigned int FUNC_4 (int ) ;
 unsigned int FUNC_5 (int ) ;

__attribute__((used)) static unsigned int FUNC_6(struct comedi_8254 *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2 = (VAR_1 * VAR_0->iosize) << VAR_0->regshift;
 unsigned int VAR_3;

 switch (VAR_0->iosize) {
 default:
 case 128:
  if (VAR_0->mmio)
   VAR_3 = FUNC_3(VAR_0->mmio + VAR_2);
  else
   VAR_3 = FUNC_0(VAR_0->iobase + VAR_2);
  break;
 case 130:
  if (VAR_0->mmio)
   VAR_3 = FUNC_5(VAR_0->mmio + VAR_2);
  else
   VAR_3 = FUNC_2(VAR_0->iobase + VAR_2);
  break;
 case 129:
  if (VAR_0->mmio)
   VAR_3 = FUNC_4(VAR_0->mmio + VAR_2);
  else
   VAR_3 = FUNC_1(VAR_0->iobase + VAR_2);
  break;
 }
 return VAR_3 & 0xff;
}
