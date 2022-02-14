
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int insn_config; int insn_bits; int * range_table; int type; } ;
struct comedi_device {struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct comedi_device*,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int ) ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_3(struct comedi_device *VAR_11, struct comedi_devconfig *VAR_12)
{
 struct comedi_subdevice *VAR_13;
 int VAR_14;







 VAR_14 = FUNC_0(VAR_11, 1);
 if (VAR_14)
  return VAR_14;

 VAR_13 = &VAR_11->subdevices[0];

 VAR_13->type = VAR_0;
 VAR_13->subdev_flags = VAR_6 | VAR_7;
 VAR_13->n_chan = 20;
 VAR_13->maxdata = 1;
 VAR_13->range_table = &VAR_10;
 VAR_13->insn_bits = VAR_8;
 VAR_13->insn_config = VAR_9;


 FUNC_2(VAR_3, VAR_2);
 FUNC_2(0x00, VAR_1);
 FUNC_2(VAR_4, VAR_2);
 FUNC_2(0x00, VAR_1);
 FUNC_2(VAR_5, VAR_2);
 FUNC_2((FUNC_1(VAR_1) & 0xAA), VAR_1);

 return 0;
}
