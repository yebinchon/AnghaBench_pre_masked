
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct serial_private {int dummy; } ;
struct pciserial_board {scalar_t__ num_ports; } ;
struct pci_device_id {size_t driver_data; } ;
struct pci_dev {int dummy; } ;
struct parport_serial_private {struct serial_private* serial; } ;


 scalar_t__ FUNC_0 (struct serial_private*) ;
 int FUNC_1 (struct serial_private*) ;
 struct parport_serial_private* FUNC_2 (struct pci_dev*) ;
 struct pciserial_board* VAR_0 ;
 struct serial_private* FUNC_3 (struct pci_dev*,struct pciserial_board*) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_1, const struct pci_device_id *VAR_2)
{
 struct parport_serial_private *VAR_3 = FUNC_2 (VAR_1);
 struct pciserial_board *VAR_4;
 struct serial_private *VAR_5;

 VAR_4 = &VAR_0[VAR_2->driver_data];
 if (VAR_4->num_ports == 0)
  return 0;

 VAR_5 = FUNC_3(VAR_1, VAR_4);
 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_3->serial = VAR_5;
 return 0;
}
