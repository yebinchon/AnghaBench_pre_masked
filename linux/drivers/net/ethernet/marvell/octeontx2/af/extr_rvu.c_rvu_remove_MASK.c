
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvu {struct rvu* hw; int afpf_wq_info; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,struct rvu*) ;
 int FUNC_1 (struct pci_dev*) ;
 struct rvu* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*,int *) ;
 int FUNC_5 (struct rvu*) ;
 int FUNC_6 (struct rvu*) ;
 int FUNC_7 (struct rvu*) ;
 int FUNC_8 (struct rvu*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct rvu*) ;
 int FUNC_11 (struct rvu*) ;

__attribute__((used)) static void FUNC_12(struct pci_dev *VAR_0)
{
 struct rvu *VAR_1 = FUNC_2(VAR_0);

 FUNC_11(VAR_1);
 FUNC_7(VAR_1);
 FUNC_5(VAR_1);
 FUNC_9(&VAR_1->afpf_wq_info);
 FUNC_6(VAR_1);
 FUNC_10(VAR_1);
 FUNC_8(VAR_1);

 FUNC_3(VAR_0);
 FUNC_1(VAR_0);
 FUNC_4(VAR_0, ((void*)0));

 FUNC_0(&VAR_0->dev, VAR_1->hw);
 FUNC_0(&VAR_0->dev, VAR_1);
}
