
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct Scsi_Host {int host_no; int * work_q; int work_q_name; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct Scsi_Host*,char*,...) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct Scsi_Host*,int *) ;
 int FUNC_4 (int ,int,char*,int) ;

__attribute__((used)) static int
FUNC_5(struct Scsi_Host *VAR_1, struct pci_dev *VAR_2)
{
 int VAR_3 = 0;

 VAR_3 = FUNC_3(VAR_1, &VAR_2->dev);
 if (VAR_3) {
  FUNC_1(VAR_1,
         "snic: scsi_add_host failed. %d\n",
         VAR_3);

  return VAR_3;
 }

 FUNC_0(VAR_1->work_q != ((void*)0));
 FUNC_4(VAR_1->work_q_name, sizeof(VAR_1->work_q_name), "scsi_wq_%d",
   VAR_1->host_no);
 VAR_1->work_q = FUNC_2(VAR_1->work_q_name);
 if (!VAR_1->work_q) {
  FUNC_1(VAR_1, "Failed to Create ScsiHost wq.\n");

  VAR_3 = -VAR_0;
 }

 return VAR_3;
}
