
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_8254 {int divisor; int next_div; int divisor1; int next_div1; int divisor2; int next_div2; } ;



void FUNC_0(struct comedi_8254 *VAR_0)
{

 VAR_0->divisor = VAR_0->next_div & 0xffff;
 VAR_0->divisor1 = VAR_0->next_div1 & 0xffff;
 VAR_0->divisor2 = VAR_0->next_div2 & 0xffff;
}
