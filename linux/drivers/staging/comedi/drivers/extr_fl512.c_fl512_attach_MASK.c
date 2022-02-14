
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_write; int * range_table; int type; int insn_read; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_8, struct comedi_devconfig *VAR_9)
{
 struct comedi_subdevice *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_2(VAR_8, VAR_9->options[0], 0x10);
 if (VAR_11)
  return VAR_11;

 VAR_11 = FUNC_1(VAR_8, 2);
 if (VAR_11)
  return VAR_11;


 VAR_10 = &VAR_8->subdevices[0];
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_3 | VAR_2;
 VAR_10->n_chan = 16;
 VAR_10->maxdata = 0x0fff;
 VAR_10->range_table = &VAR_7;
 VAR_10->insn_read = VAR_5;


 VAR_10 = &VAR_8->subdevices[1];
 VAR_10->type = VAR_1;
 VAR_10->subdev_flags = VAR_4;
 VAR_10->n_chan = 2;
 VAR_10->maxdata = 0x0fff;
 VAR_10->range_table = &VAR_7;
 VAR_10->insn_write = VAR_6;

 return FUNC_0(VAR_10);
}
