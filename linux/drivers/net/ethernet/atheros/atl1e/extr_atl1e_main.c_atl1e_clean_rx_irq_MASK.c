
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct sk_buff {int protocol; int data; } ;
struct net_device {int features; } ;
struct atl1e_rx_ring {scalar_t__ page_size; scalar_t__ rx_page_desc; } ;
struct atl1e_rx_page_desc {scalar_t__ rx_nxseq; size_t rx_using; } ;
struct atl1e_rx_page {scalar_t__* write_offset_addr; scalar_t__ read_offset; scalar_t__ addr; } ;
struct atl1e_recv_ret_status {scalar_t__ seq_num; int pkt_flag; int err_flag; scalar_t__ word1; int vtag; } ;
struct atl1e_adapter {int reset_task; int flags; int hw; int napi; struct atl1e_rx_ring rx_ring; struct net_device* netdev; } ;


 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (struct sk_buff*,int ,int) ;
 struct atl1e_rx_page* FUNC_3 (struct atl1e_adapter*,size_t) ;
 int FUNC_4 (struct atl1e_adapter*,struct sk_buff*,struct atl1e_recv_ret_status*) ;
 int** VAR_13 ;
 int FUNC_5 (struct sk_buff*,struct net_device*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (int ,size_t*,scalar_t__) ;
 int FUNC_9 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct net_device*,scalar_t__) ;
 int FUNC_11 (struct net_device*,char*,int) ;
 int FUNC_12 (struct net_device*,char*,scalar_t__,...) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 int FUNC_15 (int ,int *) ;

__attribute__((used)) static void FUNC_16(struct atl1e_adapter *VAR_14, u8 VAR_15,
     int *VAR_16, int VAR_17)
{
 struct net_device *VAR_18 = VAR_14->netdev;
 struct atl1e_rx_ring *VAR_19 = &VAR_14->rx_ring;
 struct atl1e_rx_page_desc *VAR_20 =
  (struct atl1e_rx_page_desc *) VAR_19->rx_page_desc;
 struct sk_buff *VAR_21 = ((void*)0);
 struct atl1e_rx_page *VAR_22 = FUNC_3(VAR_14, VAR_15);
 u32 VAR_23, VAR_24;
 struct atl1e_recv_ret_status *VAR_25;

 VAR_24 = *(VAR_22->write_offset_addr);
 if (FUNC_7(VAR_22->read_offset < VAR_24)) {
  do {
   if (*VAR_16 >= VAR_17)
    break;
   (*VAR_16)++;

   VAR_25 = (struct atl1e_recv_ret_status *) (VAR_22->addr +
       VAR_22->read_offset);

   if (VAR_25->seq_num != VAR_20[VAR_15].rx_nxseq) {
    FUNC_12(VAR_18,
        "rx sequence number error (rx=%d) (expect=%d)\n",
        VAR_25->seq_num,
        VAR_20[VAR_15].rx_nxseq);
    VAR_20[VAR_15].rx_nxseq++;

    FUNC_0(&VAR_14->hw, VAR_3,
          (((u32)VAR_25->seq_num) << 16) |
          VAR_20[VAR_15].rx_nxseq);
    goto fatal_err;
   }
   VAR_20[VAR_15].rx_nxseq++;


   if ((VAR_25->pkt_flag & VAR_8) &&
       !(VAR_18->features & VAR_1)) {
    if (VAR_25->err_flag & (VAR_4 |
     VAR_6 | VAR_5 |
     VAR_7)) {

     FUNC_12(VAR_18,
         "rx packet desc error %x\n",
         *((u32 *)VAR_25 + 1));
     goto skip_pkt;
    }
   }

   VAR_23 = ((VAR_25->word1 >> VAR_11) &
     VAR_10);
   if (FUNC_7(!(VAR_18->features & VAR_2)))
    VAR_23 -= 4;

   VAR_21 = FUNC_10(VAR_18, VAR_23);
   if (VAR_21 == ((void*)0))
    goto skip_pkt;

   FUNC_8(VAR_21->data, (u8 *)(VAR_25 + 1), VAR_23);
   FUNC_14(VAR_21, VAR_23);
   VAR_21->protocol = FUNC_5(VAR_21, VAR_18);
   FUNC_4(VAR_14, VAR_21, VAR_25);

   if (VAR_25->pkt_flag & VAR_9) {
    u16 VAR_26 = (VAR_25->vtag >> 4) |
            ((VAR_25->vtag & 7) << 13) |
            ((VAR_25->vtag & 8) << 9);
    FUNC_11(VAR_18,
        "RXD VLAN TAG<RRD>=0x%04x\n",
        VAR_25->vtag);
    FUNC_2(VAR_21, FUNC_6(VAR_0), VAR_26);
   }
   FUNC_9(&VAR_14->napi, VAR_21);

skip_pkt:

   VAR_22->read_offset +=
    (((u32)((VAR_25->word1 >> VAR_11) &
    VAR_10) +
    sizeof(struct atl1e_recv_ret_status) + 31) &
      0xFFFFFFE0);

   if (VAR_22->read_offset >= VAR_19->page_size) {

    u16 VAR_27;
    u8 VAR_28;

    VAR_22->read_offset =
     *(VAR_22->write_offset_addr) = 0;
    VAR_28 = VAR_20[VAR_15].rx_using;
    VAR_27 =
     VAR_13[VAR_15][VAR_28];
    FUNC_1(&VAR_14->hw, VAR_27, 1);
    VAR_20[VAR_15].rx_using ^= 1;
    VAR_22 = FUNC_3(VAR_14, VAR_15);
   }
   VAR_24 = *(VAR_22->write_offset_addr);
  } while (VAR_22->read_offset < VAR_24);
 }

 return;

fatal_err:
 if (!FUNC_15(VAR_12, &VAR_14->flags))
  FUNC_13(&VAR_14->reset_task);
}
