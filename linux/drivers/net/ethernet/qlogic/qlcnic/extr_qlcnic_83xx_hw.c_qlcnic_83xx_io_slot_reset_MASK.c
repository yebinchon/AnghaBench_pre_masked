
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qlcnic_adapter {int state; } ;
struct pci_dev {int error_state; } ;
typedef int pci_ers_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 int VAR_5 ;
 int FUNC_1 (struct pci_dev*) ;
 struct qlcnic_adapter* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,int ) ;
 int FUNC_6 (struct qlcnic_adapter*) ;

__attribute__((used)) static pci_ers_result_t FUNC_7(struct pci_dev *VAR_6)
{
 struct qlcnic_adapter *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = 0;

 VAR_6->error_state = VAR_5;
 VAR_8 = FUNC_1(VAR_6);
 if (VAR_8)
  goto disconnect;

 FUNC_5(VAR_6, VAR_0);
 FUNC_4(VAR_6);
 FUNC_3(VAR_6);

 VAR_8 = FUNC_6(VAR_7);
 if (VAR_8 == 0)
  return VAR_2;
disconnect:
 FUNC_0(VAR_3, &VAR_7->state);
 FUNC_0(VAR_4, &VAR_7->state);
 return VAR_1;
}
