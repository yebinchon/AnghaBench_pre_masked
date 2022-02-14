
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int nr; int dev; int * line; } ;
struct pci_serial_quirk {int (* exit ) (int ) ;} ;


 struct pci_serial_quirk* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct serial_private *VAR_0)
{
 struct pci_serial_quirk *VAR_1;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->nr; VAR_2++)
  FUNC_1(VAR_0->line[VAR_2]);




 VAR_1 = FUNC_0(VAR_0->dev);
 if (VAR_1->exit)
  VAR_1->exit(VAR_0->dev);
}
