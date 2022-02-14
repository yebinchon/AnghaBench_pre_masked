
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct t4vf_port_stats {int dummy; } ;
struct queue_port_stats {int dummy; } ;
struct port_info {int pidx; struct adapter* adapter; } ;
struct net_device {int dummy; } ;
struct ethtool_stats {int dummy; } ;
struct adapter {int dummy; } ;


 int FUNC_0 (struct adapter*,struct port_info*,struct queue_port_stats*) ;
 int FUNC_1 (int *,int ,int) ;
 struct port_info* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct adapter*,int ,struct t4vf_port_stats*) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0,
          struct ethtool_stats *VAR_1,
          u64 *VAR_2)
{
 struct port_info *VAR_3 = FUNC_2(VAR_0);
 struct adapter *VAR_4 = VAR_3->adapter;
 int VAR_5 = FUNC_3(VAR_4, VAR_3->pidx,
          (struct t4vf_port_stats *)VAR_2);
 if (VAR_5)
  FUNC_1(VAR_2, 0, sizeof(struct t4vf_port_stats));

 VAR_2 += sizeof(struct t4vf_port_stats) / sizeof(u64);
 FUNC_0(VAR_4, VAR_3, (struct queue_port_stats *)VAR_2);
}
