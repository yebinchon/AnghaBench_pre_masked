
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pci_device_id {int device; int vendor; } ;
struct pci_dev {scalar_t__ subsystem_vendor; int dev; } ;
struct TYPE_6__ {scalar_t__ timeout; int * parent; scalar_t__ pretimeout; int status; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,...) ;
 int VAR_8 ;
 TYPE_1__ VAR_9 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (struct pci_dev*) ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 char* VAR_14 ;
 char* FUNC_6 (char*,int ) ;
 int VAR_15 ;
 int FUNC_7 (struct pci_dev*) ;
 scalar_t__ FUNC_8 (struct pci_dev*) ;
 void* FUNC_9 (struct pci_dev*,int,int) ;
 int FUNC_10 (struct pci_dev*,void*) ;
 scalar_t__ FUNC_11 (int ,struct pci_dev*) ;
 void* VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_12 (int ,int *) ;
 int VAR_18 ;
 int FUNC_13 (TYPE_1__*,int ,int *) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*,int ) ;
 int FUNC_16 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_17(struct pci_dev *VAR_19,
     const struct pci_device_id *VAR_20)
{
 int VAR_21;






 if (VAR_19->subsystem_vendor != VAR_4 &&
     VAR_19->subsystem_vendor != VAR_5) {
  FUNC_2(&VAR_19->dev,
   "This server does not have an iLO2+ ASIC.\n");
  return -VAR_0;
 }

 if (FUNC_11(VAR_8, VAR_19)) {
  FUNC_0(&VAR_19->dev, "Not supported on this device\n");
  return -VAR_0;
 }

 if (FUNC_8(VAR_19)) {
  FUNC_2(&VAR_19->dev,
   "Not possible to enable PCI Device: 0x%x:0x%x.\n",
   VAR_20->vendor, VAR_20->device);
  return -VAR_0;
 }

 VAR_16 = FUNC_9(VAR_19, 1, 0x80);
 if (!VAR_16) {
  FUNC_2(&VAR_19->dev,
   "Unable to detect the iLO2+ server memory.\n");
  VAR_21 = -VAR_1;
  goto error_pci_iomap;
 }
 VAR_10 = VAR_16 + 0x6e;
 VAR_12 = VAR_16 + 0x70;
 VAR_11 = VAR_16 + 0x72;


 if (FUNC_4()) {
  FUNC_1(&VAR_19->dev, "timer is running\n");
  FUNC_12(VAR_7, &VAR_9.status);
 }


 VAR_21 = FUNC_5(VAR_19);
 if (VAR_21 != 0)
  goto error_init_nmi_decoding;

 FUNC_16(&VAR_9);
 FUNC_15(&VAR_9, VAR_15);
 FUNC_13(&VAR_9, VAR_18, ((void*)0));

 if (VAR_17 && VAR_9.timeout <= VAR_6) {
  FUNC_2(&VAR_19->dev, "timeout <= pretimeout. Setting pretimeout to zero\n");
  VAR_17 = 0;
 }
 VAR_9.pretimeout = VAR_17 ? VAR_6 : 0;
 VAR_14 = FUNC_6(VAR_14, VAR_2);

 VAR_9.parent = &VAR_19->dev;
 VAR_21 = FUNC_14(&VAR_9);
 if (VAR_21 < 0)
  goto error_wd_register;

 FUNC_1(&VAR_19->dev, "HPE Watchdog Timer Driver: Version: %s\n",
    VAR_3);
 FUNC_1(&VAR_19->dev, "timeout: %d seconds (nowayout=%d)\n",
    VAR_9.timeout, VAR_15);
 FUNC_1(&VAR_19->dev, "pretimeout: %s.\n",
    VAR_17 ? "on" : "off");
 FUNC_1(&VAR_19->dev, "kdumptimeout: %d.\n", VAR_14);

 if (VAR_19->subsystem_vendor == VAR_5)
  VAR_13 = 1;

 return 0;

error_wd_register:
 FUNC_3();
error_init_nmi_decoding:
 FUNC_10(VAR_19, VAR_16);
error_pci_iomap:
 FUNC_7(VAR_19);
 return VAR_21;
}
