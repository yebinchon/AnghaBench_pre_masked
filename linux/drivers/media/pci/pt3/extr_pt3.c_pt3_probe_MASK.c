
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_2__ {int * parent; } ;
struct i2c_adapter {int name; TYPE_1__ dev; int * algo_data; int * algo; int owner; } ;
struct pt3_board {int ** regs; struct pt3_board* i2c_buf; struct i2c_adapter i2c_adap; int num_bufs; int lock; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


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
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (struct i2c_adapter*) ;
 int FUNC_8 (struct i2c_adapter*) ;
 int FUNC_9 (struct i2c_adapter*,struct pt3_board*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct pt3_board*) ;
 struct pt3_board* FUNC_12 (int,int ) ;
 struct pt3_board* FUNC_13 (int,int ) ;
 int FUNC_14 (int *) ;
 int VAR_10 ;
 int FUNC_15 (struct pci_dev*) ;
 int FUNC_16 (struct pci_dev*) ;
 void* FUNC_17 (struct pci_dev*,int) ;
 int FUNC_18 (struct pci_dev*,int *) ;
 scalar_t__ FUNC_19 (struct pci_dev*,int ,int*) ;
 int FUNC_20 (struct pci_dev*) ;
 int FUNC_21 (struct pci_dev*,int ) ;
 int FUNC_22 (struct pci_dev*,struct pt3_board*) ;
 int FUNC_23 (struct pci_dev*) ;
 int FUNC_24 (struct pt3_board*,int) ;
 int FUNC_25 (struct pt3_board*,int) ;
 int FUNC_26 (struct pt3_board*,int ) ;
 int FUNC_27 (struct pt3_board*) ;
 int VAR_11 ;
 int FUNC_28 (int ,int ,int) ;

__attribute__((used)) static int FUNC_29(struct pci_dev *VAR_12, const struct pci_device_id *VAR_13)
{
 u8 VAR_14;
 u32 VAR_15;
 int VAR_16, VAR_17;
 struct pt3_board *VAR_18;
 struct i2c_adapter *VAR_19;

 if (FUNC_19(VAR_12, VAR_6, &VAR_14) || VAR_14 != 1)
  return -VAR_1;

 VAR_17 = FUNC_16(VAR_12);
 if (VAR_17 < 0)
  return -VAR_1;
 FUNC_23(VAR_12);

 VAR_17 = FUNC_21(VAR_12, VAR_0);
 if (VAR_17 < 0)
  goto err_disable_device;

 VAR_17 = FUNC_6(&VAR_12->dev, FUNC_0(64));
 if (VAR_17 == 0)
  FUNC_5(&VAR_12->dev, FUNC_0(64));
 else {
  VAR_17 = FUNC_6(&VAR_12->dev, FUNC_0(32));
  if (VAR_17 == 0)
   FUNC_5(&VAR_12->dev, FUNC_0(32));
  else {
   FUNC_2(&VAR_12->dev, "Failed to set DMA mask\n");
   goto err_release_regions;
  }
  FUNC_3(&VAR_12->dev, "Use 32bit DMA\n");
 }

 VAR_18 = FUNC_13(sizeof(*VAR_18), VAR_3);
 if (!VAR_18) {
  VAR_17 = -VAR_2;
  goto err_release_regions;
 }
 FUNC_22(VAR_12, VAR_18);
 VAR_18->pdev = VAR_12;
 FUNC_14(&VAR_18->lock);
 VAR_18->regs[0] = FUNC_17(VAR_12, 0);
 VAR_18->regs[1] = FUNC_17(VAR_12, 2);
 if (VAR_18->regs[0] == ((void*)0) || VAR_18->regs[1] == ((void*)0)) {
  FUNC_2(&VAR_12->dev, "Failed to ioremap\n");
  VAR_17 = -VAR_2;
  goto err_kfree;
 }

 VAR_15 = FUNC_10(VAR_18->regs[0] + VAR_8);
 if ((VAR_15 >> 16) != 0x0301) {
  FUNC_4(&VAR_12->dev, "PT%d, I/F-ver.:%d not supported\n",
    VAR_15 >> 24, (VAR_15 & 0x00ff0000) >> 16);
  VAR_17 = -VAR_1;
  goto err_iounmap;
 }

 VAR_18->num_bufs = FUNC_1(VAR_10, VAR_5, VAR_4);

 VAR_18->i2c_buf = FUNC_12(sizeof(*VAR_18->i2c_buf), VAR_3);
 if (VAR_18->i2c_buf == ((void*)0)) {
  VAR_17 = -VAR_2;
  goto err_iounmap;
 }
 VAR_19 = &VAR_18->i2c_adap;
 VAR_19->owner = VAR_9;
 VAR_19->algo = &VAR_11;
 VAR_19->algo_data = ((void*)0);
 VAR_19->dev.parent = &VAR_12->dev;
 FUNC_28(VAR_19->name, VAR_0, sizeof(VAR_19->name));
 FUNC_9(VAR_19, VAR_18);
 VAR_17 = FUNC_7(VAR_19);
 if (VAR_17 < 0)
  goto err_i2cbuf;

 for (VAR_16 = 0; VAR_16 < VAR_7; VAR_16++) {
  VAR_17 = FUNC_24(VAR_18, VAR_16);
  if (VAR_17 < 0)
   break;

  VAR_17 = FUNC_25(VAR_18, VAR_16);
  if (VAR_17 < 0)
   break;
 }
 if (VAR_16 < VAR_7) {
  FUNC_2(&VAR_12->dev, "Failed to create FE%d\n", VAR_16);
  goto err_cleanup_adapters;
 }

 VAR_17 = FUNC_27(VAR_18);
 if (VAR_17 < 0) {
  FUNC_2(&VAR_12->dev, "Failed to init frontends\n");
  VAR_16 = VAR_7 - 1;
  goto err_cleanup_adapters;
 }

 FUNC_3(&VAR_12->dev,
   "successfully init'ed PT%d (fw:0x%02x, I/F:0x%02x)\n",
   VAR_15 >> 24, (VAR_15 >> 8) & 0xff, (VAR_15 >> 16) & 0xff);
 return 0;

err_cleanup_adapters:
 while (VAR_16 >= 0)
  FUNC_26(VAR_18, VAR_16--);
 FUNC_8(VAR_19);
err_i2cbuf:
 FUNC_11(VAR_18->i2c_buf);
err_iounmap:
 if (VAR_18->regs[0])
  FUNC_18(VAR_12, VAR_18->regs[0]);
 if (VAR_18->regs[1])
  FUNC_18(VAR_12, VAR_18->regs[1]);
err_kfree:
 FUNC_11(VAR_18);
err_release_regions:
 FUNC_20(VAR_12);
err_disable_device:
 FUNC_15(VAR_12);
 return VAR_17;

}
