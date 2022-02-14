
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_service_card {int * sleep_cookie_vbase; int sleep_cookie_pbase; int dev; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int FUNC_0 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_1(struct mwifiex_adapter *VAR_0)
{
 struct pcie_service_card *VAR_1;

 if (!VAR_0)
  return 0;

 VAR_1 = VAR_0->card;

 if (VAR_1 && VAR_1->sleep_cookie_vbase) {
  FUNC_0(VAR_1->dev, sizeof(u32),
        VAR_1->sleep_cookie_vbase,
        VAR_1->sleep_cookie_pbase);
  VAR_1->sleep_cookie_vbase = ((void*)0);
 }

 return 0;
}
