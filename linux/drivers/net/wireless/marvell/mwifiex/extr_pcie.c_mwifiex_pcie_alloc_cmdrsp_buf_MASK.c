
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcie_service_card {struct sk_buff* cmdrsp_buf; } ;
struct mwifiex_adapter {struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct sk_buff* FUNC_0 (int ) ;
 int FUNC_1 (struct mwifiex_adapter*,int ,char*) ;
 scalar_t__ FUNC_2 (struct mwifiex_adapter*,struct sk_buff*,int ,int ) ;
 int FUNC_3 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_4(struct mwifiex_adapter *VAR_4)
{
 struct pcie_service_card *VAR_5 = VAR_4->card;
 struct sk_buff *VAR_6;


 VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6) {
  FUNC_1(VAR_4, VAR_1,
       "Unable to allocate skb for command response data.\n");
  return -VAR_0;
 }
 FUNC_3(VAR_6, VAR_2);
 if (FUNC_2(VAR_4, VAR_6, VAR_2,
       VAR_3))
  return -1;

 VAR_5->cmdrsp_buf = VAR_6;

 return 0;
}
