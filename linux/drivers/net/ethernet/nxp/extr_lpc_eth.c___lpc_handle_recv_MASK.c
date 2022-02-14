
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct sk_buff {int protocol; } ;
struct rx_status_t {int statusinfo; } ;
struct netdata_local {int net_base; scalar_t__ rx_buff_v; struct rx_status_t* rx_stat_v; } ;
struct TYPE_2__ {size_t rx_bytes; int rx_packets; int rx_dropped; int rx_errors; int rx_length_errors; int rx_crc_errors; int rx_fifo_errors; } ;
struct net_device {TYPE_1__ stats; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 size_t VAR_8 ;
 struct sk_buff* FUNC_2 (size_t) ;
 int FUNC_3 (struct sk_buff*,struct net_device*) ;
 struct netdata_local* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct sk_buff*) ;
 size_t FUNC_6 (int ) ;
 int FUNC_7 (struct sk_buff*,scalar_t__,size_t) ;
 int FUNC_8 (size_t,int ) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_9, int VAR_10)
{
 struct netdata_local *VAR_11 = FUNC_4(VAR_9);
 struct sk_buff *VAR_12;
 u32 VAR_13, VAR_14, VAR_15;
 struct rx_status_t *VAR_16;
 int VAR_17 = 0;


 VAR_13 = FUNC_6(FUNC_0(VAR_11->net_base));
 while (VAR_17 < VAR_10 && VAR_13 !=
   FUNC_6(FUNC_1(VAR_11->net_base))) {

  VAR_16 = &VAR_11->rx_stat_v[VAR_13];
  VAR_14 = (VAR_16->statusinfo & VAR_7) + 1;


  VAR_15 = VAR_16->statusinfo;
  if ((VAR_15 & (VAR_3 | VAR_8)) ==
      (VAR_3 | VAR_6))
   VAR_15 &= ~VAR_3;

  if (VAR_15 & VAR_3) {
   int VAR_18 = VAR_16->statusinfo;

   if (VAR_18 & VAR_5) {

    VAR_9->stats.rx_fifo_errors++;
   } else if (VAR_18 & VAR_2) {

    VAR_9->stats.rx_crc_errors++;
   } else if (VAR_18 & VAR_4) {

    VAR_9->stats.rx_length_errors++;
   } else if (VAR_18 & VAR_3) {

    VAR_9->stats.rx_length_errors++;
   }
   VAR_9->stats.rx_errors++;
  } else {

   VAR_12 = FUNC_2(VAR_14);
   if (!VAR_12) {
    VAR_9->stats.rx_dropped++;
   } else {

    FUNC_7(VAR_12,
          VAR_11->rx_buff_v + VAR_13 * VAR_0,
          VAR_14);


    VAR_12->protocol = FUNC_3(VAR_12, VAR_9);
    FUNC_5(VAR_12);
    VAR_9->stats.rx_packets++;
    VAR_9->stats.rx_bytes += VAR_14;
   }
  }


  VAR_13 = VAR_13 + 1;
  if (VAR_13 >= VAR_1)
   VAR_13 = 0;
  FUNC_8(VAR_13,
         FUNC_0(VAR_11->net_base));
  VAR_17++;
 }

 return VAR_17;
}
