
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct sk_buff {int len; scalar_t__ mac_len; } ;
struct ixgbe_tx_buffer {int bytecount; int tx_flags; int gso_segs; struct sk_buff* skb; } ;
struct ixgbe_ring {int dev; } ;
struct fcoe_hdr {int fcoe_sof; } ;
struct fcoe_crc_eof {int dummy; } ;
struct fc_frame_header {int* fh_f_ctl; } ;
struct TYPE_2__ {scalar_t__ gso_type; int gso_size; } ;


 int FUNC_0 (int,int) ;
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
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (struct ixgbe_ring*,int,int,int,int) ;
 int FUNC_4 (struct sk_buff*,int,int*,int) ;
 scalar_t__ FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 TYPE_1__* FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;
 int FUNC_11 (struct sk_buff*) ;

int FUNC_12(struct ixgbe_ring *VAR_19,
       struct ixgbe_tx_buffer *VAR_20,
       u8 *VAR_21)
{
 struct sk_buff *VAR_22 = VAR_20->skb;
 struct fc_frame_header *VAR_23;
 u32 VAR_24;
 u32 VAR_25 = 0;
 u32 VAR_26;
 u32 VAR_27 = VAR_13;
 u8 VAR_28, VAR_29;

 if (FUNC_5(VAR_22) && (FUNC_9(VAR_22)->gso_type != VAR_18)) {
  FUNC_1(VAR_19->dev, "Wrong gso type %d:expecting SKB_GSO_FCOE\n",
   FUNC_9(VAR_22)->gso_type);
  return -VAR_0;
 }


 FUNC_7(VAR_22, VAR_22->mac_len);
 FUNC_8(VAR_22, VAR_22->mac_len +
     sizeof(struct fcoe_hdr));


 VAR_28 = ((struct fcoe_hdr *)FUNC_6(VAR_22))->fcoe_sof;
 switch (VAR_28) {
 case 131:
  VAR_25 = VAR_7;
  break;
 case 130:
  VAR_25 = VAR_9 |
          VAR_7;
  break;
 case 129:
  break;
 case 128:
  VAR_25 = VAR_9;
  break;
 default:
  FUNC_2(VAR_19->dev, "unknown sof = 0x%x\n", VAR_28);
  return -VAR_0;
 }


 FUNC_4(VAR_22, VAR_22->len - 4, &VAR_29, 1);

 switch (VAR_29) {
 case 134:
  VAR_25 |= VAR_3;
  break;
 case 132:

  if (FUNC_5(VAR_22))
   VAR_25 |= VAR_3 |
     VAR_6;
  else
   VAR_25 |= VAR_5;
  break;
 case 133:
  VAR_25 |= VAR_4;
  break;
 case 135:
  VAR_25 |= VAR_2;
  break;
 default:
  FUNC_2(VAR_19->dev, "unknown eof = 0x%x\n", VAR_29);
  return -VAR_0;
 }


 VAR_23 = (struct fc_frame_header *)FUNC_10(VAR_22);
 if (VAR_23->fh_f_ctl[2] & VAR_1)
  VAR_25 |= VAR_8;


 *VAR_21 = sizeof(struct fcoe_crc_eof);


 if (FUNC_5(VAR_22)) {
  *VAR_21 += FUNC_11(VAR_22) +
       sizeof(struct fc_frame_header);

  VAR_20->gso_segs = FUNC_0(VAR_22->len - *VAR_21,
            FUNC_9(VAR_22)->gso_size);
  VAR_20->bytecount += (VAR_20->gso_segs - 1) * *VAR_21;
  VAR_20->tx_flags |= VAR_16;

  VAR_27 |= VAR_12;
 }


 VAR_20->tx_flags |= VAR_15 | VAR_14;


 VAR_26 = FUNC_9(VAR_22)->gso_size << VAR_11;


 VAR_24 = FUNC_11(VAR_22) +
     sizeof(struct fc_frame_header);
 VAR_24 |= (FUNC_11(VAR_22) - 4)
      << VAR_10;
 VAR_24 |= VAR_20->tx_flags & VAR_17;


 FUNC_3(VAR_19, VAR_24, VAR_25,
     VAR_27, VAR_26);

 return 0;
}
