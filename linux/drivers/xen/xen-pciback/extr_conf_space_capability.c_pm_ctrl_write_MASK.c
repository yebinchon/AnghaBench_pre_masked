
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; } ;
typedef scalar_t__ pci_power_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,scalar_t__) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__) ;
 int FUNC_3 (struct pci_dev*,int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_3, int VAR_4, u16 VAR_5,
    void *VAR_6)
{
 int VAR_7;
 u16 VAR_8;
 pci_power_t VAR_9;

 VAR_7 = FUNC_1(VAR_3, VAR_4, &VAR_8);
 if (VAR_7)
  goto out;

 VAR_9 = (pci_power_t)(VAR_5 & VAR_1);

 VAR_5 &= VAR_2;
 if ((VAR_8 & VAR_2) != VAR_5) {
  VAR_5 = (VAR_8 & ~VAR_2) | VAR_5;
  VAR_7 = FUNC_3(VAR_3, VAR_4, VAR_5);
  if (VAR_7)
   goto out;
 }


 FUNC_0(&VAR_3->dev, "set power state to %x\n", VAR_9);
 VAR_7 = FUNC_2(VAR_3, VAR_9);
 if (VAR_7) {
  VAR_7 = VAR_0;
  goto out;
 }

 out:
 return VAR_7;
}
