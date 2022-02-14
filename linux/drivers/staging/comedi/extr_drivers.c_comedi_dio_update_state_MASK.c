
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; unsigned int state; } ;



unsigned int FUNC_0(struct comedi_subdevice *VAR_0,
         unsigned int *VAR_1)
{
 unsigned int VAR_2 = (VAR_0->n_chan < 32) ? ((1 << VAR_0->n_chan) - 1)
       : 0xffffffff;
 unsigned int VAR_3 = VAR_1[0] & VAR_2;
 unsigned int VAR_4 = VAR_1[1];

 if (VAR_3) {
  VAR_0->state &= ~VAR_3;
  VAR_0->state |= (VAR_4 & VAR_3);
 }

 return VAR_3;
}
