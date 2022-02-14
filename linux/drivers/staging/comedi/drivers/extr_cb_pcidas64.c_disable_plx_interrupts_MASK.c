
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidas64_private {scalar_t__ plx9080_iobase; scalar_t__ plx_intcsr_bits; } ;
struct comedi_device {struct pcidas64_private* private; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;

__attribute__((used)) static void FUNC_1(struct comedi_device *VAR_1)
{
 struct pcidas64_private *VAR_2 = VAR_1->private;

 VAR_2->plx_intcsr_bits = 0;
 FUNC_0(VAR_2->plx_intcsr_bits,
        VAR_2->plx9080_iobase + VAR_0);
}
