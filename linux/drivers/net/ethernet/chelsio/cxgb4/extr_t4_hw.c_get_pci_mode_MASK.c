
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_params {int speed; int width; } ;
struct adapter {int pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*) ;

__attribute__((used)) static void FUNC_2(struct adapter *VAR_3, struct pci_params *VAR_4)
{
 u16 VAR_5;

 if (FUNC_0(VAR_3->pdev)) {
  FUNC_1(VAR_3->pdev, VAR_0, &VAR_5);
  VAR_4->speed = VAR_5 & VAR_1;
  VAR_4->width = (VAR_5 & VAR_2) >> 4;
 }
}
