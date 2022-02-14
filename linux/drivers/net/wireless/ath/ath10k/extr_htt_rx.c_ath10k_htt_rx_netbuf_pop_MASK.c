
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int data; } ;
struct TYPE_4__ {int msdu_payld; } ;
struct TYPE_5__ {scalar_t__ fill_cnt; int size_mask; TYPE_1__ sw_rd_idx; struct sk_buff** netbufs_ring; int lock; } ;
struct ath10k_htt {struct ath10k* ar; TYPE_2__ rx_ring; } ;
struct ath10k {int dev; } ;
struct TYPE_6__ {int paddr; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath10k*,int ,int *,char*,int ,scalar_t__) ;
 int FUNC_2 (struct ath10k_htt*,int) ;
 int FUNC_3 (struct ath10k*,char*) ;
 int FUNC_4 (int ,int ,scalar_t__,int ) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;

__attribute__((used)) static inline struct sk_buff *FUNC_7(struct ath10k_htt *VAR_2)
{
 struct ath10k *VAR_3 = VAR_2->ar;
 int VAR_4;
 struct sk_buff *VAR_5;

 FUNC_5(&VAR_2->rx_ring.lock);

 if (VAR_2->rx_ring.fill_cnt == 0) {
  FUNC_3(VAR_3, "tried to pop sk_buff from an empty rx ring\n");
  return ((void*)0);
 }

 VAR_4 = VAR_2->rx_ring.sw_rd_idx.msdu_payld;
 VAR_5 = VAR_2->rx_ring.netbufs_ring[VAR_4];
 VAR_2->rx_ring.netbufs_ring[VAR_4] = ((void*)0);
 FUNC_2(VAR_2, VAR_4);

 VAR_4++;
 VAR_4 &= VAR_2->rx_ring.size_mask;
 VAR_2->rx_ring.sw_rd_idx.msdu_payld = VAR_4;
 VAR_2->rx_ring.fill_cnt--;

 FUNC_4(VAR_2->ar->dev,
    FUNC_0(VAR_5)->paddr,
    VAR_5->len + FUNC_6(VAR_5),
    VAR_1);
 FUNC_1(VAR_3, VAR_0, ((void*)0), "htt rx netbuf pop: ",
   VAR_5->data, VAR_5->len + FUNC_6(VAR_5));

 return VAR_5;
}
