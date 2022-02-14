
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;
struct parport_serial_private {int num_par; int * port; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct parport_serial_private* FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct pci_dev*,struct pci_device_id const*) ;
 int FUNC_3 (struct pci_dev*,struct parport_serial_private*) ;
 int FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*,struct pci_device_id const*) ;

__attribute__((used)) static int FUNC_6(struct pci_dev *VAR_2,
        const struct pci_device_id *VAR_3)
{
 struct parport_serial_private *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(&VAR_2->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return -VAR_0;

 FUNC_3 (VAR_2, VAR_4);

 VAR_5 = FUNC_4(VAR_2);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_2(VAR_2, VAR_3);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_5(VAR_2, VAR_3);
 if (VAR_5) {
  int VAR_6;
  for (VAR_6 = 0; VAR_6 < VAR_4->num_par; VAR_6++)
   FUNC_1 (VAR_4->port[VAR_6]);
  return VAR_5;
 }

 return 0;
}
