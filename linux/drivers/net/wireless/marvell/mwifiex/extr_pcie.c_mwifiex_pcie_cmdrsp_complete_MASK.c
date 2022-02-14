
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct pcie_service_card {struct sk_buff* cmdrsp_buf; } ;
struct mwifiex_adapter {int intf_hdr_len; struct pcie_service_card* card; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct mwifiex_adapter*,struct sk_buff*,int ,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;

__attribute__((used)) static int FUNC_2(struct mwifiex_adapter *VAR_2,
     struct sk_buff *VAR_3)
{
 struct pcie_service_card *VAR_4 = VAR_2->card;

 if (VAR_3) {
  VAR_4->cmdrsp_buf = VAR_3;
  FUNC_1(VAR_4->cmdrsp_buf, VAR_2->intf_hdr_len);
  if (FUNC_0(VAR_2, VAR_3, VAR_0,
        VAR_1))
   return -1;
 }

 return 0;
}
