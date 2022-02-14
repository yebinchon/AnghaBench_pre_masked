
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct pcie_service_card {int sleep_cookie_vbase; int sleep_cookie_pbase; int dev; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*,...) ;
 int FUNC_2 (int ,int,int *) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_adapter *VAR_4)
{
 struct pcie_service_card *VAR_5 = VAR_4->card;
 u32 VAR_6;

 VAR_5->sleep_cookie_vbase = FUNC_2(VAR_5->dev, sizeof(u32),
           &VAR_5->sleep_cookie_pbase);
 if (!VAR_5->sleep_cookie_vbase) {
  FUNC_1(VAR_4, VAR_1,
       "pci_alloc_consistent failed!\n");
  return -VAR_0;
 }

 VAR_6 = VAR_2;
 FUNC_3(VAR_6, VAR_5->sleep_cookie_vbase);

 FUNC_1(VAR_4, VAR_3,
      "alloc_scook: sleep cookie=0x%x\n",
      FUNC_0(VAR_5->sleep_cookie_vbase));

 return 0;
}
