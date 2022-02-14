
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct enetc_si {int ndev; } ;
struct enetc_ndev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enetc_ndev_priv*) ;
 int FUNC_1 (struct enetc_ndev_priv*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 struct enetc_ndev_priv* FUNC_4 (int ) ;
 int FUNC_5 (struct enetc_ndev_priv*,int ,int ,char*,int ,int ) ;
 struct enetc_si* FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_3)
{
 struct enetc_si *VAR_4 = FUNC_6(VAR_3);
 struct enetc_ndev_priv *VAR_5;

 VAR_5 = FUNC_4(VAR_4->ndev);
 FUNC_5(VAR_5, VAR_0, VAR_4->ndev, "%s v%s remove\n",
     VAR_1, VAR_2);
 FUNC_7(VAR_4->ndev);

 FUNC_0(VAR_5);

 FUNC_1(VAR_5);

 FUNC_3(VAR_4->ndev);

 FUNC_2(VAR_3);
}
