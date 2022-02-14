
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtd_private {unsigned int* timer_gate_src; unsigned int* timer_clk_src; } ;
struct comedi_subdevice {int dummy; } ;
struct comedi_insn {int n; int chanspec; } ;
struct comedi_device {scalar_t__ mmio; struct rtd_private* private; } ;


 unsigned int FUNC_0 (int ) ;
 int VAR_0 ;




 scalar_t__ FUNC_1 (unsigned int) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 unsigned int VAR_1 ;
 int FUNC_3 (unsigned int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_2,
       struct comedi_subdevice *VAR_3,
       struct comedi_insn *VAR_4,
       unsigned int *VAR_5)
{
 struct rtd_private *VAR_6 = VAR_2->private;
 unsigned int VAR_7 = FUNC_0(VAR_4->chanspec);
 unsigned int VAR_8;
 unsigned int VAR_9;

 switch (VAR_5[0]) {
 case 128:
  VAR_9 = VAR_5[2];
  VAR_8 = (VAR_7 == 0) ? 3 : 4;
  if (VAR_9 > VAR_8)
   return -VAR_0;

  VAR_6->timer_gate_src[VAR_7] = VAR_9;
  FUNC_3(VAR_9, VAR_2->mmio + FUNC_2(VAR_7));
  break;
 case 130:
  VAR_5[2] = VAR_6->timer_gate_src[VAR_7];
  break;
 case 129:
  VAR_9 = VAR_5[1];
  switch (VAR_7) {
  case 0:
   VAR_8 = 3;
   break;
  case 1:
   VAR_8 = 5;
   break;
  case 2:
   VAR_8 = 4;
   break;
  default:
   return -VAR_0;
  }
  if (VAR_9 > VAR_8)
   return -VAR_0;

  VAR_6->timer_clk_src[VAR_7] = VAR_9;
  FUNC_3(VAR_9, VAR_2->mmio + FUNC_1(VAR_7));
  break;
 case 131:
  VAR_9 = VAR_6->timer_clk_src[VAR_7];
  VAR_5[1] = VAR_6->timer_clk_src[VAR_7];
  VAR_5[2] = (VAR_9 == 0) ? VAR_1 : 0;
  break;
 default:
  return -VAR_0;
 }

 return VAR_4->n;
}
