
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct enetc_si {int ndev; } ;
struct enetc_pf {scalar_t__ num_vfs; } ;
struct enetc_ndev_priv {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct enetc_ndev_priv*) ;
 int FUNC_1 (struct enetc_ndev_priv*) ;
 int FUNC_2 (struct enetc_pf*) ;
 int FUNC_3 (struct enetc_ndev_priv*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct enetc_pf* FUNC_5 (struct enetc_si*) ;
 int FUNC_6 (struct pci_dev*,int ) ;
 int FUNC_7 (int ) ;
 struct enetc_ndev_priv* FUNC_8 (int ) ;
 int FUNC_9 (struct enetc_ndev_priv*,int ,int ,char*,int ,int ) ;
 struct enetc_si* FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_3)
{
 struct enetc_si *VAR_4 = FUNC_10(VAR_3);
 struct enetc_pf *VAR_5 = FUNC_5(VAR_4);
 struct enetc_ndev_priv *VAR_6;

 if (VAR_5->num_vfs)
  FUNC_6(VAR_3, 0);

 VAR_6 = FUNC_8(VAR_4->ndev);
 FUNC_9(VAR_6, VAR_0, VAR_4->ndev, "%s v%s remove\n",
     VAR_1, VAR_2);

 FUNC_11(VAR_4->ndev);

 FUNC_2(VAR_5);
 FUNC_3(VAR_6);

 FUNC_0(VAR_6);

 FUNC_1(VAR_6);

 FUNC_7(VAR_4->ndev);

 FUNC_4(VAR_3);
}
