
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct qlcnic_adapter {int state; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct qlcnic_adapter*,int ) ;
 int VAR_3 ;
 struct qlcnic_adapter* FUNC_1 (struct pci_dev*) ;
 int VAR_4 ;
 int FUNC_2 (struct qlcnic_adapter*,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_5)
{
 u32 VAR_6;
 struct qlcnic_adapter *VAR_7 = FUNC_1(VAR_5);

 VAR_6 = FUNC_0(VAR_7, VAR_1);
 if (VAR_6 == VAR_2 && FUNC_3(VAR_3,
           &VAR_7->state))
  FUNC_2(VAR_7, VAR_4,
         VAR_0);
}
