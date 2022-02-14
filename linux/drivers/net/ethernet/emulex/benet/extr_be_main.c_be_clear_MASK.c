
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct be_resources {int member_0; } ;
struct be_adapter {int flags; int pool_res; struct pci_dev* pdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct be_adapter*,int ,struct be_resources*) ;
 int FUNC_1 (struct be_adapter*) ;
 int FUNC_2 (struct be_adapter*) ;
 int FUNC_3 (struct be_adapter*,int ,int ,struct be_resources*) ;
 int FUNC_4 (struct be_adapter*) ;
 int FUNC_5 (struct be_adapter*) ;
 int FUNC_6 (struct be_adapter*) ;
 scalar_t__ FUNC_7 (struct be_adapter*) ;
 int FUNC_8 (struct be_adapter*) ;
 int VAR_1 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct pci_dev*) ;
 int FUNC_11 (struct pci_dev*) ;
 scalar_t__ FUNC_12 (struct be_adapter*) ;
 scalar_t__ FUNC_13 (struct be_adapter*) ;

__attribute__((used)) static int FUNC_14(struct be_adapter *VAR_2)
{
 struct pci_dev *VAR_3 = VAR_2->pdev;
 struct be_resources VAR_4 = {0};

 FUNC_1(VAR_2);

 FUNC_9(VAR_1);

 if (FUNC_13(VAR_2))
  FUNC_8(VAR_2);




 if (FUNC_12(VAR_2) && FUNC_7(VAR_2) &&
     !FUNC_11(VAR_3)) {
  FUNC_0(VAR_2,
        FUNC_10(VAR_3),
        &VAR_4);
  FUNC_3(VAR_2, VAR_2->pool_res,
     FUNC_10(VAR_3),
     &VAR_4);
 }

 FUNC_4(VAR_2);

 FUNC_5(VAR_2);

 FUNC_2(VAR_2);

 FUNC_6(VAR_2);
 VAR_2->flags &= ~VAR_0;
 return 0;
}
