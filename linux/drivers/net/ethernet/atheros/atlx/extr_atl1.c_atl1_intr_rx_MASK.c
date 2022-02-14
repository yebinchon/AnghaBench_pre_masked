
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct sk_buff {int protocol; } ;
struct TYPE_7__ {int pkt_size; } ;
struct TYPE_8__ {int valid; TYPE_2__ xsum_sz; } ;
struct rx_return_desc {int num_buf; int pkt_flg; int err_flg; int vlan_tag; size_t buf_indx; TYPE_3__ xsz; } ;
struct atl1_rrd_ring {scalar_t__ count; int next_to_clean; } ;
struct atl1_rfd_ring {scalar_t__ next_to_clean; scalar_t__ count; int next_to_use; struct atl1_buffer* buffer_info; } ;
struct atl1_buffer {scalar_t__ alloced; struct sk_buff* skb; scalar_t__ dma; int length; } ;
struct TYPE_6__ {scalar_t__ hw_addr; } ;
struct TYPE_9__ {int next_to_use; } ;
struct atl1_adapter {int mb_lock; TYPE_1__ hw; struct atl1_rrd_ring rrd_ring; struct atl1_rfd_ring rfd_ring; TYPE_4__ tpd_ring; int netdev; TYPE_5__* pdev; int rx_buffer_len; } ;
struct TYPE_10__ {int dev; } ;


 struct rx_return_desc* FUNC_0 (struct atl1_rrd_ring*,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_2 (struct atl1_adapter*) ;
 int FUNC_3 (struct atl1_adapter*,struct rx_return_desc*,int ) ;
 int FUNC_4 (struct atl1_adapter*,struct rx_return_desc*,struct sk_buff*) ;
 int FUNC_5 (struct atl1_adapter*,struct rx_return_desc*) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,scalar_t__) ;
 int FUNC_8 (int ,int *,char*,...) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (struct atl1_adapter*) ;
 int FUNC_15 (struct sk_buff*) ;
 int FUNC_16 (TYPE_5__*,scalar_t__,int ,int ) ;
 int FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int) ;
 scalar_t__ FUNC_21 (int) ;

__attribute__((used)) static int FUNC_22(struct atl1_adapter *VAR_16, int VAR_17)
{
 int VAR_18, VAR_19;
 u16 VAR_20;
 u16 VAR_21;
 u32 VAR_22;
 struct atl1_rfd_ring *VAR_23 = &VAR_16->rfd_ring;
 struct atl1_rrd_ring *VAR_24 = &VAR_16->rrd_ring;
 struct atl1_buffer *VAR_25;
 struct rx_return_desc *VAR_26;
 struct sk_buff *VAR_27;

 VAR_19 = 0;

 VAR_21 = FUNC_6(&VAR_24->next_to_clean);

 while (VAR_19 < VAR_17) {
  VAR_26 = FUNC_0(VAR_24, VAR_21);
  VAR_18 = 1;
  if (FUNC_13(VAR_26->xsz.valid)) {
chk_rrd:

   if (FUNC_13(VAR_26->num_buf == 1))
    goto rrd_ok;
   else if (FUNC_14(VAR_16)) {
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "unexpected RRD buffer count\n");
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "rx_buf_len = %d\n",
     VAR_16->rx_buffer_len);
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "RRD num_buf = %d\n",
     VAR_26->num_buf);
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "RRD pkt_len = %d\n",
     VAR_26->xsz.xsum_sz.pkt_size);
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "RRD pkt_flg = 0x%08X\n",
     VAR_26->pkt_flg);
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "RRD err_flg = 0x%08X\n",
     VAR_26->err_flg);
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "RRD vlan_tag = 0x%08X\n",
     VAR_26->vlan_tag);
   }


   if (FUNC_21(VAR_18-- > 0)) {

    FUNC_20(1);
    goto chk_rrd;
   }

   if (FUNC_14(VAR_16))
    FUNC_8(VAR_5, &VAR_16->pdev->dev,
     "bad RRD\n");

   if (VAR_26->num_buf > 1)
    FUNC_5(VAR_16, VAR_26);


   VAR_26->xsz.valid = 0;
   if (++VAR_21 == VAR_24->count)
    VAR_21 = 0;
   VAR_19++;
   continue;
  } else {

   break;
  }
rrd_ok:

  FUNC_3(VAR_16, VAR_26, 0);

  VAR_25 = &VAR_23->buffer_info[VAR_26->buf_indx];
  if (++VAR_23->next_to_clean == VAR_23->count)
   VAR_23->next_to_clean = 0;


  if (++VAR_21 == VAR_24->count)
   VAR_21 = 0;
  VAR_19++;

  if (FUNC_21(VAR_26->pkt_flg & VAR_12)) {
   if (!(VAR_26->err_flg &
    (VAR_0 | VAR_1
    | VAR_2))) {

    VAR_25->alloced = 0;
    VAR_26->xsz.valid = 0;
    continue;
   }
  }


  FUNC_16(VAR_16->pdev, VAR_25->dma,
          VAR_25->length, VAR_14);
  VAR_25->dma = 0;
  VAR_27 = VAR_25->skb;
  VAR_20 = FUNC_12(VAR_26->xsz.xsum_sz.pkt_size);

  FUNC_17(VAR_27, VAR_20 - VAR_3);


  FUNC_4(VAR_16, VAR_26, VAR_27);
  VAR_27->protocol = FUNC_9(VAR_27, VAR_16->netdev);

  if (VAR_26->pkt_flg & VAR_13) {
   u16 VAR_28 = (VAR_26->vlan_tag >> 4) |
     ((VAR_26->vlan_tag & 7) << 13) |
     ((VAR_26->vlan_tag & 8) << 9);

   FUNC_1(VAR_27, FUNC_10(VAR_4), VAR_28);
  }
  FUNC_15(VAR_27);


  VAR_25->skb = ((void*)0);
  VAR_25->alloced = 0;
  VAR_26->xsz.valid = 0;
 }

 FUNC_7(&VAR_24->next_to_clean, VAR_21);

 FUNC_2(VAR_16);


 if (VAR_19) {
  u32 VAR_29;
  u32 VAR_30;

  FUNC_18(&VAR_16->mb_lock);

  VAR_29 = FUNC_6(&VAR_16->tpd_ring.next_to_use);
  VAR_30 =
      FUNC_6(&VAR_16->rfd_ring.next_to_use);
  VAR_21 =
      FUNC_6(&VAR_16->rrd_ring.next_to_clean);
  VAR_22 = ((VAR_30 & VAR_6) <<
   VAR_7) |
                        ((VAR_21 & VAR_8) <<
   VAR_9) |
                        ((VAR_29 & VAR_10) <<
   VAR_11);
  FUNC_11(VAR_22, VAR_16->hw.hw_addr + VAR_15);
  FUNC_19(&VAR_16->mb_lock);
 }

 return VAR_19;
}
