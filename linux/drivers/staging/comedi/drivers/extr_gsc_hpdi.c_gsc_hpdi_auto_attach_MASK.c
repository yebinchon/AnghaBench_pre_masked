
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct plx_dma_desc {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
struct hpdi_private {int* dio_buffer_phys_addr; int dma_desc_phys_addr; void* dma_desc; void** dio_buffer; void* plx9080_mmio; } ;
struct comedi_subdevice {int subdev_flags; int n_chan; int len_chanlist; int maxdata; int cancel; int do_cmdtest; int do_cmd; int insn_config; int * range_table; int type; } ;
struct comedi_device {char* board_name; struct comedi_subdevice* read_subdev; struct comedi_subdevice* subdevices; int class_dev; int irq; void* mmio; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct hpdi_private* FUNC_0 (struct comedi_device*,int) ;
 int FUNC_1 (struct comedi_device*,int) ;
 int FUNC_2 (struct comedi_device*) ;
 struct pci_dev* FUNC_3 (struct comedi_device*) ;
 int FUNC_4 (int ,char*,int ) ;
 int FUNC_5 (int ,char*,...) ;
 void* FUNC_6 (int *,int,int*,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_7 (struct comedi_device*) ;
 int FUNC_8 (struct comedi_device*) ;
 int VAR_17 ;
 int FUNC_9 (struct comedi_device*,int) ;
 void* FUNC_10 (struct pci_dev*,int) ;
 int FUNC_11 (struct pci_dev*) ;
 int VAR_18 ;
 scalar_t__ FUNC_12 (int ,int ,int ,char*,struct comedi_device*) ;

__attribute__((used)) static int FUNC_13(struct comedi_device *VAR_19,
    unsigned long VAR_20)
{
 struct pci_dev *VAR_21 = FUNC_3(VAR_19);
 struct hpdi_private *VAR_22;
 struct comedi_subdevice *VAR_23;
 int VAR_24;
 int VAR_25;

 VAR_19->board_name = "pci-hpdi32";

 VAR_22 = FUNC_0(VAR_19, sizeof(*VAR_22));
 if (!VAR_22)
  return -VAR_4;

 VAR_25 = FUNC_2(VAR_19);
 if (VAR_25)
  return VAR_25;
 FUNC_11(VAR_21);

 VAR_22->plx9080_mmio = FUNC_10(VAR_21, 0);
 VAR_19->mmio = FUNC_10(VAR_21, 2);
 if (!VAR_22->plx9080_mmio || !VAR_19->mmio) {
  FUNC_5(VAR_19->class_dev, "failed to remap io memory\n");
  return -VAR_4;
 }

 FUNC_8(VAR_19);


 if (FUNC_12(VAR_21->irq, VAR_17, VAR_6,
   VAR_19->board_name, VAR_19)) {
  FUNC_5(VAR_19->class_dev,
    "unable to allocate irq %u\n", VAR_21->irq);
  return -VAR_2;
 }
 VAR_19->irq = VAR_21->irq;

 FUNC_4(VAR_19->class_dev, " irq %u\n", VAR_19->irq);


 for (VAR_24 = 0; VAR_24 < VAR_7; VAR_24++) {
  VAR_22->dio_buffer[VAR_24] =
      FUNC_6(&VAR_21->dev, VAR_1,
           &VAR_22->dio_buffer_phys_addr[VAR_24],
           VAR_5);
 }

 VAR_22->dma_desc = FUNC_6(&VAR_21->dev,
            sizeof(struct plx_dma_desc) *
            VAR_8,
            &VAR_22->dma_desc_phys_addr,
            VAR_5);
 if (VAR_22->dma_desc_phys_addr & 0xf) {
  FUNC_5(VAR_19->class_dev,
    " dma descriptors not quad-word aligned (bug)\n");
  return -VAR_3;
 }

 VAR_25 = FUNC_9(VAR_19, 0x1000);
 if (VAR_25 < 0)
  return VAR_25;

 VAR_25 = FUNC_1(VAR_19, 1);
 if (VAR_25)
  return VAR_25;


 VAR_23 = &VAR_19->subdevices[0];
 VAR_19->read_subdev = VAR_23;
 VAR_23->type = VAR_0;
 VAR_23->subdev_flags = VAR_11 | VAR_12 | VAR_10 |
     VAR_9;
 VAR_23->n_chan = 32;
 VAR_23->len_chanlist = 32;
 VAR_23->maxdata = 1;
 VAR_23->range_table = &VAR_18;
 VAR_23->insn_config = VAR_16;
 VAR_23->do_cmd = VAR_14;
 VAR_23->do_cmdtest = VAR_15;
 VAR_23->cancel = VAR_13;

 return FUNC_7(VAR_19);
}
