
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int n_chan; int maxdata; int insn_write; int * range_table; int subdev_flags; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct comedi_subdevice*) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_4, struct comedi_devconfig *VAR_5)
{
 struct comedi_subdevice *VAR_6;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_4, VAR_5->options[0], 0x08);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_1(VAR_4, 1);
 if (VAR_7)
  return VAR_7;


 VAR_6 = &VAR_4->subdevices[0];
 VAR_6->type = VAR_0;
 VAR_6->subdev_flags = VAR_1;
 VAR_6->n_chan = 2;
 VAR_6->maxdata = 0x0fff;
 VAR_6->range_table = &VAR_3;
 VAR_6->insn_write = VAR_2;

 return FUNC_0(VAR_6);
}
