
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dev; } ;
struct myrb_sge {int dummy; } ;
struct myrb_hba {int monitor_work; int work_q; TYPE_1__* host; int * sg_pool; int * dcdb_pool; int work_q_name; } ;
struct myrb_dcdb {int dummy; } ;
struct TYPE_2__ {size_t sg_tablesize; int host_no; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (char*,int *,int,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,int *,int) ;
 int FUNC_5 (int ,TYPE_1__*,char*) ;
 int FUNC_6 (int ,int,char*,int) ;

__attribute__((used)) static bool FUNC_7(struct pci_dev *VAR_2, struct myrb_hba *VAR_3)
{
 size_t VAR_4, VAR_5;

 VAR_5 = sizeof(struct myrb_sge);
 VAR_4 = VAR_3->host->sg_tablesize * VAR_5;
 VAR_3->sg_pool = FUNC_2("myrb_sg", &VAR_2->dev,
          VAR_4, VAR_5, 0);
 if (VAR_3->sg_pool == ((void*)0)) {
  FUNC_5(VAR_0, VAR_3->host,
        "Failed to allocate SG pool\n");
  return 0;
 }

 VAR_3->dcdb_pool = FUNC_2("myrb_dcdb", &VAR_2->dev,
           sizeof(struct myrb_dcdb),
           sizeof(unsigned int), 0);
 if (!VAR_3->dcdb_pool) {
  FUNC_3(VAR_3->sg_pool);
  VAR_3->sg_pool = ((void*)0);
  FUNC_5(VAR_0, VAR_3->host,
        "Failed to allocate DCDB pool\n");
  return 0;
 }

 FUNC_6(VAR_3->work_q_name, sizeof(VAR_3->work_q_name),
   "myrb_wq_%d", VAR_3->host->host_no);
 VAR_3->work_q = FUNC_1(VAR_3->work_q_name);
 if (!VAR_3->work_q) {
  FUNC_3(VAR_3->dcdb_pool);
  VAR_3->dcdb_pool = ((void*)0);
  FUNC_3(VAR_3->sg_pool);
  VAR_3->sg_pool = ((void*)0);
  FUNC_5(VAR_0, VAR_3->host,
        "Failed to create workqueue\n");
  return 0;
 }




 FUNC_0(&VAR_3->monitor_work, VAR_1);
 FUNC_4(VAR_3->work_q, &VAR_3->monitor_work, 1);

 return 1;
}
