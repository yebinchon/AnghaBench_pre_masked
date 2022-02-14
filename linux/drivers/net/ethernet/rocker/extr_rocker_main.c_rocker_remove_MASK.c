
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rocker {int pdev; int hw_addr; int rocker_owq; int fib_nb; } ;
struct pci_dev {int dummy; } ;
struct notifier_block {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct rocker*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct rocker*) ;
 int FUNC_4 (int ) ;
 struct rocker* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct rocker*) ;
 int FUNC_8 (struct rocker*) ;
 int FUNC_9 (struct rocker*,int ) ;
 int FUNC_10 (struct rocker*) ;
 struct notifier_block VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (struct rocker*,int ,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct notifier_block*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static void FUNC_15(struct pci_dev *VAR_6)
{
 struct rocker *VAR_7 = FUNC_5(VAR_6);
 struct notifier_block *VAR_8;

 VAR_8 = &VAR_4;
 FUNC_13(VAR_8);

 FUNC_14(&VAR_5);
 FUNC_12(&VAR_7->fib_nb);
 FUNC_10(VAR_7);
 FUNC_11(VAR_7, VAR_0, VAR_1);
 FUNC_0(VAR_7->rocker_owq);
 FUNC_1(FUNC_9(VAR_7, VAR_3), VAR_7);
 FUNC_1(FUNC_9(VAR_7, VAR_2), VAR_7);
 FUNC_7(VAR_7);
 FUNC_8(VAR_7);
 FUNC_2(VAR_7->hw_addr);
 FUNC_6(VAR_7->pdev);
 FUNC_4(VAR_7->pdev);
 FUNC_3(VAR_7);
}
