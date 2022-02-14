
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef size_t u16 ;
struct sk_buff {int dummy; } ;
struct be_wrb_params {int dummy; } ;
struct be_queue_info {int used; } ;
struct be_tx_obj {size_t last_req_hdr; int pend_wrb_cnt; scalar_t__ last_req_wrb_cnt; struct sk_buff** sent_skb_list; struct be_queue_info q; } ;
struct be_eth_hdr_wrb {int dummy; } ;
struct be_adapter {int dummy; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (scalar_t__,int *) ;
 int FUNC_2 (struct be_eth_hdr_wrb*,int) ;
 struct be_eth_hdr_wrb* FUNC_3 (struct be_queue_info*,size_t) ;
 scalar_t__ FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct be_adapter*,struct be_eth_hdr_wrb*,struct be_wrb_params*,struct sk_buff*) ;

__attribute__((used)) static void FUNC_6(struct be_adapter *VAR_0,
    struct be_tx_obj *VAR_1,
    struct be_wrb_params *VAR_2,
    struct sk_buff *VAR_3, u16 VAR_4)
{
 u32 VAR_5 = FUNC_4(VAR_3);
 struct be_queue_info *VAR_6 = &VAR_1->q;
 struct be_eth_hdr_wrb *VAR_7 = FUNC_3(VAR_6, VAR_4);

 FUNC_5(VAR_0, VAR_7, VAR_2, VAR_3);
 FUNC_2(VAR_7, sizeof(*VAR_7));

 FUNC_0(VAR_1->sent_skb_list[VAR_4]);
 VAR_1->sent_skb_list[VAR_4] = VAR_3;
 VAR_1->last_req_hdr = VAR_4;
 FUNC_1(VAR_5, &VAR_6->used);
 VAR_1->last_req_wrb_cnt = VAR_5;
 VAR_1->pend_wrb_cnt += VAR_5;
}
