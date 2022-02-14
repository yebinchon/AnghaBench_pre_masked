
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcie_service_card {struct sk_buff** evt_buf_list; struct mwifiex_evt_buf_desc** evtbd_ring; } ;
struct mwifiex_evt_buf_desc {int dummy; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct mwifiex_evt_buf_desc*,int ,int) ;
 int FUNC_2 (struct mwifiex_adapter*,struct sk_buff*,int ) ;

__attribute__((used)) static void FUNC_3(struct mwifiex_adapter *VAR_2)
{
 struct pcie_service_card *VAR_3 = VAR_2->card;
 struct mwifiex_evt_buf_desc *VAR_4;
 struct sk_buff *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_4 = VAR_3->evtbd_ring[VAR_6];
  if (VAR_3->evt_buf_list[VAR_6]) {
   VAR_5 = VAR_3->evt_buf_list[VAR_6];
   FUNC_2(VAR_2, VAR_5,
       VAR_1);
   FUNC_0(VAR_5);
  }
  VAR_3->evt_buf_list[VAR_6] = ((void*)0);
  FUNC_1(VAR_4, 0, sizeof(*VAR_4));
 }

 return;
}
