
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int* data; int protocol; } ;
struct net_local {int dummy; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; int rx_frame_errors; int rx_crc_errors; int rx_length_errors; int rx_errors; } ;
struct net_device {TYPE_1__ stats; scalar_t__ mem_start; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_0 (int,int ) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct net_local* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_local*,int ,struct net_device*,char*,int,int) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*,int ) ;
 int VAR_10 ;
 int FUNC_6 (struct sk_buff*,void*,int) ;
 int FUNC_7 (struct sk_buff*,int) ;

__attribute__((used)) static void
FUNC_8(struct net_device *VAR_11)
{
 struct net_local *VAR_12 = FUNC_2(VAR_11);
 struct sk_buff *VAR_13;
 int VAR_14, VAR_15;

 VAR_14 = FUNC_5(VAR_11, VAR_4);
 if ((VAR_14 & VAR_8) == 0) {
  VAR_11->stats.rx_errors++;
  if (VAR_14 & VAR_9)
    VAR_11->stats.rx_length_errors++;
  if (VAR_14 & VAR_7)
    VAR_11->stats.rx_length_errors++;
  if ((VAR_14 & VAR_5) &&
      !(VAR_14 & (VAR_7|VAR_9)))

   VAR_11->stats.rx_crc_errors++;
  if (VAR_14 & VAR_6)
    VAR_11->stats.rx_frame_errors++;
  return;
 }

 VAR_15 = FUNC_5(VAR_11, VAR_3);

 VAR_13 = FUNC_0(VAR_15, VAR_1);
 if (VAR_13 == ((void*)0)) {
  VAR_11->stats.rx_dropped++;
  return;
 }
 FUNC_7(VAR_13, VAR_15);

 FUNC_6(VAR_13, (void *)(VAR_11->mem_start + VAR_2),
    VAR_15);

 FUNC_3(VAR_12, VAR_10, VAR_11, "received %d byte packet of type %x\n",
    VAR_15, VAR_13->data[VAR_0 + VAR_0] << 8 |
    VAR_13->data[VAR_0 + VAR_0 + 1]);

        VAR_13->protocol=FUNC_1(VAR_13,VAR_11);
 FUNC_4(VAR_13);
 VAR_11->stats.rx_packets++;
 VAR_11->stats.rx_bytes += VAR_15;
}
