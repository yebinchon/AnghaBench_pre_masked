
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ devfn; } ;
struct beiscsi_hba {int shost; int recover_port; int hw_check; int state; } ;
typedef int pci_ers_result_t ;
typedef scalar_t__ pci_channel_state_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct beiscsi_hba*,int ) ;
 int FUNC_1 (struct beiscsi_hba*,int ,int ,char*) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (struct pci_dev*) ;
 scalar_t__ FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int) ;

__attribute__((used)) static pci_ers_result_t FUNC_9(struct pci_dev *VAR_7,
  pci_channel_state_t VAR_8)
{
 struct beiscsi_hba *VAR_9 = ((void*)0);

 VAR_9 = (struct beiscsi_hba *)FUNC_6(VAR_7);
 FUNC_7(VAR_0, &VAR_9->state);

 FUNC_1(VAR_9, VAR_2, VAR_1,
      "BM_%d : EEH error detected\n");


 FUNC_3(&VAR_9->hw_check);
 FUNC_2(&VAR_9->recover_port);


 FUNC_4(VAR_9->shost, VAR_5);
 FUNC_0(VAR_9, 0);

 if (VAR_8 == VAR_6) {
  FUNC_1(VAR_9, VAR_2, VAR_1,
       "BM_%d : EEH : State PERM Failure");
  return VAR_3;
 }

 FUNC_5(VAR_7);







 if (VAR_7->devfn == 0)
  FUNC_8(30);

 return VAR_4;
}
