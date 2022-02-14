
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_read; int * range_table; int type; int insn_write; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct comedi_device*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int FUNC_3 (int *) ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_10,
      struct comedi_devconfig *VAR_11)
{
 struct comedi_subdevice *VAR_12;
 int VAR_13;

 VAR_13 = FUNC_2(VAR_10, VAR_11->options[0], 0x03);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_1(VAR_10, 2);
 if (VAR_13)
  return VAR_13;


 FUNC_3(&VAR_6);

 VAR_12 = &VAR_10->subdevices[0];

 VAR_12->type = VAR_1;
 VAR_12->subdev_flags = VAR_4;
 VAR_12->n_chan = 2;
 VAR_12->maxdata = 500;
 VAR_12->range_table = &VAR_9;
 VAR_12->insn_write = VAR_8;
 VAR_12->insn_read = VAR_7;

 VAR_12 = &VAR_10->subdevices[1];

 VAR_12->type = VAR_0;
 VAR_12->subdev_flags = VAR_3 | VAR_2;
 VAR_12->n_chan = 2;
 VAR_12->maxdata = 0xffffff;
 VAR_12->range_table = &VAR_9;
 VAR_12->insn_read = VAR_5;



 FUNC_0(VAR_10);

 return 0;
}
