
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rti802_private {int ** range_type_list; int * dac_coding; } ;
struct comedi_subdevice {int maxdata; int n_chan; int ** range_table_list; int insn_write; int subdev_flags; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {scalar_t__* options; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct rti802_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_subdevice*) ;
 int FUNC_2 (struct comedi_device*,int) ;
 int FUNC_3 (struct comedi_device*,scalar_t__,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_8, struct comedi_devconfig *VAR_9)
{
 struct rti802_private *VAR_10;
 struct comedi_subdevice *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_13 = FUNC_3(VAR_8, VAR_9->options[0], 0x04);
 if (VAR_13)
  return VAR_13;

 VAR_10 = FUNC_0(VAR_8, sizeof(*VAR_10));
 if (!VAR_10)
  return -VAR_1;

 VAR_13 = FUNC_2(VAR_8, 1);
 if (VAR_13)
  return VAR_13;


 VAR_11 = &VAR_8->subdevices[0];
 VAR_11->type = VAR_0;
 VAR_11->subdev_flags = VAR_2;
 VAR_11->maxdata = 0xfff;
 VAR_11->n_chan = 8;
 VAR_11->insn_write = VAR_7;

 VAR_13 = FUNC_1(VAR_11);
 if (VAR_13)
  return VAR_13;

 VAR_11->range_table_list = VAR_10->range_type_list;
 for (VAR_12 = 0; VAR_12 < 8; VAR_12++) {
  VAR_10->dac_coding[VAR_12] = (VAR_9->options[3 + 2 * VAR_12])
   ? (VAR_4) : (VAR_3);
  VAR_10->range_type_list[VAR_12] = (VAR_9->options[2 + 2 * VAR_12])
   ? &VAR_6 : &VAR_5;
 }

 return 0;
}
