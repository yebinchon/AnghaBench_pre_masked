
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int data; } ;
struct pcie_service_card {int dev; } ;
struct mwifiex_dma_mapping {size_t len; int addr; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct sk_buff*,struct mwifiex_dma_mapping*) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,size_t,int) ;

__attribute__((used)) static int
FUNC_4(struct mwifiex_adapter *VAR_1, struct sk_buff *VAR_2,
         size_t VAR_3, int VAR_4)
{
 struct pcie_service_card *VAR_5 = VAR_1->card;
 struct mwifiex_dma_mapping VAR_6;

 VAR_6.addr = FUNC_3(VAR_5->dev, VAR_2->data, VAR_3, VAR_4);
 if (FUNC_2(VAR_5->dev, VAR_6.addr)) {
  FUNC_0(VAR_1, VAR_0, "failed to map pci memory!\n");
  return -1;
 }
 VAR_6.len = VAR_3;
 FUNC_1(VAR_2, &VAR_6);
 return 0;
}
