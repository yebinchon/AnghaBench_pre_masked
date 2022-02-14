
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct beiscsi_hba {int interface_handle; int pcidev; struct Scsi_Host* shost; } ;
struct Scsi_Host {int transportt; int max_lun; int max_cmd_len; scalar_t__ max_channel; int max_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 struct Scsi_Host* FUNC_1 (int *,int,int ) ;
 struct beiscsi_hba* FUNC_2 (struct Scsi_Host*) ;
 int FUNC_3 (struct beiscsi_hba*,int ,int) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct beiscsi_hba*) ;

__attribute__((used)) static struct beiscsi_hba *FUNC_6(struct pci_dev *VAR_5)
{
 struct beiscsi_hba *VAR_6;
 struct Scsi_Host *VAR_7;

 VAR_7 = FUNC_1(&VAR_4, sizeof(*VAR_6), 0);
 if (!VAR_7) {
  FUNC_0(&VAR_5->dev,
   "beiscsi_hba_alloc - iscsi_host_alloc failed\n");
  return ((void*)0);
 }
 VAR_7->max_id = VAR_0;
 VAR_7->max_channel = 0;
 VAR_7->max_cmd_len = VAR_1;
 VAR_7->max_lun = VAR_2;
 VAR_7->transportt = VAR_3;
 VAR_6 = FUNC_2(VAR_7);
 FUNC_3(VAR_6, 0, sizeof(*VAR_6));
 VAR_6->shost = VAR_7;
 VAR_6->pcidev = FUNC_4(VAR_5);
 FUNC_5(VAR_5, VAR_6);
 VAR_6->interface_handle = 0xFFFFFFFF;

 return VAR_6;
}
