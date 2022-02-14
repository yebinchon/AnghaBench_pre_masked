
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int release; } ;
struct tw686x_dev {struct tw686x_dev* video_channels; struct tw686x_dev* audio_channels; int mmio; TYPE_1__ v4l2_dev; int dma_delay_timer; int name; int lock; struct pci_dev* pci_dev; int dma_mode; int type; } ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int device; int irq; int dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct tw686x_dev*) ;
 void* FUNC_5 (int,int,int ) ;
 int FUNC_6 (struct tw686x_dev*) ;
 struct tw686x_dev* FUNC_7 (int,int ) ;
 int FUNC_8 (struct tw686x_dev*) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct pci_dev*) ;
 scalar_t__ FUNC_11 (struct pci_dev*) ;
 int FUNC_12 (struct pci_dev*,int ) ;
 int FUNC_13 (struct pci_dev*,int ) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_17 (struct pci_dev*,int ) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*,struct tw686x_dev*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (char*,int ,int ,int ,unsigned long,int ) ;
 int FUNC_22 (struct tw686x_dev*,int ,int) ;
 int FUNC_23 (int ,int ,int ,int ,struct tw686x_dev*) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int ,char*,int) ;
 int FUNC_26 (int *,int ,int ) ;
 int FUNC_27 (struct tw686x_dev*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_28 (struct tw686x_dev*) ;

__attribute__((used)) static int FUNC_29(struct pci_dev *VAR_16,
   const struct pci_device_id *VAR_17)
{
 struct tw686x_dev *VAR_18;
 int VAR_19;

 VAR_18 = FUNC_7(sizeof(*VAR_18), VAR_7);
 if (!VAR_18)
  return -VAR_6;
 VAR_18->type = VAR_17->driver_data;
 VAR_18->dma_mode = VAR_12;
 FUNC_25(VAR_18->name, "tw%04X", VAR_16->device);

 VAR_18->video_channels = FUNC_5(FUNC_8(VAR_18),
  sizeof(*VAR_18->video_channels), VAR_7);
 if (!VAR_18->video_channels) {
  VAR_19 = -VAR_6;
  goto free_dev;
 }

 VAR_18->audio_channels = FUNC_5(FUNC_8(VAR_18),
  sizeof(*VAR_18->audio_channels), VAR_7);
 if (!VAR_18->audio_channels) {
  VAR_19 = -VAR_6;
  goto free_video;
 }

 FUNC_21("%s: PCI %s, IRQ %d, MMIO 0x%lx (%s mode)\n", VAR_18->name,
  FUNC_14(VAR_16), VAR_16->irq,
  (unsigned long)FUNC_17(VAR_16, 0),
  FUNC_3(VAR_12));

 VAR_18->pci_dev = VAR_16;
 if (FUNC_11(VAR_16)) {
  VAR_19 = -VAR_5;
  goto free_audio;
 }

 FUNC_20(VAR_16);
 VAR_19 = FUNC_18(VAR_16, FUNC_0(32));
 if (VAR_19) {
  FUNC_1(&VAR_16->dev, "32-bit PCI DMA not supported\n");
  VAR_19 = -VAR_5;
  goto disable_pci;
 }

 VAR_19 = FUNC_16(VAR_16, VAR_18->name);
 if (VAR_19) {
  FUNC_1(&VAR_16->dev, "unable to request PCI region\n");
  goto disable_pci;
 }

 VAR_18->mmio = FUNC_12(VAR_16, 0);
 if (!VAR_18->mmio) {
  FUNC_1(&VAR_16->dev, "unable to remap PCI region\n");
  VAR_19 = -VAR_6;
  goto free_region;
 }


 FUNC_22(VAR_18, VAR_10, 0x0f);
 FUNC_9(1);

 FUNC_22(VAR_18, VAR_9[0], 0x3f);
 if (FUNC_8(VAR_18) > 4)
  FUNC_22(VAR_18, VAR_9[1], 0x3f);


 FUNC_22(VAR_18, VAR_2, 0);
 FUNC_22(VAR_18, VAR_0, 0);


 FUNC_22(VAR_18, VAR_3, 0xffffff04);
 FUNC_22(VAR_18, VAR_1, 0x140c8584);
 FUNC_22(VAR_18, VAR_4, VAR_11);

 FUNC_24(&VAR_18->lock);

 VAR_19 = FUNC_23(VAR_16->irq, VAR_15, VAR_8,
     VAR_18->name, VAR_18);
 if (VAR_19 < 0) {
  FUNC_1(&VAR_16->dev, "unable to request interrupt\n");
  goto iounmap;
 }

 FUNC_26(&VAR_18->dma_delay_timer, VAR_14, 0);






 VAR_18->v4l2_dev.release = VAR_13;
 VAR_19 = FUNC_28(VAR_18);
 if (VAR_19) {
  FUNC_1(&VAR_16->dev, "can't register video\n");
  goto free_irq;
 }

 VAR_19 = FUNC_27(VAR_18);
 if (VAR_19)
  FUNC_2(&VAR_16->dev, "can't register audio\n");

 FUNC_19(VAR_16, VAR_18);
 return 0;

free_irq:
 FUNC_4(VAR_16->irq, VAR_18);
iounmap:
 FUNC_13(VAR_16, VAR_18->mmio);
free_region:
 FUNC_15(VAR_16);
disable_pci:
 FUNC_10(VAR_16);
free_audio:
 FUNC_6(VAR_18->audio_channels);
free_video:
 FUNC_6(VAR_18->video_channels);
free_dev:
 FUNC_6(VAR_18);
 return VAR_19;
}
