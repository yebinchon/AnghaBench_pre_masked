
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned char u8 ;
typedef int u64 ;
typedef unsigned int u16 ;
struct sk_buff {int data; } ;
struct l2_fhdr {int l2_fhdr_status; int l2_fhdr_pkt_len; } ;
struct bnx2_tx_ring_info {scalar_t__ tx_prod; unsigned int tx_prod_bseq; int tx_bseq_addr; int tx_bidx_addr; struct bnx2_tx_bd* tx_desc_ring; } ;
struct bnx2_tx_bd {int tx_bd_haddr_hi; int tx_bd_haddr_lo; unsigned int tx_bd_mss_nbytes; int tx_bd_vlan_tag_flags; } ;
struct bnx2_sw_bd {unsigned char* data; } ;
struct bnx2_rx_ring_info {struct bnx2_sw_bd* rx_buf_ring; } ;
struct bnx2_napi {struct bnx2_rx_ring_info rx_ring; struct bnx2_tx_ring_info tx_ring; } ;
struct bnx2 {int phy_flags; int hc_cmd; scalar_t__ loopback; int rx_buf_use_size; TYPE_1__* pdev; TYPE_2__* dev; scalar_t__ rx_jumbo_thresh; struct bnx2_napi* bnx2_napi; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int dev_addr; scalar_t__ mtu; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bnx2*,int ) ;
 int VAR_5 ;
 size_t FUNC_2 (scalar_t__) ;
 int FUNC_3 (struct bnx2*,int ,int) ;
 int FUNC_4 (struct bnx2*,int ,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 unsigned int FUNC_5 (struct bnx2_napi*) ;
 scalar_t__ FUNC_6 (struct bnx2_napi*) ;
 int FUNC_7 (struct bnx2*) ;
 int FUNC_8 (struct bnx2*) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_11 (int *,scalar_t__) ;
 int FUNC_12 (int *,int ,int ,int ) ;
 int FUNC_13 (struct bnx2_sw_bd*,int ) ;
 int FUNC_14 (int *,scalar_t__,unsigned int,int ) ;
 struct l2_fhdr* FUNC_15 (unsigned char*) ;
 int VAR_23 ;
 int FUNC_16 (unsigned char*,int ,int) ;
 int FUNC_17 (unsigned char*,int,int) ;
 unsigned int FUNC_18 (scalar_t__,scalar_t__) ;
 struct sk_buff* FUNC_19 (TYPE_2__*,unsigned int) ;
 unsigned char* FUNC_20 (struct sk_buff*,unsigned int) ;
 int FUNC_21 (int) ;

__attribute__((used)) static int
FUNC_22(struct bnx2 *VAR_24, int VAR_25)
{
 unsigned int VAR_26, VAR_27, VAR_28;
 struct sk_buff *VAR_29;
 u8 *VAR_30;
 unsigned char *VAR_31;
 u16 VAR_32, VAR_33;
 dma_addr_t VAR_34;
 struct bnx2_tx_bd *VAR_35;
 struct bnx2_sw_bd *VAR_36;
 struct l2_fhdr *VAR_37;
 int VAR_38 = -VAR_8;
 struct bnx2_napi *VAR_39 = &VAR_24->bnx2_napi[0], *VAR_40;
 struct bnx2_tx_ring_info *VAR_41;
 struct bnx2_rx_ring_info *VAR_42;

 VAR_40 = VAR_39;

 VAR_41 = &VAR_40->tx_ring;
 VAR_42 = &VAR_39->rx_ring;
 if (VAR_25 == VAR_2) {
  VAR_24->loopback = VAR_17;
  FUNC_7(VAR_24);
 }
 else if (VAR_25 == VAR_4) {
  if (VAR_24->phy_flags & VAR_3)
   return 0;

  VAR_24->loopback = VAR_20;
  FUNC_8(VAR_24);
 }
 else
  return -VAR_6;

 VAR_26 = FUNC_18(VAR_24->dev->mtu + VAR_11, VAR_24->rx_jumbo_thresh - 4);
 VAR_29 = FUNC_19(VAR_24->dev, VAR_26);
 if (!VAR_29)
  return -VAR_9;
 VAR_31 = FUNC_20(VAR_29, VAR_26);
 FUNC_16(VAR_31, VAR_24->dev->dev_addr, VAR_10);
 FUNC_17(VAR_31 + VAR_10, 0x0, 8);
 for (VAR_28 = 14; VAR_28 < VAR_26; VAR_28++)
  VAR_31[VAR_28] = (unsigned char) (VAR_28 & 0xff);

 VAR_34 = FUNC_10(&VAR_24->pdev->dev, VAR_29->data, VAR_26,
        VAR_19);
 if (FUNC_11(&VAR_24->pdev->dev, VAR_34)) {
  FUNC_9(VAR_29);
  return -VAR_7;
 }

 FUNC_3(VAR_24, VAR_0,
  VAR_24->hc_cmd | VAR_1);

 FUNC_1(VAR_24, VAR_0);

 FUNC_21(5);
 VAR_32 = FUNC_5(VAR_39);

 VAR_27 = 0;

 VAR_35 = &VAR_41->tx_desc_ring[FUNC_2(VAR_41->tx_prod)];

 VAR_35->tx_bd_haddr_hi = (u64) VAR_34 >> 32;
 VAR_35->tx_bd_haddr_lo = (u64) VAR_34 & 0xffffffff;
 VAR_35->tx_bd_mss_nbytes = VAR_26;
 VAR_35->tx_bd_vlan_tag_flags = VAR_22 | VAR_21;

 VAR_27++;
 VAR_41->tx_prod = FUNC_0(VAR_41->tx_prod);
 VAR_41->tx_prod_bseq += VAR_26;

 FUNC_4(VAR_24, VAR_41->tx_bidx_addr, VAR_41->tx_prod);
 FUNC_3(VAR_24, VAR_41->tx_bseq_addr, VAR_41->tx_prod_bseq);

 FUNC_21(100);

 FUNC_3(VAR_24, VAR_0,
  VAR_24->hc_cmd | VAR_1);

 FUNC_1(VAR_24, VAR_0);

 FUNC_21(5);

 FUNC_14(&VAR_24->pdev->dev, VAR_34, VAR_26, VAR_19);
 FUNC_9(VAR_29);

 if (FUNC_6(VAR_40) != VAR_41->tx_prod)
  goto loopback_test_done;

 VAR_33 = FUNC_5(VAR_39);
 if (VAR_33 != VAR_32 + VAR_27) {
  goto loopback_test_done;
 }

 VAR_36 = &VAR_42->rx_buf_ring[VAR_32];
 VAR_30 = VAR_36->data;

 VAR_37 = FUNC_15(VAR_30);
 VAR_30 = (u8 *)VAR_37 + VAR_5;

 FUNC_12(&VAR_24->pdev->dev,
  FUNC_13(VAR_36, VAR_23),
  VAR_24->rx_buf_use_size, VAR_18);

 if (VAR_37->l2_fhdr_status &
  (VAR_13 |
  VAR_15 |
  VAR_12 |
  VAR_16 |
  VAR_14)) {

  goto loopback_test_done;
 }

 if ((VAR_37->l2_fhdr_pkt_len - 4) != VAR_26) {
  goto loopback_test_done;
 }

 for (VAR_28 = 14; VAR_28 < VAR_26; VAR_28++) {
  if (*(VAR_30 + VAR_28) != (unsigned char) (VAR_28 & 0xff)) {
   goto loopback_test_done;
  }
 }

 VAR_38 = 0;

loopback_test_done:
 VAR_24->loopback = 0;
 return VAR_38;
}
