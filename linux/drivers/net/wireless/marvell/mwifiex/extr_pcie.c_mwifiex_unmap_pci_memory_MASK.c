
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcie_service_card {int dev; } ;
struct mwifiex_dma_mapping {int len; int addr; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (struct sk_buff*,struct mwifiex_dma_mapping*) ;
 int FUNC_1 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct mwifiex_adapter *VAR_0,
         struct sk_buff *VAR_1, int VAR_2)
{
 struct pcie_service_card *VAR_3 = VAR_0->card;
 struct mwifiex_dma_mapping VAR_4;

 FUNC_0(VAR_1, &VAR_4);
 FUNC_1(VAR_3->dev, VAR_4.addr, VAR_4.len, VAR_2);
}
