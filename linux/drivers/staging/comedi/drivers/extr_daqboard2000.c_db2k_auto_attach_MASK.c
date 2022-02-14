
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct db2k_private {void* plx; } ;
struct db2k_boardtype {scalar_t__ has_2_ao; scalar_t__ name; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int maxdata; int * range_table; int insn_write; int type; int insn_read; } ;
struct comedi_device {struct comedi_subdevice* subdevices; void* mmio; scalar_t__ board_name; struct db2k_boardtype const* board_ptr; } ;


 unsigned long FUNC_0 (struct db2k_boardtype*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 struct db2k_private* FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_subdevice*) ;
 int FUNC_3 (struct comedi_device*,int) ;
 int FUNC_4 (struct comedi_device*,int *,int ,int ,int ) ;
 int FUNC_5 (struct comedi_device*) ;
 struct pci_dev* FUNC_6 (struct comedi_device*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct db2k_boardtype* VAR_13 ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*) ;
 int VAR_14 ;
 void* FUNC_9 (struct pci_dev*,int) ;
 int VAR_15 ;
 int FUNC_10 (struct comedi_device*,struct comedi_subdevice*,int ,int ) ;

__attribute__((used)) static int FUNC_11(struct comedi_device *VAR_16, unsigned long VAR_17)
{
 struct pci_dev *VAR_18 = FUNC_6(VAR_16);
 const struct db2k_boardtype *VAR_19;
 struct db2k_private *VAR_20;
 struct comedi_subdevice *VAR_21;
 int VAR_22;

 if (VAR_17 >= FUNC_0(VAR_13))
  return -VAR_4;
 VAR_19 = &VAR_13[VAR_17];
 if (!VAR_19->name)
  return -VAR_4;
 VAR_16->board_ptr = VAR_19;
 VAR_16->board_name = VAR_19->name;

 VAR_20 = FUNC_1(VAR_16, sizeof(*VAR_20));
 if (!VAR_20)
  return -VAR_5;

 VAR_22 = FUNC_5(VAR_16);
 if (VAR_22)
  return VAR_22;

 VAR_20->plx = FUNC_9(VAR_18, 0);
 VAR_16->mmio = FUNC_9(VAR_18, 2);
 if (!VAR_20->plx || !VAR_16->mmio)
  return -VAR_5;

 VAR_22 = FUNC_3(VAR_16, 3);
 if (VAR_22)
  return VAR_22;

 VAR_22 = FUNC_4(VAR_16, &FUNC_6(VAR_16)->dev,
          VAR_2, VAR_14, 0);
 if (VAR_22 < 0)
  return VAR_22;

 FUNC_8(VAR_16);
 FUNC_7(VAR_16);

 VAR_21 = &VAR_16->subdevices[0];

 VAR_21->type = VAR_0;
 VAR_21->subdev_flags = VAR_7 | VAR_6;
 VAR_21->n_chan = 24;
 VAR_21->maxdata = 0xffff;
 VAR_21->insn_read = VAR_10;
 VAR_21->range_table = &VAR_11;

 VAR_21 = &VAR_16->subdevices[1];

 VAR_21->type = VAR_1;
 VAR_21->subdev_flags = VAR_8;
 VAR_21->n_chan = VAR_19->has_2_ao ? 2 : 4;
 VAR_21->maxdata = 0xffff;
 VAR_21->insn_write = VAR_12;
 VAR_21->range_table = &VAR_15;

 VAR_22 = FUNC_2(VAR_21);
 if (VAR_22)
  return VAR_22;

 VAR_21 = &VAR_16->subdevices[2];
 return FUNC_10(VAR_16, VAR_21, VAR_9,
    VAR_3);
}
