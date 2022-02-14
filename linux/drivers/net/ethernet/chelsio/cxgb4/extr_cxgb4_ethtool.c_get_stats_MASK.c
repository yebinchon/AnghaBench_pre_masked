
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct queue_port_stats {int dummy; } ;
struct port_stats {int dummy; } ;
struct port_info {scalar_t__ port_id; int stats_base; int tx_chan; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct lb_port_stats {int octets; } ;
struct ethtool_stats {int dummy; } ;
struct adapter_stats {int dummy; } ;
struct adapter {int dummy; } ;
typedef int s ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct adapter*,struct adapter_stats*) ;
 int FUNC_2 (struct adapter*,struct port_info*,struct queue_port_stats*) ;
 int VAR_0 ;
 int FUNC_3 (struct lb_port_stats*,int ,int) ;
 struct port_info* FUNC_4 (struct net_device*) ;
 int FUNC_5 (struct adapter*,scalar_t__,struct lb_port_stats*) ;
 int FUNC_6 (struct adapter*,int ,struct port_stats*,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_1, struct ethtool_stats *VAR_2,
        u64 *VAR_3)
{
 struct port_info *VAR_4 = FUNC_4(VAR_1);
 struct adapter *VAR_5 = VAR_4->adapter;
 struct lb_port_stats VAR_6;
 int VAR_7;
 u64 *VAR_8;

 FUNC_6(VAR_5, VAR_4->tx_chan,
     (struct port_stats *)VAR_3,
     &VAR_4->stats_base);

 VAR_3 += sizeof(struct port_stats) / sizeof(u64);
 FUNC_2(VAR_5, VAR_4, (struct queue_port_stats *)VAR_3);
 VAR_3 += sizeof(struct queue_port_stats) / sizeof(u64);
 FUNC_1(VAR_5, (struct adapter_stats *)VAR_3);
 VAR_3 += sizeof(struct adapter_stats) / sizeof(u64);

 *VAR_3++ = (u64)VAR_4->port_id;
 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 FUNC_5(VAR_5, VAR_4->port_id, &VAR_6);

 VAR_8 = &VAR_6.octets;
 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_0) - 1; VAR_7++)
  *VAR_3++ = (unsigned long long)*VAR_8++;
}
