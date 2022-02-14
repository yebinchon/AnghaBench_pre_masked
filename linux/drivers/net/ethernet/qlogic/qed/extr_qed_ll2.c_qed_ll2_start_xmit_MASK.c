
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct sk_buff {scalar_t__ ip_summed; int len; int data; } ;
struct qed_ll2_tx_pkt_info {int num_of_bds; int bd_flags; int remove_stag; struct sk_buff* cookie; int first_frag_len; int first_frag; int tx_dest; int vlan; } ;
struct qed_hwfn {int dummy; } ;
struct qed_dev {unsigned long mf_bits; TYPE_2__* pdev; TYPE_1__* ll2; } ;
typedef int skb_frag_t ;
typedef int pkt ;
typedef int dma_addr_t ;
struct TYPE_8__ {scalar_t__ nexthdr; } ;
struct TYPE_7__ {int nr_frags; int * frags; } ;
struct TYPE_6__ {int dev; } ;
struct TYPE_5__ {int handle; } ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct qed_dev*,char*,int) ;
 int FUNC_2 (struct qed_dev*,char*) ;
 int FUNC_3 (struct qed_dev*,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 struct qed_hwfn* FUNC_4 (struct qed_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ) ;
 TYPE_4__* FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct qed_ll2_tx_pkt_info*,int ,int) ;
 int FUNC_11 (struct qed_hwfn*,int ,struct qed_ll2_tx_pkt_info*,int) ;
 int FUNC_12 (struct qed_hwfn*,int ,int ,int ) ;
 int FUNC_13 (int *,int const*,int ,int ,int ) ;
 int FUNC_14 (int const*) ;
 TYPE_3__* FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (struct sk_buff*) ;
 scalar_t__ FUNC_17 (struct sk_buff*) ;
 scalar_t__ FUNC_18 (int ,unsigned long*) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_21(struct qed_dev *VAR_12, struct sk_buff *VAR_13,
         unsigned long VAR_14)
{
 struct qed_hwfn *VAR_15 = FUNC_4(VAR_12);
 struct qed_ll2_tx_pkt_info VAR_16;
 const skb_frag_t *VAR_17;
 u8 VAR_18 = 0, VAR_19;
 int VAR_20 = -VAR_5, VAR_21;
 dma_addr_t VAR_22;
 u16 VAR_23 = 0;

 if (FUNC_19(VAR_13->ip_summed != VAR_0)) {
  FUNC_2(VAR_12, "Cannot transmit a checksummed packet\n");
  return -VAR_5;
 }




 VAR_19 = FUNC_15(VAR_13)->nr_frags;

 if (1 + VAR_19 > VAR_1) {
  FUNC_1(VAR_12, "Cannot transmit a packet with %d fragments\n",
         1 + VAR_19);
  return -VAR_5;
 }

 VAR_22 = FUNC_5(&VAR_12->pdev->dev, VAR_13->data,
     VAR_13->len, VAR_4);
 if (FUNC_19(FUNC_6(&VAR_12->pdev->dev, VAR_22))) {
  FUNC_3(VAR_12, "SKB mapping failed\n");
  return -VAR_5;
 }


 if (!((FUNC_20(VAR_13) == FUNC_8(VAR_7)) &&
       FUNC_9(VAR_13)->nexthdr == VAR_8))
  VAR_18 |= FUNC_0(VAR_2);

 if (FUNC_17(VAR_13)) {
  VAR_23 = FUNC_16(VAR_13);
  VAR_18 |= FUNC_0(VAR_3);
 }

 FUNC_10(&VAR_16, 0, sizeof(VAR_16));
 VAR_16.num_of_bds = 1 + VAR_19;
 VAR_16.vlan = VAR_23;
 VAR_16.bd_flags = VAR_18;
 VAR_16.tx_dest = VAR_9;
 VAR_16.first_frag = VAR_22;
 VAR_16.first_frag_len = VAR_13->len;
 VAR_16.cookie = VAR_13;
 if (FUNC_18(VAR_11, &VAR_12->mf_bits) &&
     FUNC_18(VAR_10, &VAR_14))
  VAR_16.remove_stag = 1;






 VAR_20 = FUNC_11(VAR_15, VAR_12->ll2->handle,
           &VAR_16, 1);
 if (VAR_20)
  goto err;

 for (VAR_21 = 0; VAR_21 < VAR_19; VAR_21++) {
  VAR_17 = &FUNC_15(VAR_13)->frags[VAR_21];

  VAR_22 = FUNC_13(&VAR_12->pdev->dev, VAR_17, 0,
        FUNC_14(VAR_17), VAR_4);

  if (FUNC_19(FUNC_6(&VAR_12->pdev->dev, VAR_22))) {
   FUNC_3(VAR_12,
      "Unable to map frag - dropping packet\n");
   VAR_20 = -VAR_6;
   goto err;
  }

  VAR_20 = FUNC_12(VAR_15,
             VAR_12->ll2->handle,
             VAR_22,
             FUNC_14(VAR_17));




  if (VAR_20)
   goto err2;
 }

 return 0;

err:
 FUNC_7(&VAR_12->pdev->dev, VAR_22, VAR_13->len, VAR_4);
err2:
 return VAR_20;
}
