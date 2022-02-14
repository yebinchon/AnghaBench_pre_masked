
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comedi_subdevice {int subdev_flags; int maxdata; int insn_config; int insn_bits; int * range_table; int n_chan; int type; } ;
struct comedi_device {int board_name; TYPE_1__* driver; int class_dev; struct comedi_subdevice* subdevices; } ;
struct comedi_devconfig {int dummy; } ;
struct comedi_bond_private {int ndevs; int nchans; int name; } ;
struct TYPE_2__ {int driver_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct comedi_bond_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (int ,char*,int ,int ,int ,int ) ;
 int FUNC_3 (struct comedi_device*,struct comedi_devconfig*) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(struct comedi_device *VAR_7,
     struct comedi_devconfig *VAR_8)
{
 struct comedi_bond_private *VAR_9;
 struct comedi_subdevice *VAR_10;
 int VAR_11;

 VAR_9 = FUNC_0(VAR_7, sizeof(*VAR_9));
 if (!VAR_9)
  return -VAR_1;




 VAR_11 = FUNC_3(VAR_7, VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_7->board_name = VAR_9->name;

 VAR_11 = FUNC_1(VAR_7, 1);
 if (VAR_11)
  return VAR_11;

 VAR_10 = &VAR_7->subdevices[0];
 VAR_10->type = VAR_0;
 VAR_10->subdev_flags = VAR_2 | VAR_3;
 VAR_10->n_chan = VAR_9->nchans;
 VAR_10->maxdata = 1;
 VAR_10->range_table = &VAR_6;
 VAR_10->insn_bits = VAR_4;
 VAR_10->insn_config = VAR_5;

 FUNC_2(VAR_7->class_dev,
   "%s: %s attached, %u channels from %u devices\n",
   VAR_7->driver->driver_name, VAR_7->board_name,
   VAR_9->nchans, VAR_9->ndevs);

 return 0;
}
