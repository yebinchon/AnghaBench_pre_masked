
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {scalar_t__ driver_data; } ;
struct pci_dev {int dummy; } ;
struct mantis_pci_drvdata {int rc_map_name; struct mantis_hwconfig* hwconfig; } ;
struct mantis_pci {int intmask_lock; int rc_map_name; struct mantis_hwconfig* hwconfig; struct pci_dev* pdev; int verbose; int num; } ;
struct mantis_hwconfig {int * irq_handler; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int,char*,int) ;
 int VAR_5 ;
 int FUNC_1 (struct mantis_pci*) ;
 struct mantis_pci* FUNC_2 (int,int ) ;
 int FUNC_3 (struct mantis_pci*) ;
 int FUNC_4 (struct mantis_pci*) ;
 int FUNC_5 (struct mantis_pci*) ;
 int FUNC_6 (struct mantis_pci*) ;
 int FUNC_7 (struct mantis_pci*) ;
 int FUNC_8 (struct mantis_pci*) ;
 int FUNC_9 (struct mantis_pci*) ;
 int FUNC_10 (struct mantis_pci*) ;
 int FUNC_11 (struct mantis_pci*,int ) ;
 int FUNC_12 (int *) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_13(struct pci_dev *VAR_7,
       const struct pci_device_id *VAR_8)
{
 struct mantis_pci_drvdata *VAR_9;
 struct mantis_pci *VAR_10;
 struct mantis_hwconfig *VAR_11;
 int VAR_12;

 VAR_10 = FUNC_2(sizeof(*VAR_10), VAR_1);
 if (!VAR_10) {
  VAR_12 = -VAR_0;
  goto fail0;
 }

 VAR_9 = (void *)VAR_8->driver_data;
 VAR_10->num = VAR_4;
 VAR_10->verbose = VAR_6;
 VAR_10->pdev = VAR_7;
 VAR_11 = VAR_9->hwconfig;
 VAR_11->irq_handler = &VAR_5;
 VAR_10->hwconfig = VAR_11;
 VAR_10->rc_map_name = VAR_9->rc_map_name;

 FUNC_12(&VAR_10->intmask_lock);

 VAR_12 = FUNC_10(VAR_10);
 if (VAR_12) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis PCI initialization failed <%d>", VAR_12);
  goto fail1;
 }

 VAR_12 = FUNC_11(VAR_10, VAR_3);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis stream control failed <%d>", VAR_12);
  goto fail1;
 }

 VAR_12 = FUNC_8(VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis I2C initialization failed <%d>", VAR_12);
  goto fail2;
 }

 VAR_12 = FUNC_6(VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis MAC address read failed <%d>", VAR_12);
  goto fail2;
 }

 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis DMA initialization failed <%d>", VAR_12);
  goto fail3;
 }

 VAR_12 = FUNC_5(VAR_10);
 if (VAR_12 < 0) {
  FUNC_0(VAR_2, 1, "ERROR: Mantis DVB initialization failed <%d>", VAR_12);
  goto fail4;
 }
 VAR_4++;

 return VAR_12;

fail4:
 FUNC_0(VAR_2, 1, "ERROR: Mantis DMA exit! <%d>", VAR_12);
 FUNC_3(VAR_10);

fail3:
 FUNC_0(VAR_2, 1, "ERROR: Mantis I2C exit! <%d>", VAR_12);
 FUNC_7(VAR_10);

fail2:
 FUNC_0(VAR_2, 1, "ERROR: Mantis PCI exit! <%d>", VAR_12);
 FUNC_9(VAR_10);

fail1:
 FUNC_0(VAR_2, 1, "ERROR: Mantis free! <%d>", VAR_12);
 FUNC_1(VAR_10);

fail0:
 return VAR_12;
}
