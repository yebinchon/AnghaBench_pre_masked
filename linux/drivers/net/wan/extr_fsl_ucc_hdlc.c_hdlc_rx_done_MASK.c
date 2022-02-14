
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct ucc_hdlc_private {int currx_bdnum; struct qe_bd* currx_bd; struct qe_bd* rx_bd_base; int * rx_buffer; struct net_device* ndev; } ;
struct sk_buff {int len; int protocol; int data; struct net_device* dev; } ;
struct qe_bd {int status; int length; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_length_errors; int rx_frame_errors; int rx_over_errors; int rx_crc_errors; int rx_fifo_errors; int collisions; int rx_errors; } ;
struct net_device {int type; TYPE_1__ stats; } ;
struct TYPE_5__ {scalar_t__ proto; } ;
typedef TYPE_2__ hdlc_device ;





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
 struct sk_buff* FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int,int *) ;
 int FUNC_5 (int ,int *,int) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_8(struct ucc_hdlc_private *VAR_15, int VAR_16)
{
 struct net_device *VAR_17 = VAR_15->ndev;
 struct sk_buff *VAR_18 = ((void*)0);
 hdlc_device *VAR_19 = FUNC_1(VAR_17);
 struct qe_bd *VAR_20;
 u16 VAR_21;
 u16 VAR_22, VAR_23 = 0;
 u8 *VAR_24;

 VAR_20 = VAR_15->currx_bd;
 VAR_21 = FUNC_3(&VAR_20->status);


 while (!((VAR_21 & (VAR_9)) || (--VAR_16 < 0))) {
  if (VAR_21 & (VAR_4)) {
   VAR_17->stats.rx_errors++;

   if (VAR_21 & VAR_7)
    VAR_17->stats.collisions++;
   if (VAR_21 & VAR_13)
    VAR_17->stats.rx_fifo_errors++;
   if (VAR_21 & VAR_8)
    VAR_17->stats.rx_crc_errors++;
   if (VAR_21 & VAR_6)
    VAR_17->stats.rx_over_errors++;
   if (VAR_21 & VAR_12)
    VAR_17->stats.rx_frame_errors++;
   if (VAR_21 & VAR_11)
    VAR_17->stats.rx_length_errors++;

   goto recycle;
  }
  VAR_24 = VAR_15->rx_buffer +
   (VAR_15->currx_bdnum * VAR_3);
  VAR_22 = FUNC_3(&VAR_20->length);

  switch (VAR_17->type) {
  case 128:
   VAR_24 += VAR_2;
   VAR_22 -= (VAR_2 + VAR_1);

   VAR_18 = FUNC_0(VAR_22);
   if (!VAR_18) {
    VAR_17->stats.rx_dropped++;
    return -VAR_0;
   }

   FUNC_7(VAR_18, VAR_22);
   VAR_18->len = VAR_22;
   VAR_18->dev = VAR_17;
   FUNC_5(VAR_18->data, VAR_24, VAR_22);
   break;

  case 129:
  case 130:
   VAR_22 -= VAR_1;

   VAR_18 = FUNC_0(VAR_22);
   if (!VAR_18) {
    VAR_17->stats.rx_dropped++;
    return -VAR_0;
   }

   FUNC_7(VAR_18, VAR_22);
   VAR_18->len = VAR_22;
   VAR_18->dev = VAR_17;
   FUNC_5(VAR_18->data, VAR_24, VAR_22);
   break;
  }

  VAR_17->stats.rx_packets++;
  VAR_17->stats.rx_bytes += VAR_18->len;
  VAR_23++;
  if (VAR_19->proto)
   VAR_18->protocol = FUNC_2(VAR_18, VAR_17);
  FUNC_6(VAR_18);

recycle:
  FUNC_4((VAR_21 & VAR_14) | VAR_9 | VAR_10, &VAR_20->status);


  if (VAR_21 & VAR_14) {
   VAR_15->currx_bdnum = 0;
   VAR_20 = VAR_15->rx_bd_base;
  } else {
   if (VAR_15->currx_bdnum < (VAR_5 - 1))
    VAR_15->currx_bdnum += 1;
   else
    VAR_15->currx_bdnum = VAR_5 - 1;

   VAR_20 += 1;
  }

  VAR_21 = FUNC_3(&VAR_20->status);
 }

 VAR_15->currx_bd = VAR_20;
 return VAR_23;
}
