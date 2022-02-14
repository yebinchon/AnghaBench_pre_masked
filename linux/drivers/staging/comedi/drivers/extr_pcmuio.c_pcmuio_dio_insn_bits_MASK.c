
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; unsigned int state; unsigned int io_bits; } ;
struct comedi_insn {int n; } ;
struct comedi_device {int dummy; } ;


 unsigned int FUNC_0 (struct comedi_subdevice*,unsigned int*) ;
 unsigned int FUNC_1 (struct comedi_device*,int,int ,int) ;
 int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_subdevice*) ;
 int FUNC_4 (struct comedi_device*,unsigned int,int,int ,int) ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_0,
    struct comedi_subdevice *VAR_1,
    struct comedi_insn *VAR_2,
    unsigned int *VAR_3)
{
 int VAR_4 = FUNC_2(VAR_1);
 int VAR_5 = FUNC_3(VAR_1);
 unsigned int VAR_6 = (1 << VAR_1->n_chan) - 1;
 unsigned int VAR_7;
 unsigned int VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_3);
 if (VAR_7) {
  VAR_8 = ~VAR_1->state & VAR_6;
  VAR_8 &= VAR_1->io_bits;
  FUNC_4(VAR_0, VAR_8, VAR_4, 0, VAR_5);
 }


 VAR_8 = FUNC_1(VAR_0, VAR_4, 0, VAR_5);


 VAR_3[1] = ~VAR_8 & VAR_6;

 return VAR_2->n;
}
