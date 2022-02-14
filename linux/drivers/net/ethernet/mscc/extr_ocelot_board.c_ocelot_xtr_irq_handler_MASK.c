
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct timespec64 {int tv_nsec; int tv_sec; } ;
struct skb_shared_hwtstamps {int hwtstamp; } ;
struct sk_buff {int offload_fwd_mark; int protocol; } ;
struct ocelot {int bridge_mask; int ptp_info; scalar_t__ ptp; TYPE_1__** ports; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; } ;
struct net_device {int features; TYPE_2__ stats; } ;
struct frame_info {size_t port; int len; int timestamp; } ;
typedef int irqreturn_t ;
struct TYPE_3__ {struct net_device* dev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct sk_buff*,struct net_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct skb_shared_hwtstamps*,int ,int) ;
 struct sk_buff* FUNC_5 (struct net_device*,int) ;
 int FUNC_6 (struct net_device*,char*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (int *,struct frame_info*) ;
 int FUNC_9 (int *,struct timespec64*) ;
 int FUNC_10 (struct ocelot*,int ) ;
 int FUNC_11 (struct ocelot*,int ,int) ;
 int FUNC_12 (struct ocelot*,int,int,int *) ;
 struct skb_shared_hwtstamps* FUNC_13 (struct sk_buff*) ;
 scalar_t__ FUNC_14 (struct sk_buff*,int) ;
 scalar_t__ FUNC_15 (int) ;

__attribute__((used)) static irqreturn_t FUNC_16(int VAR_8, void *VAR_9)
{
 struct ocelot *VAR_10 = VAR_9;
 int VAR_11 = 0, VAR_12 = 0;
 int VAR_13 = 0;

 if (!(FUNC_10(VAR_10, VAR_6) & FUNC_0(VAR_12)))
  return VAR_4;

 do {
  struct skb_shared_hwtstamps *VAR_14;
  u64 VAR_15, VAR_16;
  struct frame_info VAR_17 = {};
  struct net_device *VAR_18;
  u32 VAR_19[4], VAR_20, *VAR_21;
  struct timespec64 VAR_22;
  int VAR_23, VAR_24, VAR_25;
  struct sk_buff *VAR_26;

  for (VAR_11 = 0; VAR_11 < VAR_2; VAR_11++) {
   VAR_13 = FUNC_12(VAR_10, VAR_12, 1, &VAR_19[VAR_11]);
   if (VAR_13 != 4)
    break;
  }

  if (VAR_13 != 4)
   break;

  FUNC_8(VAR_19, &VAR_17);

  VAR_18 = VAR_10->ports[VAR_17.port]->dev;

  VAR_26 = FUNC_5(VAR_18, VAR_17.len);

  if (FUNC_15(!VAR_26)) {
   FUNC_6(VAR_18, "Unable to allocate sk_buff\n");
   VAR_13 = -VAR_0;
   break;
  }
  VAR_25 = VAR_17.len - VAR_1;
  VAR_21 = (u32 *)FUNC_14(VAR_26, VAR_25);

  VAR_24 = 0;
  do {
   VAR_23 = FUNC_12(VAR_10, VAR_12, 0, &VAR_20);
   *VAR_21++ = VAR_20;
   VAR_24 += VAR_23;
  } while (VAR_24 < VAR_25);


  VAR_23 = FUNC_12(VAR_10, VAR_12, 0, &VAR_20);

  VAR_24 -= VAR_1 - VAR_23;

  if (FUNC_15(VAR_18->features & VAR_5)) {
   VAR_21 = (u32 *)FUNC_14(VAR_26, VAR_1);
   *VAR_21 = VAR_20;
  }

  if (VAR_23 < 0) {
   VAR_13 = VAR_23;
   break;
  }

  if (VAR_10->ptp) {
   FUNC_9(&VAR_10->ptp_info, &VAR_22);

   VAR_15 = FUNC_3(VAR_22.tv_sec, VAR_22.tv_nsec);
   if ((VAR_15 & 0xffffffff) < VAR_17.timestamp)
    VAR_16 = (((VAR_15 >> 32) - 1) << 32) |
      VAR_17.timestamp;
   else
    VAR_16 = (VAR_15 & FUNC_1(63, 32)) |
      VAR_17.timestamp;

   VAR_14 = FUNC_13(VAR_26);
   FUNC_4(VAR_14, 0, sizeof(struct skb_shared_hwtstamps));
   VAR_14->hwtstamp = VAR_16;
  }




  if (VAR_10->bridge_mask & FUNC_0(VAR_17.port))
   VAR_26->offload_fwd_mark = 1;

  VAR_26->protocol = FUNC_2(VAR_26, VAR_18);
  FUNC_7(VAR_26);
  VAR_18->stats.rx_bytes += VAR_24;
  VAR_18->stats.rx_packets++;
 } while (FUNC_10(VAR_10, VAR_6) & FUNC_0(VAR_12));

 if (VAR_13)
  while (FUNC_10(VAR_10, VAR_6) & FUNC_0(VAR_12))
   FUNC_11(VAR_10, VAR_7, VAR_12);

 return VAR_3;
}
