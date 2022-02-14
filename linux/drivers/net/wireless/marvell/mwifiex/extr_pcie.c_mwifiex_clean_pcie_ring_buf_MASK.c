
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_service_card {int txbd_flush; int txbd_rdptr; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mwifiex_adapter*,int ,char*) ;
 int FUNC_1 (struct pcie_service_card*,int ) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct mwifiex_adapter *VAR_3)
{
 struct pcie_service_card *VAR_4 = VAR_3->card;

 if (!FUNC_1(VAR_4, VAR_4->txbd_rdptr)) {
  VAR_4->txbd_flush = 1;



  if (FUNC_2(VAR_3, VAR_2,
          VAR_0)) {
   FUNC_0(VAR_3, VAR_1,
        "failed to assert dnld-rdy interrupt.\n");
   return -1;
  }
 }
 return 0;
}
