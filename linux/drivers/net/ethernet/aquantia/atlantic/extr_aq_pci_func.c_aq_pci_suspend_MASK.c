
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct aq_nic_s {int dummy; } ;
typedef int pm_message_t ;


 int FUNC_0 (struct aq_nic_s*,int *) ;
 struct aq_nic_s* FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(struct pci_dev *VAR_0, pm_message_t VAR_1)
{
 struct aq_nic_s *VAR_2 = FUNC_1(VAR_0);

 return FUNC_0(VAR_2, &VAR_1);
}
