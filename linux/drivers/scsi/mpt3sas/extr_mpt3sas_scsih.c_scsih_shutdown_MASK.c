
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct workqueue_struct {int dummy; } ;
struct pci_dev {int dummy; } ;
struct Scsi_Host {int dummy; } ;
struct MPT3SAS_ADAPTER {int remove_host; int ioc_pg1_copy; scalar_t__ is_aero_ioc; int fw_event_lock; struct workqueue_struct* firmware_event_thread; } ;
typedef int Mpi2ConfigReply_t ;


 int FUNC_0 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_1 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_2 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_3 (struct workqueue_struct*) ;
 int FUNC_4 (struct MPT3SAS_ADAPTER*) ;
 int FUNC_5 (struct MPT3SAS_ADAPTER*,int *,int *) ;
 int FUNC_6 (struct MPT3SAS_ADAPTER*) ;
 struct Scsi_Host* FUNC_7 (struct pci_dev*) ;
 struct MPT3SAS_ADAPTER* FUNC_8 (struct Scsi_Host*) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static void
FUNC_11(struct pci_dev *VAR_0)
{
 struct Scsi_Host *VAR_1 = FUNC_7(VAR_0);
 struct MPT3SAS_ADAPTER *VAR_2 = FUNC_8(VAR_1);
 struct workqueue_struct *VAR_3;
 unsigned long VAR_4;
 Mpi2ConfigReply_t VAR_5;

 VAR_2->remove_host = 1;

 FUNC_6(VAR_2);
 FUNC_0(VAR_2);

 FUNC_1(VAR_2);

 FUNC_9(&VAR_2->fw_event_lock, VAR_4);
 VAR_3 = VAR_2->firmware_event_thread;
 VAR_2->firmware_event_thread = ((void*)0);
 FUNC_10(&VAR_2->fw_event_lock, VAR_4);
 if (VAR_3)
  FUNC_3(VAR_3);




 if (VAR_2->is_aero_ioc)
  FUNC_5(VAR_2, &VAR_5,
    &VAR_2->ioc_pg1_copy);

 FUNC_2(VAR_2);
 FUNC_4(VAR_2);
}
