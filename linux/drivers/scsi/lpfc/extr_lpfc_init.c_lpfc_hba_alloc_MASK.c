
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct lpfc_hba {scalar_t__ brd_no; int ct_ev_waiters; int ct_ev_lock; int eratt_poll_interval; struct pci_dev* pcidev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct lpfc_hba*) ;
 struct lpfc_hba* FUNC_3 (int,int ) ;
 scalar_t__ FUNC_4 () ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct lpfc_hba *
FUNC_6(struct pci_dev *VAR_2)
{
 struct lpfc_hba *VAR_3;


 VAR_3 = FUNC_3(sizeof(struct lpfc_hba), VAR_0);
 if (!VAR_3) {
  FUNC_1(&VAR_2->dev, "failed to allocate hba struct\n");
  return ((void*)0);
 }


 VAR_3->pcidev = VAR_2;


 VAR_3->brd_no = FUNC_4();
 if (VAR_3->brd_no < 0) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }
 VAR_3->eratt_poll_interval = VAR_1;

 FUNC_5(&VAR_3->ct_ev_lock);
 FUNC_0(&VAR_3->ct_ev_waiters);

 return VAR_3;
}
