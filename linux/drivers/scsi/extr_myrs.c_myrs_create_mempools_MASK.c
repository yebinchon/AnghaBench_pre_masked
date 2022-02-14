
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct myrs_sge {int dummy; } ;
struct myrs_hba {int monitor_work; int work_q; int * sense_pool; int * sg_pool; int * dcdb_pool; int work_q_name; struct Scsi_Host* host; } ;
struct Scsi_Host {size_t sg_tablesize; int host_no; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char*,int *,size_t,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,struct Scsi_Host*,char*) ;
 int FUNC_6 (int ,int,char*,int) ;

__attribute__((used)) static bool FUNC_7(struct pci_dev *VAR_4, struct myrs_hba *VAR_5)
{
 struct Scsi_Host *VAR_6 = VAR_5->host;
 size_t VAR_7, VAR_8;

 VAR_8 = sizeof(struct myrs_sge);
 VAR_7 = VAR_6->sg_tablesize * VAR_8;
 VAR_5->sg_pool = FUNC_2("myrs_sg", &VAR_4->dev,
          VAR_7, VAR_8, 0);
 if (VAR_5->sg_pool == ((void*)0)) {
  FUNC_5(VAR_0, VAR_6,
        "Failed to allocate SG pool\n");
  return 0;
 }

 VAR_5->sense_pool = FUNC_2("myrs_sense", &VAR_4->dev,
      VAR_2, sizeof(int), 0);
 if (VAR_5->sense_pool == ((void*)0)) {
  FUNC_3(VAR_5->sg_pool);
  VAR_5->sg_pool = ((void*)0);
  FUNC_5(VAR_0, VAR_6,
        "Failed to allocate sense data pool\n");
  return 0;
 }

 VAR_5->dcdb_pool = FUNC_2("myrs_dcdb", &VAR_4->dev,
     VAR_1,
     sizeof(unsigned char), 0);
 if (!VAR_5->dcdb_pool) {
  FUNC_3(VAR_5->sg_pool);
  VAR_5->sg_pool = ((void*)0);
  FUNC_3(VAR_5->sense_pool);
  VAR_5->sense_pool = ((void*)0);
  FUNC_5(VAR_0, VAR_6,
        "Failed to allocate DCDB pool\n");
  return 0;
 }

 FUNC_6(VAR_5->work_q_name, sizeof(VAR_5->work_q_name),
   "myrs_wq_%d", VAR_6->host_no);
 VAR_5->work_q = FUNC_1(VAR_5->work_q_name);
 if (!VAR_5->work_q) {
  FUNC_3(VAR_5->dcdb_pool);
  VAR_5->dcdb_pool = ((void*)0);
  FUNC_3(VAR_5->sg_pool);
  VAR_5->sg_pool = ((void*)0);
  FUNC_3(VAR_5->sense_pool);
  VAR_5->sense_pool = ((void*)0);
  FUNC_5(VAR_0, VAR_6,
        "Failed to create workqueue\n");
  return 0;
 }


 FUNC_0(&VAR_5->monitor_work, VAR_3);
 FUNC_4(VAR_5->work_q, &VAR_5->monitor_work, 1);

 return 1;
}
