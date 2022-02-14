
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sym_dev ;
struct sym_nvram {int host_id; struct pci_dev* pdev; } ;
struct sym_device {int host_id; struct pci_dev* pdev; } ;
struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct Scsi_Host {int dummy; } ;
typedef int nvram ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sym_nvram*,int ,int) ;
 int FUNC_1 (struct pci_dev*) ;
 scalar_t__ FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 scalar_t__ FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct pci_dev*) ;
 scalar_t__ FUNC_7 (struct Scsi_Host*,int *) ;
 int FUNC_8 (struct Scsi_Host*) ;
 int VAR_4 ;
 struct Scsi_Host* FUNC_9 (int *,int ,struct sym_nvram*) ;
 scalar_t__ FUNC_10 (struct sym_nvram*) ;
 scalar_t__ FUNC_11 (struct sym_nvram*) ;
 int FUNC_12 (struct pci_dev*,struct sym_nvram*) ;
 int FUNC_13 (int ,struct pci_dev*) ;
 int FUNC_14 (struct sym_nvram*,struct sym_nvram*) ;
 scalar_t__ FUNC_15 (struct sym_nvram*) ;
 int FUNC_16 (struct sym_nvram*) ;
 scalar_t__ FUNC_17 (struct sym_nvram*) ;

__attribute__((used)) static int FUNC_18(struct pci_dev *VAR_5, const struct pci_device_id *VAR_6)
{
 struct sym_device VAR_7;
 struct sym_nvram VAR_8;
 struct Scsi_Host *VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 1;

 FUNC_0(&VAR_7, 0, sizeof(VAR_7));
 FUNC_0(&VAR_8, 0, sizeof(VAR_8));
 VAR_7.pdev = VAR_5;
 VAR_7.host_id = VAR_2;

 if (FUNC_2(VAR_5))
  goto leave;

 FUNC_6(VAR_5);

 if (FUNC_5(VAR_5, VAR_1))
  goto disable;

 if (FUNC_11(&VAR_7))
  goto free;

 if (FUNC_15(&VAR_7))
  goto free;
 VAR_10 = 1;

 if (FUNC_10(&VAR_7)) {
  VAR_11 = 0;
  goto free;
 }

 if (FUNC_17(&VAR_7))
  goto free;

 FUNC_12(VAR_5, &VAR_7);

 FUNC_14(&VAR_7, &VAR_8);

 VAR_10 = 0;
 VAR_9 = FUNC_9(&VAR_4, VAR_3, &VAR_7);
 if (!VAR_9)
  goto free;

 if (FUNC_7(VAR_9, &VAR_5->dev))
  goto detach;
 FUNC_8(VAR_9);

 VAR_3++;

 return 0;

 detach:
 FUNC_13(FUNC_3(VAR_5), VAR_5);
 free:
 if (VAR_10)
  FUNC_16(&VAR_7);
 FUNC_4(VAR_5);
 disable:
 if (VAR_11)
  FUNC_1(VAR_5);
 leave:
 return -VAR_0;
}
