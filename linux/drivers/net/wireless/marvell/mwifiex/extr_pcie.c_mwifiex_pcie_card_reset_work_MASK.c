
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_service_card {int dev; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void FUNC_1(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1 = VAR_0->card;




 FUNC_0(VAR_1->dev);
}
