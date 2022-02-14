
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct parport_serial_private {int num_par; int * port; scalar_t__ serial; } ;


 int FUNC_0 (int ) ;
 struct parport_serial_private* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_0)
{
 struct parport_serial_private *VAR_1 = FUNC_1 (VAR_0);
 int VAR_2;


 if (VAR_1->serial)
  FUNC_2(VAR_1->serial);


 for (VAR_2 = 0; VAR_2 < VAR_1->num_par; VAR_2++)
  FUNC_0 (VAR_1->port[VAR_2]);

 return;
}
