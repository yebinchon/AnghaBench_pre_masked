
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {unsigned int iosize; unsigned int regshift; int iobase; int mmio; } ;





 int FUNC_0 (unsigned int,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,int ) ;
 int FUNC_4 (unsigned int,int ) ;
 int FUNC_5 (unsigned int,int ) ;

__attribute__((used)) static void FUNC_6(struct comedi_8254 *VAR_0,
     unsigned int VAR_1, unsigned int VAR_2)
{
 unsigned int VAR_3 = (VAR_2 * VAR_0->iosize) << VAR_0->regshift;

 switch (VAR_0->iosize) {
 default:
 case 128:
  if (VAR_0->mmio)
   FUNC_3(VAR_1, VAR_0->mmio + VAR_3);
  else
   FUNC_0(VAR_1, VAR_0->iobase + VAR_3);
  break;
 case 130:
  if (VAR_0->mmio)
   FUNC_5(VAR_1, VAR_0->mmio + VAR_3);
  else
   FUNC_2(VAR_1, VAR_0->iobase + VAR_3);
  break;
 case 129:
  if (VAR_0->mmio)
   FUNC_4(VAR_1, VAR_0->mmio + VAR_3);
  else
   FUNC_1(VAR_1, VAR_0->iobase + VAR_3);
  break;
 }
}
