
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dummy; } ;
struct net_device {int dummy; } ;
struct bnxt {int * ctx; int * edev; scalar_t__ sp_event; } ;


 scalar_t__ FUNC_0 (struct bnxt*) ;
 int FUNC_1 (struct bnxt*) ;
 int FUNC_2 (struct bnxt*) ;
 int FUNC_3 (struct bnxt*) ;
 int FUNC_4 (struct bnxt*) ;
 int FUNC_5 (struct bnxt*) ;
 int FUNC_6 (struct bnxt*) ;
 int FUNC_7 (struct bnxt*) ;
 int FUNC_8 (struct bnxt*) ;
 int FUNC_9 (struct bnxt*) ;
 int FUNC_10 (struct bnxt*) ;
 int FUNC_11 (struct bnxt*) ;
 int FUNC_12 (struct bnxt*) ;
 int FUNC_13 (struct bnxt*) ;
 int FUNC_14 (struct net_device*) ;
 int FUNC_15 (int *) ;
 struct bnxt* FUNC_16 (struct net_device*) ;
 int FUNC_17 (struct pci_dev*) ;
 struct net_device* FUNC_18 (struct pci_dev*) ;
 int FUNC_19 (struct net_device*) ;

__attribute__((used)) static void FUNC_20(struct pci_dev *VAR_0)
{
 struct net_device *VAR_1 = FUNC_18(VAR_0);
 struct bnxt *VAR_2 = FUNC_16(VAR_1);

 if (FUNC_0(VAR_2)) {
  FUNC_13(VAR_2);
  FUNC_5(VAR_2);
 }

 FUNC_17(VAR_0);
 FUNC_19(VAR_1);
 FUNC_12(VAR_2);
 FUNC_1(VAR_2);
 VAR_2->sp_event = 0;

 FUNC_3(VAR_2);
 FUNC_11(VAR_2);
 FUNC_8(VAR_2);
 FUNC_9(VAR_2);
 FUNC_6(VAR_2);
 FUNC_4(VAR_2);
 FUNC_15(VAR_2->edev);
 VAR_2->edev = ((void*)0);
 FUNC_2(VAR_2);
 FUNC_7(VAR_2);
 FUNC_15(VAR_2->ctx);
 VAR_2->ctx = ((void*)0);
 FUNC_10(VAR_2);
 FUNC_14(VAR_1);
}
