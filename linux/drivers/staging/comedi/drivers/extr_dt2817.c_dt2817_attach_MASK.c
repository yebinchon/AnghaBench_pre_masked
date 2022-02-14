
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; int subdev_flags; int maxdata; scalar_t__ state; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {scalar_t__ iobase; struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,scalar_t__) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_7, struct comedi_devconfig *VAR_8)
{
 int VAR_9;
 struct comedi_subdevice *VAR_10;

 VAR_9 = FUNC_1(VAR_7, VAR_8->options[0], 0x5);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_0(VAR_7, 1);
 if (VAR_9)
  return VAR_9;

 VAR_10 = &VAR_7->subdevices[0];

 VAR_10->n_chan = 32;
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_2 | VAR_3;
 VAR_10->range_table = &VAR_6;
 VAR_10->maxdata = 1;
 VAR_10->insn_bits = VAR_4;
 VAR_10->insn_config = VAR_5;

 VAR_10->state = 0;
 FUNC_2(0, VAR_7->iobase + VAR_1);

 return 0;
}
