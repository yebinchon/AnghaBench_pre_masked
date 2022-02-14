
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mlxsw_pci_mem_item {int buf; int mapaddr; int size; } ;
struct mlxsw_pci {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct pci_dev*,int ,int *) ;

__attribute__((used)) static int FUNC_2(struct mlxsw_pci *VAR_2,
    struct mlxsw_pci_mem_item *VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->pdev;
 int VAR_5 = 0;

 VAR_3->size = VAR_1;
 VAR_3->buf = FUNC_1(VAR_4, VAR_1,
      &VAR_3->mapaddr);
 if (!VAR_3->buf) {
  FUNC_0(&VAR_4->dev, "Failed allocating memory for mailbox\n");
  VAR_5 = -VAR_0;
 }

 return VAR_5;
}
