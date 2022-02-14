
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct denali_controller {int host; int reg; } ;


 int FUNC_0 (struct denali_controller*) ;
 int FUNC_1 (int ) ;
 struct denali_controller* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct denali_controller *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1);
 FUNC_1(VAR_1->reg);
 FUNC_1(VAR_1->host);
}
