
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct eth_fast_path_rx_reg_cqe {int type; size_t placement_offset; size_t bd_num; int vlan_tag; int rss_hash; int bitfields; TYPE_2__ pars_flags; int len_on_first_bd; } ;
union eth_rx_cqe {struct eth_fast_path_rx_reg_cqe fast_path_regular; } ;
typedef scalar_t__ u8 ;
typedef size_t u16 ;
struct sw_rx_data {int dummy; } ;
struct sk_buff {int protocol; } ;
struct qede_rx_queue {size_t sw_rx_cons; size_t rx_headroom; int rxq_id; int rx_alloc_errors; int rx_hw_errors; int rx_ip_frags; struct sw_rx_data* sw_rx_ring; int rx_comp_ring; int xdp_prog; } ;
struct qede_fastpath {int id; } ;
struct qede_dev {int ndev; int cdev; TYPE_1__* ops; } ;
struct eth_slow_path_rx_cqe {int dummy; } ;
struct bpf_prog {int dummy; } ;
typedef enum eth_rx_cqe_type { ____Placeholder_eth_rx_cqe_type } eth_rx_cqe_type ;
typedef int __le16 ;
struct TYPE_3__ {int (* eth_cqe_completion ) (int ,int ,struct eth_slow_path_rx_cqe*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 struct bpf_prog* FUNC_0 (int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,int ) ;
 size_t FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (size_t) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_7 (struct eth_fast_path_rx_reg_cqe*,size_t) ;
 int FUNC_8 (struct qede_dev*,union eth_rx_cqe*,struct sk_buff*) ;
 int FUNC_9 (struct qede_rx_queue*,size_t) ;
 size_t FUNC_10 (struct qede_dev*,struct qede_rx_queue*,struct sk_buff*,struct eth_fast_path_rx_reg_cqe*,size_t) ;
 struct sk_buff* FUNC_11 (struct qede_dev*,struct qede_rx_queue*,struct sw_rx_data*,size_t,size_t) ;
 int FUNC_12 (struct qede_dev*,struct qede_fastpath*,struct qede_rx_queue*,union eth_rx_cqe*,int) ;
 int FUNC_13 (struct qede_dev*,struct qede_fastpath*,struct qede_rx_queue*,struct bpf_prog*,struct sw_rx_data*,struct eth_fast_path_rx_reg_cqe*,size_t*,size_t*) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (struct qede_dev*,struct qede_fastpath*,struct qede_rx_queue*,struct sk_buff*,size_t) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (int ,int ,struct eth_slow_path_rx_cqe*) ;
 scalar_t__ FUNC_18 (int) ;

__attribute__((used)) static int FUNC_19(struct qede_dev *VAR_4,
          struct qede_fastpath *VAR_5,
          struct qede_rx_queue *VAR_6)
{
 struct bpf_prog *VAR_7 = FUNC_0(VAR_6->xdp_prog);
 struct eth_fast_path_rx_reg_cqe *VAR_8;
 u16 VAR_9, VAR_10, VAR_11, VAR_12;
 enum eth_rx_cqe_type VAR_13;
 union eth_rx_cqe *VAR_14;
 struct sw_rx_data *VAR_15;
 struct sk_buff *VAR_16;
 __le16 VAR_17;
 u8 VAR_18;


 VAR_14 = (union eth_rx_cqe *)FUNC_4(&VAR_6->rx_comp_ring);
 VAR_13 = VAR_14->fast_path_regular.type;


 if (FUNC_18(VAR_13 == VAR_1)) {
  struct eth_slow_path_rx_cqe *VAR_19;

  VAR_19 = (struct eth_slow_path_rx_cqe *)VAR_14;
  VAR_4->ops->eth_cqe_completion(VAR_4->cdev, VAR_5->id, VAR_19);
  return 0;
 }


 if (VAR_13 != VAR_0)
  return FUNC_12(VAR_4, VAR_5, VAR_6, VAR_14, VAR_13);




 VAR_11 = VAR_6->sw_rx_cons & VAR_2;
 VAR_15 = &VAR_6->sw_rx_ring[VAR_11];

 VAR_8 = &VAR_14->fast_path_regular;
 VAR_9 = FUNC_3(VAR_8->len_on_first_bd);
 VAR_10 = VAR_8->placement_offset + VAR_6->rx_headroom;


 if (VAR_7)
  if (!FUNC_13(VAR_4, VAR_5, VAR_6, VAR_7, VAR_15, VAR_8,
     &VAR_10, &VAR_9))
   return 0;


 VAR_17 = VAR_14->fast_path_regular.pars_flags.flags;
 VAR_12 = FUNC_3(VAR_17);

 VAR_18 = FUNC_5(VAR_12);
 if (FUNC_18(VAR_18 == VAR_3)) {
  if (FUNC_7(VAR_8, VAR_12))
   VAR_6->rx_ip_frags++;
  else
   VAR_6->rx_hw_errors++;
 }




 VAR_16 = FUNC_11(VAR_4, VAR_6, VAR_15, VAR_9, VAR_10);
 if (!VAR_16) {
  VAR_6->rx_alloc_errors++;
  FUNC_9(VAR_6, VAR_8->bd_num);
  return 0;
 }




 if (VAR_8->bd_num > 1) {
  u16 VAR_20 = FUNC_10(VAR_4, VAR_6, VAR_16,
        VAR_8, VAR_9);

  if (FUNC_18(VAR_20 > 0)) {
   FUNC_9(VAR_6, VAR_20);
   FUNC_1(VAR_16);
   return 0;
  }
 }


 VAR_16->protocol = FUNC_2(VAR_16, VAR_4->ndev);
 FUNC_6(VAR_16, VAR_8->bitfields, VAR_8->rss_hash);
 FUNC_14(VAR_16, VAR_18);
 FUNC_16(VAR_16, VAR_6->rxq_id);
 FUNC_8(VAR_4, VAR_14, VAR_16);


 FUNC_15(VAR_4, VAR_5, VAR_6, VAR_16, FUNC_3(VAR_8->vlan_tag));

 return 1;
}
