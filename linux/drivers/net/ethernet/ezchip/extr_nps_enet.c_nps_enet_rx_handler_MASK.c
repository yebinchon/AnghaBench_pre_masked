
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int ip_summed; int protocol; int data; } ;
struct nps_enet_priv {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_length_errors; int rx_crc_errors; } ;
struct net_device {TYPE_1__ stats; } ;


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
 int FUNC_0 (struct sk_buff*,struct net_device*) ;
 struct sk_buff* FUNC_1 (struct net_device*,int) ;
 struct nps_enet_priv* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (struct net_device*,int) ;
 int FUNC_5 (struct net_device*,int ,int) ;
 int FUNC_6 (struct nps_enet_priv*,int ) ;
 int FUNC_7 (struct nps_enet_priv*,int ,int ) ;
 int FUNC_8 (struct sk_buff*,int) ;
 scalar_t__ FUNC_9 (int) ;

__attribute__((used)) static u32 FUNC_10(struct net_device *VAR_11)
{
 u32 VAR_12, VAR_13 = 0;
 u32 VAR_14 = 0;
 struct nps_enet_priv *VAR_15 = FUNC_2(VAR_11);
 struct sk_buff *VAR_16;
 u32 VAR_17 = FUNC_6(VAR_15, VAR_2);
 u32 VAR_18 = (VAR_17 & VAR_5) >> VAR_6;
 u32 VAR_19 = (VAR_17 & VAR_7) >> VAR_8;
 u32 VAR_20 = (VAR_17 & VAR_3) >> VAR_4;

 VAR_12 = (VAR_17 & VAR_9) >> VAR_10;


 if (!VAR_18)
  return VAR_14;


 VAR_14++;


 if (VAR_19) {
  VAR_11->stats.rx_errors++;
  VAR_13 = 1;
 }


 if (VAR_20) {
  VAR_11->stats.rx_crc_errors++;
  VAR_11->stats.rx_dropped++;
  VAR_13 = 1;
 }


 if (FUNC_9(VAR_12 < VAR_1)) {
  VAR_11->stats.rx_length_errors++;
  VAR_11->stats.rx_dropped++;
  VAR_13 = 1;
 }

 if (VAR_13)
  goto rx_irq_clean;


 VAR_16 = FUNC_1(VAR_11, VAR_12);
 if (FUNC_9(!VAR_16)) {
  VAR_11->stats.rx_errors++;
  VAR_11->stats.rx_dropped++;
  goto rx_irq_clean;
 }


 FUNC_5(VAR_11, VAR_16->data, VAR_12);

 FUNC_8(VAR_16, VAR_12);
 VAR_16->protocol = FUNC_0(VAR_16, VAR_11);
 VAR_16->ip_summed = VAR_0;

 VAR_11->stats.rx_packets++;
 VAR_11->stats.rx_bytes += VAR_12;
 FUNC_3(VAR_16);

 goto rx_irq_frame_done;

rx_irq_clean:

 FUNC_4(VAR_11, VAR_12);

rx_irq_frame_done:

 FUNC_7(VAR_15, VAR_2, 0);

 return VAR_14;
}
