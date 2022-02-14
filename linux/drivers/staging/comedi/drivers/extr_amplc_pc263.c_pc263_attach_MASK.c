
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; int maxdata; int state; int insn_bits; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_6, struct comedi_devconfig *VAR_7)
{
 struct comedi_subdevice *VAR_8;
 int VAR_9;

 VAR_9 = FUNC_1(VAR_6, VAR_7->options[0], 0x2);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_6, 1);
 if (VAR_9)
  return VAR_9;


 VAR_8 = &VAR_6->subdevices[0];
 VAR_8->type = VAR_0;
 VAR_8->subdev_flags = VAR_3;
 VAR_8->n_chan = 16;
 VAR_8->maxdata = 1;
 VAR_8->range_table = &VAR_5;
 VAR_8->insn_bits = VAR_4;


 VAR_8->state = FUNC_2(VAR_6->iobase + VAR_1) |
     (FUNC_2(VAR_6->iobase + VAR_2) << 8);

 return 0;
}
