
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_0 (int *,char*,unsigned int) ;
 int FUNC_1 (int *,unsigned int,unsigned long,char*) ;
 int FUNC_2 (unsigned int,int) ;
 int FUNC_3 (int,int) ;

__attribute__((used)) static int FUNC_4(struct pci_dev *VAR_4)
{
 unsigned long VAR_5 = VAR_0 | VAR_2 | VAR_1;
 unsigned VAR_6 = VAR_3;
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_4->dev, VAR_6, VAR_5,
        "minnow_phy_reset");
 if (VAR_7) {
  FUNC_0(&VAR_4->dev,
   "ERR: Can't request PHY reset GPIO line '%d'\n", VAR_6);
  return VAR_7;
 }

 FUNC_2(VAR_6, 0);
 FUNC_3(1250, 1500);
 FUNC_2(VAR_6, 1);
 FUNC_3(1250, 1500);

 return VAR_7;
}
