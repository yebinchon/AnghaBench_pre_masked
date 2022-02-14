
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmda12_private {int simultaneous_xfer_mode; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_read; int insn_write; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int * options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct pcmda12_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct comedi_device*,struct comedi_subdevice*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_5(struct comedi_device *VAR_7,
     struct comedi_devconfig *VAR_8)
{
 struct pcmda12_private *VAR_9;
 struct comedi_subdevice *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_8->options[0], 0x10);
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_0(VAR_7, sizeof(*VAR_9));
 if (!VAR_9)
  return -VAR_1;

 VAR_9->simultaneous_xfer_mode = VAR_8->options[1];

 VAR_11 = FUNC_2(VAR_7, 1);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_7->subdevices[0];
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_2 | VAR_3;
 VAR_10->n_chan = 8;
 VAR_10->maxdata = 0x0fff;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_write = VAR_5;
 VAR_10->insn_read = VAR_4;

 VAR_11 = FUNC_1(VAR_10);
 if (VAR_11)
  return VAR_11;

 FUNC_4(VAR_7, VAR_10);

 return 0;
}
