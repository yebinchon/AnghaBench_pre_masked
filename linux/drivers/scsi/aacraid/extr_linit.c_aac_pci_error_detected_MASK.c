
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct aac_dev {int handle_pci_error; int scsi_host_ptr; } ;
struct Scsi_Host {int dummy; } ;
typedef int pci_ers_result_t ;
typedef enum pci_channel_state { ____Placeholder_pci_channel_state } pci_channel_state ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_dev*,int ) ;
 int FUNC_1 (struct aac_dev*) ;
 int FUNC_2 (struct aac_dev*) ;
 int FUNC_3 (struct aac_dev*) ;
 int FUNC_4 (int *,char*,int) ;



 int FUNC_5 (struct pci_dev*) ;
 struct Scsi_Host* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ) ;
 struct aac_dev* FUNC_8 (struct Scsi_Host*) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_3,
     enum pci_channel_state VAR_4)
{
 struct Scsi_Host *VAR_5 = FUNC_6(VAR_3);
 struct aac_dev *VAR_6 = FUNC_8(VAR_5);

 FUNC_4(&VAR_3->dev, "aacraid: PCI error detected %x\n", VAR_4);

 switch (VAR_4) {
 case 129:
  return VAR_0;
 case 130:
  VAR_6->handle_pci_error = 1;

  FUNC_7(VAR_6->scsi_host_ptr);
  FUNC_1(VAR_6);
  FUNC_2(VAR_6);
  FUNC_3(VAR_6);

  FUNC_5(VAR_3);
  FUNC_0(VAR_6, 0);

  return VAR_2;
 case 128:
  VAR_6->handle_pci_error = 1;

  FUNC_2(VAR_6);
  return VAR_1;
 }

 return VAR_2;
}
