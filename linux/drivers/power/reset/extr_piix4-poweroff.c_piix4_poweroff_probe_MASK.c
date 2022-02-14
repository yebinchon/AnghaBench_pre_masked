
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_device_id {int dummy; } ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,int) ;
 int VAR_1 ;
 int FUNC_1 (struct pci_dev*,int ,char*) ;
 int FUNC_2 (struct pci_dev*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 struct pci_dev* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_6,
    const struct pci_device_id *VAR_7)
{
 int VAR_8;

 if (VAR_4)
  return -VAR_0;


 VAR_8 = FUNC_1(VAR_6, VAR_2,
     "PIIX4 PM IO registers");
 if (VAR_8) {
  FUNC_0(&VAR_6->dev, "failed to request PM IO registers: %d\n",
   VAR_8);
  return VAR_8;
 }

 VAR_4 = VAR_6;
 VAR_1 = FUNC_2(VAR_6, VAR_2);
 VAR_5 = VAR_3;

 return 0;
}
