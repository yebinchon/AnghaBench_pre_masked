
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int subordinate; scalar_t__ d3cold_delay; int imm_ready; scalar_t__ runtime_d3cold; } ;
typedef scalar_t__ pci_power_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct pci_dev*,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1, pci_power_t VAR_2)
{
 if (VAR_2 == VAR_0) {
  FUNC_1(VAR_1, VAR_0);







  if (VAR_1->runtime_d3cold) {
   if (VAR_1->d3cold_delay && !VAR_1->imm_ready)
    FUNC_0(VAR_1->d3cold_delay);






   FUNC_2(VAR_1->subordinate);
  }
 }
}
