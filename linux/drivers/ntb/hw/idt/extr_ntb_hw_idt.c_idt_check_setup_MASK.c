
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pci_dev {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct pci_dev*,int ,int*) ;

__attribute__((used)) static int FUNC_3(struct pci_dev *VAR_6)
{
 u32 VAR_7;
 int VAR_8;


 VAR_8 = FUNC_2(VAR_6, VAR_5, &VAR_7);
 if (VAR_8 != 0) {
  FUNC_1(&VAR_6->dev,
   "Failed to read BARSETUP0 config register");
  return VAR_8;
 }


 if (!(VAR_7 & VAR_1) || !(VAR_7 & VAR_2)) {
  FUNC_1(&VAR_6->dev, "BAR0 doesn't map config space");
  return -VAR_0;
 }


 if ((VAR_7 & VAR_4) != VAR_3) {
  FUNC_1(&VAR_6->dev, "Invalid size of config space");
  return -VAR_0;
 }

 FUNC_0(&VAR_6->dev, "NTB device pre-initialized correctly");

 return 0;
}
