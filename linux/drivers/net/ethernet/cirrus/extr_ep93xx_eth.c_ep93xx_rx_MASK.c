
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int protocol; } ;
struct TYPE_6__ {int rx_bytes; int rx_dropped; int rx_packets; int rx_crc_errors; int rx_length_errors; int rx_frame_errors; int rx_fifo_errors; int rx_errors; } ;
struct TYPE_5__ {int parent; } ;
struct net_device {TYPE_3__ stats; TYPE_2__ dev; } ;
struct ep93xx_rstat {int rstat0; int rstat1; } ;
struct ep93xx_rdesc {int buf_addr; } ;
struct ep93xx_priv {int rx_pointer; int napi; int * rx_buf; TYPE_1__* descs; } ;
struct TYPE_4__ {struct ep93xx_rdesc* rdesc; struct ep93xx_rstat* rstat; } ;


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
 int FUNC_0 (int ,int ,int,int ) ;
 int FUNC_1 (int ,int ,int,int ) ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,struct sk_buff*) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 struct ep93xx_priv* FUNC_6 (struct net_device*) ;
 int FUNC_7 (char*,int,int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (struct sk_buff*,int ,int) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (struct sk_buff*,int) ;

__attribute__((used)) static int FUNC_12(struct net_device *VAR_16, int VAR_17)
{
 struct ep93xx_priv *VAR_18 = FUNC_6(VAR_16);
 int VAR_19 = 0;

 while (VAR_19 < VAR_17) {
  int VAR_20;
  struct ep93xx_rstat *VAR_21;
  u32 VAR_22;
  u32 VAR_23;
  int VAR_24;
  struct sk_buff *VAR_25;

  VAR_20 = VAR_18->rx_pointer;
  VAR_21 = VAR_18->descs->rstat + VAR_20;

  VAR_22 = VAR_21->rstat0;
  VAR_23 = VAR_21->rstat1;
  if (!(VAR_22 & VAR_9) || !(VAR_23 & VAR_14))
   break;

  VAR_21->rstat0 = 0;
  VAR_21->rstat1 = 0;

  if (!(VAR_22 & VAR_6))
   FUNC_7("not end-of-frame %.8x %.8x\n", VAR_22, VAR_23);
  if (!(VAR_22 & VAR_5))
   FUNC_7("not end-of-buffer %.8x %.8x\n", VAR_22, VAR_23);
  if ((VAR_23 & VAR_12) >> 16 != VAR_20)
   FUNC_7("entry mismatch %.8x %.8x\n", VAR_22, VAR_23);

  if (!(VAR_22 & VAR_11)) {
   VAR_16->stats.rx_errors++;
   if (VAR_22 & VAR_8)
    VAR_16->stats.rx_fifo_errors++;
   if (VAR_22 & VAR_7)
    VAR_16->stats.rx_frame_errors++;
   if (VAR_22 & (VAR_10 | VAR_4))
    VAR_16->stats.rx_length_errors++;
   if (VAR_22 & VAR_2)
    VAR_16->stats.rx_crc_errors++;
   goto err;
  }

  VAR_24 = VAR_23 & VAR_13;
  if (VAR_24 > VAR_1) {
   FUNC_8("invalid length %.8x %.8x\n", VAR_22, VAR_23);
   goto err;
  }


  if (VAR_22 & VAR_3)
   VAR_24 -= 4;

  VAR_25 = FUNC_5(VAR_16, VAR_24 + 2);
  if (FUNC_3(VAR_25 != ((void*)0))) {
   struct ep93xx_rdesc *VAR_26 = &VAR_18->descs->rdesc[VAR_20];
   FUNC_11(VAR_25, 2);
   FUNC_0(VAR_16->dev.parent, VAR_26->buf_addr,
      VAR_24, VAR_0);
   FUNC_9(VAR_25, VAR_18->rx_buf[VAR_20], VAR_24);
   FUNC_1(VAR_16->dev.parent,
         VAR_26->buf_addr, VAR_24,
         VAR_0);
   FUNC_10(VAR_25, VAR_24);
   VAR_25->protocol = FUNC_2(VAR_25, VAR_16);

   FUNC_4(&VAR_18->napi, VAR_25);

   VAR_16->stats.rx_packets++;
   VAR_16->stats.rx_bytes += VAR_24;
  } else {
   VAR_16->stats.rx_dropped++;
  }

err:
  VAR_18->rx_pointer = (VAR_20 + 1) & (VAR_15 - 1);
  VAR_19++;
 }

 return VAR_19;
}
