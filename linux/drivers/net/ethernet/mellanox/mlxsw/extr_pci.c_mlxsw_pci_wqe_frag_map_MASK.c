
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct mlxsw_pci {struct pci_dev* pdev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,int,int ) ;
 int FUNC_2 (char*,int,size_t) ;
 int FUNC_3 (struct pci_dev*,int ) ;
 int FUNC_4 (struct pci_dev*,char*,size_t,int) ;
 scalar_t__ FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct mlxsw_pci *VAR_1, char *VAR_2,
      int VAR_3, char *VAR_4, size_t VAR_5,
      int VAR_6)
{
 struct pci_dev *VAR_7 = VAR_1->pdev;
 dma_addr_t VAR_8;

 VAR_8 = FUNC_4(VAR_7, VAR_4, VAR_5, VAR_6);
 if (FUNC_5(FUNC_3(VAR_7, VAR_8))) {
  FUNC_0(&VAR_7->dev, "failed to dma map tx frag\n");
  return -VAR_0;
 }
 FUNC_1(VAR_2, VAR_3, VAR_8);
 FUNC_2(VAR_2, VAR_3, VAR_5);
 return 0;
}
