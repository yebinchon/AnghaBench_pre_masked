
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct net_device_stats {int rx_bytes; int rx_packets; } ;
struct net_device {struct net_device_stats stats; } ;
struct TYPE_2__ {int restarts; } ;
struct can_priv {int (* do_set_mode ) (struct net_device*,int ) ;TYPE_1__ can_stats; } ;
struct can_frame {scalar_t__ can_dlc; int can_id; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_1 (struct net_device*,struct can_frame**) ;
 int FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*,char*) ;
 int FUNC_4 (struct net_device*,char*,int) ;
 struct can_priv* FUNC_5 (struct net_device*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct net_device*,int ) ;

__attribute__((used)) static void FUNC_10(struct net_device *VAR_3)
{
 struct can_priv *VAR_4 = FUNC_5(VAR_3);
 struct net_device_stats *VAR_5 = &VAR_3->stats;
 struct sk_buff *VAR_6;
 struct can_frame *VAR_7;
 int VAR_8;

 FUNC_0(FUNC_6(VAR_3));




 FUNC_2(VAR_3);


 VAR_6 = FUNC_1(VAR_3, &VAR_7);
 if (!VAR_6) {
  VAR_8 = -VAR_2;
  goto restart;
 }
 VAR_7->can_id |= VAR_0;

 FUNC_8(VAR_6);

 VAR_5->rx_packets++;
 VAR_5->rx_bytes += VAR_7->can_dlc;

restart:
 FUNC_3(VAR_3, "restarted\n");
 VAR_4->can_stats.restarts++;


 VAR_8 = VAR_4->do_set_mode(VAR_3, VAR_1);

 FUNC_7(VAR_3);
 if (VAR_8)
  FUNC_4(VAR_3, "Error %d during restart", VAR_8);
}
