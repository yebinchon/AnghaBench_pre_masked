
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ushort ;
typedef size_t u16 ;
struct vlan_hdr {int h_vlan_TCI; } ;
struct sk_buff {int ip_summed; int protocol; int * data; } ;
struct TYPE_5__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_fifo_errors; int rx_errors; } ;
struct net_device {int features; TYPE_1__ stats; } ;
struct fec_enet_private {int quirks; int csum_flags; scalar_t__ bufdesc_ex; scalar_t__ rx_align; TYPE_2__* pdev; int napi; scalar_t__ hwts_rx_en; scalar_t__ hwp; struct fec_enet_priv_rx_q** rx_queue; } ;
struct TYPE_7__ {struct bufdesc* cur; scalar_t__ reg_desc_active; } ;
struct fec_enet_priv_rx_q {TYPE_3__ bd; struct sk_buff** rx_skbuff; } ;
struct bufdesc_ex {int cbd_esc; scalar_t__ cbd_bdu; scalar_t__ cbd_prot; int ts; } ;
struct bufdesc {int cbd_sc; int cbd_bufaddr; int cbd_datlen; } ;
typedef int __u8 ;
struct TYPE_6__ {int dev; } ;


 unsigned short VAR_0 ;
 unsigned short VAR_1 ;
 unsigned short VAR_2 ;
 int VAR_3 ;
 unsigned short VAR_4 ;
 unsigned short VAR_5 ;
 unsigned short VAR_6 ;
 unsigned short VAR_7 ;
 unsigned short VAR_8 ;
 unsigned short VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 size_t FUNC_0 (size_t) ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_1 (struct sk_buff*,int ,size_t) ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,scalar_t__,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ) ;
 int FUNC_6 (struct sk_buff*,struct net_device*) ;
 void* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct net_device*,struct sk_buff**,struct bufdesc*,int,int) ;
 int FUNC_10 (struct bufdesc*,TYPE_3__*) ;
 struct bufdesc* FUNC_11 (struct bufdesc*,TYPE_3__*) ;
 int FUNC_12 (struct fec_enet_private*,int ,int ) ;
 int FUNC_13 (struct net_device*,struct bufdesc*,struct sk_buff*) ;
 int FUNC_14 () ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int *,int *,int) ;
 int FUNC_17 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_18 (struct net_device*,scalar_t__) ;
 int FUNC_19 (struct net_device*,char*) ;
 struct fec_enet_private* FUNC_20 (struct net_device*) ;
 size_t FUNC_21 (int ) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (struct sk_buff*) ;
 int FUNC_25 (struct sk_buff*,int) ;
 int * FUNC_26 (struct sk_buff*,int) ;
 int FUNC_27 (struct sk_buff*,int) ;
 int FUNC_28 (int *,int) ;
 scalar_t__ FUNC_29 (int) ;
 int FUNC_30 () ;
 int FUNC_31 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_32(struct net_device *VAR_26, int VAR_27, u16 VAR_28)
{
 struct fec_enet_private *VAR_29 = FUNC_20(VAR_26);
 struct fec_enet_priv_rx_q *VAR_30;
 struct bufdesc *VAR_31;
 unsigned short VAR_32;
 struct sk_buff *VAR_33 = ((void*)0);
 struct sk_buff *VAR_34;
 ushort VAR_35;
 __u8 *VAR_36;
 int VAR_37 = 0;
 struct bufdesc_ex *VAR_38 = ((void*)0);
 bool VAR_39 = 0;
 u16 VAR_40;
 int VAR_41 = 0;
 bool VAR_42;
 bool VAR_43 = VAR_29->quirks & VAR_20;




 VAR_28 = FUNC_0(VAR_28);
 VAR_30 = VAR_29->rx_queue[VAR_28];




 VAR_31 = VAR_30->bd.cur;

 while (!((VAR_32 = FUNC_7(VAR_31->cbd_sc)) & VAR_2)) {

  if (VAR_37 >= VAR_27)
   break;
  VAR_37++;

  FUNC_31(VAR_16, VAR_29->hwp + VAR_18);


  VAR_32 ^= VAR_4;
  if (VAR_32 & (VAR_5 | VAR_8 | VAR_6 |
      VAR_1 | VAR_7 | VAR_4 |
      VAR_0)) {
   VAR_26->stats.rx_errors++;
   if (VAR_32 & VAR_7) {

    VAR_26->stats.rx_fifo_errors++;
    goto rx_processing_done;
   }
   if (VAR_32 & (VAR_5 | VAR_8
      | VAR_4)) {

    VAR_26->stats.rx_length_errors++;
    if (VAR_32 & VAR_4)
     FUNC_19(VAR_26, "rcv is not +last\n");
   }
   if (VAR_32 & VAR_1)
    VAR_26->stats.rx_crc_errors++;

   if (VAR_32 & (VAR_6 | VAR_0))
    VAR_26->stats.rx_frame_errors++;
   goto rx_processing_done;
  }


  VAR_26->stats.rx_packets++;
  VAR_35 = FUNC_7(VAR_31->cbd_datlen);
  VAR_26->stats.rx_bytes += VAR_35;

  VAR_41 = FUNC_10(VAR_31, &VAR_30->bd);
  VAR_34 = VAR_30->rx_skbuff[VAR_41];





  VAR_42 = FUNC_9(VAR_26, &VAR_34, VAR_31, VAR_35 - 4,
        VAR_43);
  if (!VAR_42) {
   VAR_33 = FUNC_18(VAR_26, VAR_17);
   if (FUNC_29(!VAR_33)) {
    VAR_26->stats.rx_dropped++;
    goto rx_processing_done;
   }
   FUNC_5(&VAR_29->pdev->dev,
      FUNC_8(VAR_31->cbd_bufaddr),
      VAR_17 - VAR_29->rx_align,
      VAR_12);
  }

  FUNC_22(VAR_34->data - VAR_24);
  FUNC_27(VAR_34, VAR_35 - 4);
  VAR_36 = VAR_34->data;

  if (!VAR_42 && VAR_43)
   FUNC_28(VAR_36, VAR_35);


  if (VAR_29->quirks & VAR_19)
   VAR_36 = FUNC_26(VAR_34, 2);



  VAR_38 = ((void*)0);
  if (VAR_29->bufdesc_ex)
   VAR_38 = (struct bufdesc_ex *)VAR_31;


  VAR_39 = 0;
  if ((VAR_26->features & VAR_23) &&
      VAR_29->bufdesc_ex &&
      (VAR_38->cbd_esc & FUNC_3(VAR_10))) {

   struct vlan_hdr *VAR_44 =
     (struct vlan_hdr *) (VAR_36 + VAR_14);
   VAR_40 = FUNC_21(VAR_44->h_vlan_TCI);

   VAR_39 = 1;

   FUNC_16(VAR_34->data + VAR_25, VAR_36, VAR_13 * 2);
   FUNC_25(VAR_34, VAR_25);
  }

  VAR_34->protocol = FUNC_6(VAR_34, VAR_26);


  if (VAR_29->hwts_rx_en && VAR_29->bufdesc_ex)
   FUNC_12(VAR_29, FUNC_8(VAR_38->ts),
       FUNC_24(VAR_34));

  if (VAR_29->bufdesc_ex &&
      (VAR_29->csum_flags & VAR_21)) {
   if (!(VAR_38->cbd_esc & FUNC_3(VAR_22))) {

    VAR_34->ip_summed = VAR_11;
   } else {
    FUNC_23(VAR_34);
   }
  }


  if (VAR_39)
   FUNC_1(VAR_34,
            FUNC_15(VAR_15),
            VAR_40);

  FUNC_17(&VAR_29->napi, VAR_34);

  if (VAR_42) {
   FUNC_4(&VAR_29->pdev->dev,
         FUNC_8(VAR_31->cbd_bufaddr),
         VAR_17 - VAR_29->rx_align,
         VAR_12);
  } else {
   VAR_30->rx_skbuff[VAR_41] = VAR_33;
   FUNC_13(VAR_26, VAR_31, VAR_33);
  }

rx_processing_done:

  VAR_32 &= ~VAR_9;


  VAR_32 |= VAR_2;

  if (VAR_29->bufdesc_ex) {
   struct bufdesc_ex *VAR_45 = (struct bufdesc_ex *)VAR_31;

   VAR_45->cbd_esc = FUNC_3(VAR_3);
   VAR_45->cbd_prot = 0;
   VAR_45->cbd_bdu = 0;
  }



  FUNC_30();
  VAR_31->cbd_sc = FUNC_2(VAR_32);


  VAR_31 = FUNC_11(VAR_31, &VAR_30->bd);





  FUNC_31(0, VAR_30->bd.reg_desc_active);
 }
 VAR_30->bd.cur = VAR_31;
 return VAR_37;
}
