
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; scalar_t__ data_len; int csum_level; int ip_summed; int truesize; } ;
struct napi_struct {int dummy; } ;
struct be_rx_page_info {scalar_t__ page_offset; int page; } ;
struct be_rx_obj {struct be_adapter* adapter; } ;
struct be_rx_compl_info {scalar_t__ pkt_size; scalar_t__ num_rcvd; int vlan_tag; scalar_t__ vlanf; int tunneled; int rss_hash; } ;
struct be_adapter {TYPE_1__* netdev; struct be_rx_obj* rx_obj; } ;
struct TYPE_4__ {scalar_t__ nr_frags; int * frags; } ;
struct TYPE_3__ {int features; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct sk_buff*,int ,int ) ;
 int FUNC_2 (struct be_rx_obj*,struct be_rx_compl_info*) ;
 struct be_rx_page_info* FUNC_3 (struct be_rx_obj*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct be_rx_page_info*,int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_7 (struct napi_struct*) ;
 int FUNC_8 (struct napi_struct*) ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_10 (int *,scalar_t__) ;
 int FUNC_11 (struct sk_buff*,scalar_t__,int ) ;
 int FUNC_12 (int *,scalar_t__) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int ,int ) ;
 TYPE_2__* FUNC_16 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_17(struct be_rx_obj *VAR_6,
        struct napi_struct *VAR_7,
        struct be_rx_compl_info *VAR_8)
{
 struct be_adapter *VAR_9 = VAR_6->adapter;
 struct be_rx_page_info *VAR_10;
 struct sk_buff *VAR_11 = ((void*)0);
 u16 VAR_12, VAR_13;
 u16 VAR_14, VAR_15;

 VAR_11 = FUNC_7(VAR_7);
 if (!VAR_11) {
  FUNC_2(VAR_6, VAR_8);
  return;
 }

 VAR_12 = VAR_8->pkt_size;
 for (VAR_14 = 0, VAR_15 = -1; VAR_14 < VAR_8->num_rcvd; VAR_14++) {
  VAR_10 = FUNC_3(VAR_6);

  VAR_13 = FUNC_6(VAR_12, VAR_5);


  if (VAR_14 == 0 || VAR_10->page_offset == 0) {

   VAR_15++;
   FUNC_11(VAR_11, VAR_15, VAR_10->page);
   FUNC_10(&FUNC_16(VAR_11)->frags[VAR_15],
      VAR_10->page_offset);
   FUNC_13(&FUNC_16(VAR_11)->frags[VAR_15], 0);
  } else {
   FUNC_9(VAR_10->page);
  }
  FUNC_12(&FUNC_16(VAR_11)->frags[VAR_15], VAR_13);
  VAR_11->truesize += VAR_5;
  VAR_12 -= VAR_13;
  FUNC_5(VAR_10, 0, sizeof(*VAR_10));
 }
 FUNC_0(VAR_15 > VAR_2);

 FUNC_16(VAR_11)->nr_frags = VAR_15 + 1;
 VAR_11->len = VAR_8->pkt_size;
 VAR_11->data_len = VAR_8->pkt_size;
 VAR_11->ip_summed = VAR_0;
 FUNC_14(VAR_11, VAR_6 - &VAR_9->rx_obj[0]);
 if (VAR_9->netdev->features & VAR_3)
  FUNC_15(VAR_11, VAR_8->rss_hash, VAR_4);

 VAR_11->csum_level = VAR_8->tunneled;

 if (VAR_8->vlanf)
  FUNC_1(VAR_11, FUNC_4(VAR_1), VAR_8->vlan_tag);

 FUNC_8(VAR_7);
}
