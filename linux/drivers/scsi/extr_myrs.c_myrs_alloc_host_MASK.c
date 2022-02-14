
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dummy; } ;
struct myrs_hba {struct Scsi_Host* host; int cinfo_mutex; int dcmd_mutex; } ;
struct Scsi_Host {int max_cmd_len; int max_lun; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 struct Scsi_Host* FUNC_1 (int *,int) ;
 struct myrs_hba* FUNC_2 (struct Scsi_Host*) ;

__attribute__((used)) static struct myrs_hba *FUNC_3(struct pci_dev *VAR_1,
  const struct pci_device_id *VAR_2)
{
 struct Scsi_Host *VAR_3;
 struct myrs_hba *VAR_4;

 VAR_3 = FUNC_1(&VAR_0, sizeof(struct myrs_hba));
 if (!VAR_3)
  return ((void*)0);

 VAR_3->max_cmd_len = 16;
 VAR_3->max_lun = 256;
 VAR_4 = FUNC_2(VAR_3);
 FUNC_0(&VAR_4->dcmd_mutex);
 FUNC_0(&VAR_4->cinfo_mutex);
 VAR_4->host = VAR_3;

 return VAR_4;
}
