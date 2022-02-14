
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct st_hba {TYPE_1__* pdev; } ;
struct pci_bus {int self; } ;
struct TYPE_4__ {int * saved_config_space; struct pci_bus* bus; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int ,int*) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct st_hba *VAR_5)
{
 struct pci_bus *VAR_6;
 int VAR_7;
 u16 VAR_8;
 u8 VAR_9;

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_2(VAR_5->pdev, VAR_7 * 4,
   &VAR_5->pdev->saved_config_space[VAR_7]);



 VAR_6 = VAR_5->pdev->bus;
 FUNC_1(VAR_6->self, VAR_1, &VAR_9);
 VAR_9 |= VAR_2;
 FUNC_4(VAR_6->self, VAR_1, VAR_9);





 FUNC_0(100);
 VAR_9 &= ~VAR_2;
 FUNC_4(VAR_6->self, VAR_1, VAR_9);

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  FUNC_3(VAR_5->pdev, VAR_3, &VAR_8);
  if (VAR_8 != 0xffff && (VAR_8 & VAR_4))
   break;
  FUNC_0(1);
 }

 FUNC_6(5);
 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  FUNC_5(VAR_5->pdev, VAR_7 * 4,
   VAR_5->pdev->saved_config_space[VAR_7]);
}
