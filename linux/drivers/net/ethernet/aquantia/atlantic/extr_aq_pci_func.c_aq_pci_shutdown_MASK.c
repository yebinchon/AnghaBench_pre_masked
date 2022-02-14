
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aq_nic_s {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct aq_nic_s*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct aq_nic_s* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,int) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void FUNC_5(struct pci_dev *VAR_3)
{
 struct aq_nic_s *VAR_4 = FUNC_2(VAR_3);

 FUNC_0(VAR_4);

 FUNC_1(VAR_3);

 if (VAR_2 == VAR_1) {
  FUNC_4(VAR_3, 0);
  FUNC_3(VAR_3, VAR_0);
 }
}
