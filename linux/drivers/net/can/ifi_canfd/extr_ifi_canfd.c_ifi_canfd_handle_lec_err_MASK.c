
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int const u32 ;
struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; int rx_errors; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_3__ {int bus_error; } ;
struct TYPE_4__ {TYPE_1__ can_stats; } ;
struct ifi_canfd_priv {scalar_t__ base; TYPE_2__ can; } ;
struct can_frame {int can_id; scalar_t__ can_dlc; int * data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int const VAR_10 ;
 int const VAR_11 ;
 int const VAR_12 ;
 int const VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int const VAR_16 ;
 int const VAR_17 ;
 int const VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 struct ifi_canfd_priv* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct net_device *VAR_21)
{
 struct ifi_canfd_priv *VAR_22 = FUNC_1(VAR_21);
 struct net_device_stats *VAR_23 = &VAR_21->stats;
 struct can_frame *VAR_24;
 struct sk_buff *VAR_25;
 u32 VAR_26 = FUNC_3(VAR_22->base + VAR_9);
 const u32 VAR_27 = VAR_17 |
       VAR_10 |
       VAR_11 |
       VAR_12 |
       VAR_18 |
       VAR_13 |
       VAR_16;

 if (!(VAR_26 & VAR_27))
  return 0;

 VAR_22->can.can_stats.bus_error++;
 VAR_23->rx_errors++;


 VAR_25 = FUNC_0(VAR_21, &VAR_24);
 if (FUNC_4(!VAR_25))
  return 0;


 VAR_24->can_id |= VAR_1 | VAR_0;

 if (VAR_26 & VAR_17)
  VAR_24->data[2] |= VAR_7;

 if (VAR_26 & VAR_10)
  VAR_24->data[3] = VAR_5;

 if (VAR_26 & VAR_11)
  VAR_24->data[2] |= VAR_2;

 if (VAR_26 & VAR_12)
  VAR_24->data[2] |= VAR_3;

 if (VAR_26 & VAR_18)
  VAR_24->data[2] |= VAR_8;

 if (VAR_26 & VAR_13)
  VAR_24->data[3] = VAR_6;

 if (VAR_26 & VAR_16)
  VAR_24->data[2] |= VAR_4;


 FUNC_5(VAR_15, VAR_22->base + VAR_9);
 FUNC_5(VAR_20,
        VAR_22->base + VAR_19);
 FUNC_5(VAR_14, VAR_22->base + VAR_9);

 VAR_23->rx_packets++;
 VAR_23->rx_bytes += VAR_24->can_dlc;
 FUNC_2(VAR_25);

 return 1;
}
