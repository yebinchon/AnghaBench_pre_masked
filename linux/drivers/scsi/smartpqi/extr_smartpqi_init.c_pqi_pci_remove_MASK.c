
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pqi_ctrl_info {int in_shutdown; } ;
struct pci_dev {int dummy; } ;


 struct pqi_ctrl_info* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pqi_ctrl_info*) ;

__attribute__((used)) static void FUNC_2(struct pci_dev *VAR_0)
{
 struct pqi_ctrl_info *VAR_1;

 VAR_1 = FUNC_0(VAR_0);
 if (!VAR_1)
  return;

 VAR_1->in_shutdown = 1;

 FUNC_1(VAR_1);
}
