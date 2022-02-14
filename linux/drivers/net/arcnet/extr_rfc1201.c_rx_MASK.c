
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct sk_buff {int len; void* protocol; struct arc_rfc1201* data; struct net_device* dev; } ;
struct TYPE_6__ {int rx_missed_errors; int rx_errors; int rx_frame_errors; int rx_dropped; int rx_length_errors; int rx_crc_errors; } ;
struct net_device {TYPE_1__ stats; } ;
struct arphdr {int ar_hln; int ar_pln; } ;
struct TYPE_7__ {int (* copy_from_card ) (struct net_device*,int,int,struct arc_rfc1201*,int) ;} ;
struct TYPE_10__ {int aborted_seq; struct Incoming* incoming; } ;
struct arcnet_local {TYPE_2__ hw; TYPE_5__ rfc1201; } ;
struct TYPE_9__ {int source; } ;
struct arc_rfc1201 {int split_flag; int sequence; scalar_t__ proto; scalar_t__ payload; } ;
struct TYPE_8__ {struct arc_rfc1201 rfc1201; struct arc_rfc1201* raw; } ;
struct archdr {TYPE_4__ hard; TYPE_3__ soft; } ;
struct Incoming {int sequence; int lastpacket; int numpackets; struct sk_buff* skb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 struct sk_buff* FUNC_1 (int,int ) ;
 int FUNC_2 (int ,struct net_device*,char*,...) ;
 int FUNC_3 (struct net_device*,struct sk_buff*,char*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct archdr*,struct archdr*,int) ;
 struct arcnet_local* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*,int) ;
 int FUNC_9 (struct net_device*,int,int,struct arc_rfc1201*,int) ;
 int FUNC_10 (struct net_device*,int,int,struct arc_rfc1201*,int) ;
 int FUNC_11 (struct net_device*,int,int,struct arc_rfc1201*,int) ;
 void* FUNC_12 (struct sk_buff*,struct net_device*) ;

__attribute__((used)) static void FUNC_13(struct net_device *VAR_11, int VAR_12,
        struct archdr *VAR_13, int VAR_14)
{
 struct arcnet_local *VAR_15 = FUNC_6(VAR_11);
 struct sk_buff *VAR_16;
 struct archdr *VAR_17 = VAR_13;
 struct arc_rfc1201 *VAR_18 = &VAR_13->soft.rfc1201;
 int VAR_19 = VAR_17->hard.source, VAR_20;
 struct Incoming *VAR_21 = &VAR_15->rfc1201.incoming[VAR_19];

 FUNC_2(VAR_2, VAR_11, "it's an RFC1201 packet (length=%d)\n",
     VAR_14);

 if (VAR_14 >= VAR_9)
  VAR_20 = 512 - VAR_14;
 else
  VAR_20 = 256 - VAR_14;

 if (VAR_18->split_flag == 0xFF) {
  if (VAR_14 >= 4 + VAR_10) {
   FUNC_2(VAR_2, VAR_11, "compensating for exception packet\n");
  } else {
   FUNC_2(VAR_3, VAR_11, "short RFC1201 exception packet from %02Xh",
       VAR_19);
   return;
  }


  VAR_14 -= 4;
  VAR_20 += 4;
  VAR_15->hw.copy_from_card(VAR_11, VAR_12, 512 - VAR_14,
          VAR_18, sizeof(VAR_17->soft));
 }
 if (!VAR_18->split_flag) {
  FUNC_2(VAR_5, VAR_11, "incoming is not split (splitflag=%d)\n",
      VAR_18->split_flag);

  if (VAR_21->skb) {
   FUNC_2(VAR_3, VAR_11, "aborting assembly (seq=%d) for unsplit packet (splitflag=%d, seq=%d)\n",
       VAR_21->sequence, VAR_18->split_flag,
       VAR_18->sequence);
   VAR_15->rfc1201.aborted_seq = VAR_18->sequence;
   FUNC_4(VAR_21->skb);
   VAR_11->stats.rx_errors++;
   VAR_11->stats.rx_missed_errors++;
   VAR_21->skb = ((void*)0);
  }
  VAR_21->sequence = VAR_18->sequence;

  VAR_16 = FUNC_1(VAR_14 + VAR_0, VAR_8);
  if (!VAR_16) {
   VAR_11->stats.rx_dropped++;
   return;
  }
  FUNC_8(VAR_16, VAR_14 + VAR_0);
  VAR_16->dev = VAR_11;

  VAR_17 = (struct archdr *)VAR_16->data;
  VAR_18 = &VAR_17->soft.rfc1201;




  FUNC_5(VAR_17, VAR_13, sizeof(struct archdr));
  if (VAR_14 > sizeof(VAR_17->soft))
   VAR_15->hw.copy_from_card(VAR_11, VAR_12,
           VAR_20 + sizeof(VAR_17->soft),
           VAR_17->soft.raw + sizeof(VAR_17->soft),
           VAR_14 - sizeof(VAR_17->soft));






  if (VAR_18->proto == VAR_1) {
   struct arphdr *VAR_22 = (struct arphdr *)VAR_18->payload;


   if (VAR_22->ar_hln == 1 && VAR_22->ar_pln == 4) {
    uint8_t *VAR_23 = (uint8_t *)VAR_22 + sizeof(struct arphdr);

    if (!*VAR_23) {
     FUNC_2(VAR_3, VAR_11,
         "ARP source address was 00h, set to %02Xh\n",
         VAR_19);
     VAR_11->stats.rx_crc_errors++;
     *VAR_23 = VAR_19;
    } else {
     FUNC_2(VAR_2, VAR_11, "ARP source address (%Xh) is fine.\n",
         *VAR_23);
    }
   } else {
    FUNC_2(VAR_4, VAR_11, "funny-shaped ARP packet. (%Xh, %Xh)\n",
        VAR_22->ar_hln, VAR_22->ar_pln);
    VAR_11->stats.rx_errors++;
    VAR_11->stats.rx_crc_errors++;
   }
  }
  if (FUNC_0(VAR_6))
   FUNC_3(VAR_11, VAR_16, "rx");

  VAR_16->protocol = FUNC_12(VAR_16, VAR_11);
  FUNC_7(VAR_16);
 } else {
  FUNC_2(VAR_5, VAR_11, "packet is split (splitflag=%d, seq=%d)\n",
      VAR_18->split_flag, VAR_21->sequence);

  if (VAR_21->skb && VAR_21->sequence != VAR_18->sequence) {
   FUNC_2(VAR_3, VAR_11, "wrong seq number (saddr=%d, expected=%d, seq=%d, splitflag=%d)\n",
       VAR_19, VAR_21->sequence, VAR_18->sequence,
       VAR_18->split_flag);
   FUNC_4(VAR_21->skb);
   VAR_21->skb = ((void*)0);
   VAR_11->stats.rx_errors++;
   VAR_11->stats.rx_missed_errors++;
   VAR_21->lastpacket = VAR_21->numpackets = 0;
  }
  if (VAR_18->split_flag & 1) {
   FUNC_2(VAR_5, VAR_11, "brand new splitpacket (splitflag=%d)\n",
       VAR_18->split_flag);
   if (VAR_21->skb) {
    FUNC_2(VAR_3, VAR_11, "aborting previous (seq=%d) assembly (splitflag=%d, seq=%d)\n",
        VAR_21->sequence, VAR_18->split_flag,
        VAR_18->sequence);
    VAR_11->stats.rx_errors++;
    VAR_11->stats.rx_missed_errors++;
    FUNC_4(VAR_21->skb);
   }
   VAR_21->sequence = VAR_18->sequence;
   VAR_21->numpackets = ((unsigned)VAR_18->split_flag >> 1) + 2;
   VAR_21->lastpacket = 1;

   if (VAR_21->numpackets > 16) {
    FUNC_2(VAR_3, VAR_11, "incoming packet more than 16 segments; dropping. (splitflag=%d)\n",
        VAR_18->split_flag);
    VAR_15->rfc1201.aborted_seq = VAR_18->sequence;
    VAR_11->stats.rx_errors++;
    VAR_11->stats.rx_length_errors++;
    return;
   }
   VAR_21->skb = VAR_16 = FUNC_1(508 * VAR_21->numpackets + VAR_0,
        VAR_8);
   if (!VAR_16) {
    FUNC_2(VAR_4, VAR_11, "(split) memory squeeze, dropping packet.\n");
    VAR_15->rfc1201.aborted_seq = VAR_18->sequence;
    VAR_11->stats.rx_dropped++;
    return;
   }
   VAR_16->dev = VAR_11;
   VAR_17 = (struct archdr *)VAR_16->data;
   VAR_18 = &VAR_17->soft.rfc1201;

   FUNC_5(VAR_17, VAR_13, VAR_0 + VAR_10);
   FUNC_8(VAR_16, VAR_0 + VAR_10);

   VAR_18->split_flag = 0;
  } else {
   int VAR_24 = ((unsigned)VAR_18->split_flag >> 1) + 1;




   if (!VAR_21->skb) {
    if (VAR_15->rfc1201.aborted_seq != VAR_18->sequence) {
     FUNC_2(VAR_3, VAR_11, "can't continue split without starting first! (splitflag=%d, seq=%d, aborted=%d)\n",
         VAR_18->split_flag,
         VAR_18->sequence,
         VAR_15->rfc1201.aborted_seq);
     VAR_11->stats.rx_errors++;
     VAR_11->stats.rx_missed_errors++;
    }
    return;
   }
   VAR_21->lastpacket++;

   if (VAR_24 != VAR_21->lastpacket) {

    if (VAR_24 <= VAR_21->lastpacket - 1) {
     FUNC_2(VAR_3, VAR_11, "duplicate splitpacket ignored! (splitflag=%d)\n",
         VAR_18->split_flag);
     VAR_11->stats.rx_errors++;
     VAR_11->stats.rx_frame_errors++;
     return;
    }

    FUNC_2(VAR_3, VAR_11, "out-of-order splitpacket, reassembly (seq=%d) aborted (splitflag=%d, seq=%d)\n",
        VAR_21->sequence, VAR_18->split_flag,
        VAR_18->sequence);
    VAR_15->rfc1201.aborted_seq = VAR_18->sequence;
    FUNC_4(VAR_21->skb);
    VAR_21->skb = ((void*)0);
    VAR_11->stats.rx_errors++;
    VAR_11->stats.rx_missed_errors++;
    VAR_21->lastpacket = VAR_21->numpackets = 0;
    return;
   }
   VAR_17 = (struct archdr *)VAR_21->skb->data;
   VAR_18 = &VAR_17->soft.rfc1201;
  }

  VAR_16 = VAR_21->skb;

  VAR_15->hw.copy_from_card(VAR_11, VAR_12, VAR_20 + VAR_10,
          VAR_16->data + VAR_16->len,
          VAR_14 - VAR_10);
  FUNC_8(VAR_16, VAR_14 - VAR_10);


  if (VAR_21->lastpacket == VAR_21->numpackets) {
   VAR_21->skb = ((void*)0);
   VAR_21->lastpacket = VAR_21->numpackets = 0;

   FUNC_2(VAR_7, VAR_11, "skb: received %d bytes from %02X (unsplit)\n",
       VAR_16->len, VAR_17->hard.source);
   FUNC_2(VAR_7, VAR_11, "skb: received %d bytes from %02X (split)\n",
       VAR_16->len, VAR_17->hard.source);
   if (FUNC_0(VAR_6))
    FUNC_3(VAR_11, VAR_16, "rx");

   VAR_16->protocol = FUNC_12(VAR_16, VAR_11);
   FUNC_7(VAR_16);
  }
 }
}
