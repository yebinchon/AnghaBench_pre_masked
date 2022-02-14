
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct vip_config {int pwr_name; int pwr_pin; int reset_name; int reset_pin; int i2c_addr; int i2c_id; } ;
struct TYPE_5__ {int * lock; int * queue; int * v4l2_dev; } ;
struct sta2x11_vip {int v4l2_dev; int iomem; int vb_vidq; TYPE_1__ video_dev; int decoder; int adapter; struct vip_config* config; int v4l_lock; int slock; int format; int std; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; int irq; } ;
typedef int irq_handler_t ;


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
 int FUNC_1 (int *,char*,unsigned long,unsigned long,int ) ;
 int FUNC_2 (int *,char*) ;
 struct vip_config* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int * VAR_9 ;
 int FUNC_6 (int ,struct sta2x11_vip*) ;
 int FUNC_7 (int ,int) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;
 int VAR_10 ;
 int FUNC_11 (struct sta2x11_vip*) ;
 struct sta2x11_vip* FUNC_12 (int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct pci_dev*) ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 int FUNC_17 (struct pci_dev*,int ,int) ;
 int FUNC_18 (struct pci_dev*,int ) ;
 int FUNC_19 (struct pci_dev*) ;
 int FUNC_20 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_21 (struct pci_dev*,int ) ;
 scalar_t__ FUNC_22 (struct pci_dev*,int ) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (int ,int ,int ,int ,struct sta2x11_vip*) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (struct sta2x11_vip*) ;
 int FUNC_27 (struct sta2x11_vip*) ;
 int FUNC_28 (struct sta2x11_vip*) ;
 int FUNC_29 (int,int) ;
 int FUNC_30 (int *,int *) ;
 int FUNC_31 (int *) ;
 int FUNC_32 (int *,int ,char*,int ,int *) ;
 int FUNC_33 (int ,int ,int ,int ) ;
 int FUNC_34 (int *) ;
 TYPE_1__ VAR_11 ;
 int FUNC_35 (TYPE_1__*,int ,int) ;
 int FUNC_36 (TYPE_1__*,struct sta2x11_vip*) ;
 int FUNC_37 (TYPE_1__*) ;
 int FUNC_38 (int *,int ,int ) ;
 int FUNC_39 (int *,int ,int ,int ) ;
 scalar_t__ VAR_12 ;

__attribute__((used)) static int FUNC_40(struct pci_dev *VAR_13,
    const struct pci_device_id *VAR_14)
{
 int VAR_15;
 struct sta2x11_vip *VAR_16;
 struct vip_config *VAR_17;


 if (FUNC_5(&VAR_13->dev, FUNC_0(26))) {
  FUNC_2(&VAR_13->dev, "26-bit DMA addressing not available\n");
  return -VAR_0;
 }

 VAR_15 = FUNC_15(VAR_13);
 if (VAR_15)
  return VAR_15;


 VAR_17 = FUNC_3(&VAR_13->dev);
 if (!VAR_17) {
  FUNC_4(&VAR_13->dev, "VIP slot disabled\n");
  VAR_15 = -VAR_0;
  goto disable;
 }


 VAR_15 = FUNC_39(&VAR_13->dev, VAR_17->pwr_pin, 0,
          VAR_17->pwr_name);
 if (VAR_15)
  goto disable;

 VAR_15 = FUNC_39(&VAR_13->dev, VAR_17->reset_pin, 0,
          VAR_17->reset_name);
 if (VAR_15) {
  FUNC_38(&VAR_13->dev, VAR_17->pwr_pin,
     VAR_17->pwr_name);
  goto disable;
 }

 if (FUNC_8(VAR_17->pwr_pin)) {

  FUNC_29(5000, 25000);
  FUNC_7(VAR_17->pwr_pin, 1);
 }

 if (FUNC_8(VAR_17->reset_pin)) {

  FUNC_29(5000, 25000);
  FUNC_7(VAR_17->reset_pin, 1);
 }
 FUNC_29(5000, 25000);


 VAR_16 = FUNC_12(sizeof(struct sta2x11_vip), VAR_3);
 if (!VAR_16) {
  VAR_15 = -VAR_2;
  goto release_gpios;
 }
 VAR_16->pdev = VAR_13;
 VAR_16->std = VAR_6;
 VAR_16->format = VAR_9[0];
 VAR_16->config = VAR_17;
 FUNC_13(&VAR_16->v4l_lock);

 VAR_15 = FUNC_27(VAR_16);
 if (VAR_15)
  goto free_mem;
 VAR_15 = FUNC_30(&VAR_13->dev, &VAR_16->v4l2_dev);
 if (VAR_15)
  goto free_mem;

 FUNC_1(&VAR_13->dev, "BAR #0 at 0x%lx 0x%lx irq %d\n",
  (unsigned long)FUNC_22(VAR_13, 0),
  (unsigned long)FUNC_21(VAR_13, 0), VAR_13->irq);

 FUNC_23(VAR_13);

 VAR_15 = FUNC_20(VAR_13, VAR_5);
 if (VAR_15)
  goto unreg;

 VAR_16->iomem = FUNC_17(VAR_13, 0, 0x100);
 if (!VAR_16->iomem) {
  VAR_15 = -VAR_2;
  goto release;
 }

 FUNC_16(VAR_13);


 VAR_15 = FUNC_26(VAR_16);
 if (VAR_15)
  goto unmap;

 FUNC_25(&VAR_16->slock);

 VAR_15 = FUNC_24(VAR_13->irq,
     (irq_handler_t) VAR_12,
     VAR_4, VAR_5, VAR_16);
 if (VAR_15) {
  FUNC_2(&VAR_13->dev, "request_irq failed\n");
  VAR_15 = -VAR_1;
  goto release_buf;
 }


 VAR_16->video_dev = VAR_11;
 VAR_16->video_dev.v4l2_dev = &VAR_16->v4l2_dev;
 VAR_16->video_dev.queue = &VAR_16->vb_vidq;
 VAR_16->video_dev.lock = &VAR_16->v4l_lock;
 FUNC_36(&VAR_16->video_dev, VAR_16);

 VAR_15 = FUNC_35(&VAR_16->video_dev, VAR_7, -1);
 if (VAR_15)
  goto vrelease;


 VAR_16->adapter = FUNC_9(VAR_16->config->i2c_id);
 if (!VAR_16->adapter) {
  VAR_15 = -VAR_1;
  FUNC_2(&VAR_13->dev, "no I2C adapter found\n");
  goto vunreg;
 }

 VAR_16->decoder = FUNC_32(&VAR_16->v4l2_dev, VAR_16->adapter,
        "adv7180", VAR_16->config->i2c_addr,
        ((void*)0));
 if (!VAR_16->decoder) {
  VAR_15 = -VAR_1;
  FUNC_2(&VAR_13->dev, "no decoder found\n");
  goto vunreg;
 }

 FUNC_10(VAR_16->adapter);
 FUNC_33(VAR_16->decoder, VAR_8, VAR_10, 0);

 FUNC_28(VAR_16);

 FUNC_4(&VAR_13->dev, "STA2X11 Video Input Port (VIP) loaded\n");
 return 0;

vunreg:
 FUNC_36(&VAR_16->video_dev, ((void*)0));
vrelease:
 FUNC_37(&VAR_16->video_dev);
 FUNC_6(VAR_13->irq, VAR_16);
release_buf:
 FUNC_14(VAR_13);
unmap:
 FUNC_34(&VAR_16->vb_vidq);
 FUNC_18(VAR_13, VAR_16->iomem);
release:
 FUNC_19(VAR_13);
unreg:
 FUNC_31(&VAR_16->v4l2_dev);
free_mem:
 FUNC_11(VAR_16);
release_gpios:
 FUNC_38(&VAR_13->dev, VAR_17->reset_pin, VAR_17->reset_name);
 FUNC_38(&VAR_13->dev, VAR_17->pwr_pin, VAR_17->pwr_name);
disable:




 return VAR_15;
}
