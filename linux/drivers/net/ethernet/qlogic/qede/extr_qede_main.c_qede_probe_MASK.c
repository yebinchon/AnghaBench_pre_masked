
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct pci_device_id {int driver_data; } ;
struct pci_dev {int dev; } ;
typedef enum qede_pci_private { ____Placeholder_qede_pci_private } qede_pci_private ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct pci_dev*,int ,int ,int,int ) ;
 int VAR_2 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int,int *,int *) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_3, const struct pci_device_id *VAR_4)
{
 bool VAR_5 = 0;
 u32 VAR_6 = 0;
 u8 VAR_7 = 0;

 switch ((enum qede_pci_private)VAR_4->driver_data) {
 case 128:
  if (VAR_2 & VAR_1)
   FUNC_1(&VAR_3->dev, "Probing a VF\n");
  VAR_5 = 1;
  break;
 default:
  if (VAR_2 & VAR_1)
   FUNC_1(&VAR_3->dev, "Probing a PF\n");
 }

 FUNC_2(VAR_2, &VAR_6, &VAR_7);

 return FUNC_0(VAR_3, VAR_6, VAR_7, VAR_5,
       VAR_0);
}
