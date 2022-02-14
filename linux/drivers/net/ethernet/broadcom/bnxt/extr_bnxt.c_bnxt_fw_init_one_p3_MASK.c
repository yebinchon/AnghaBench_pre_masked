
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct bnxt {int flags; int wol; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*,int ) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,int) ;
 int FUNC_7 (int *,int ) ;

__attribute__((used)) static void FUNC_8(struct bnxt *VAR_1)
{
 struct pci_dev *VAR_2 = VAR_1->pdev;

 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 FUNC_0(VAR_1);
 if (VAR_1->flags & VAR_0)
  FUNC_7(&VAR_2->dev, VAR_1->wol);
 else
  FUNC_6(&VAR_2->dev, 0);

 FUNC_2(VAR_1, FUNC_5());
 FUNC_1(VAR_1);
}
