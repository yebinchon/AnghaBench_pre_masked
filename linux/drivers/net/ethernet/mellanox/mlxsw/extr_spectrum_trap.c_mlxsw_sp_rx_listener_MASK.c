
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dev; int protocol; scalar_t__ len; } ;
struct mlxsw_sp_port_pcpu_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct mlxsw_sp_port {int pcpu_stats; int dev; } ;
struct mlxsw_sp {TYPE_1__* bus_info; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct mlxsw_sp_port_pcpu_stats* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct mlxsw_sp *VAR_1, struct sk_buff *VAR_2,
    u8 VAR_3,
    struct mlxsw_sp_port *VAR_4)
{
 struct mlxsw_sp_port_pcpu_stats *VAR_5;

 if (FUNC_6(!VAR_4)) {
  FUNC_0(VAR_1->bus_info->dev, "Port %d: skb received for non-existent port\n",
         VAR_3);
  FUNC_2(VAR_2);
  return -VAR_0;
 }

 VAR_2->dev = VAR_4->dev;

 VAR_5 = FUNC_3(VAR_4->pcpu_stats);
 FUNC_4(&VAR_5->syncp);
 VAR_5->rx_packets++;
 VAR_5->rx_bytes += VAR_2->len;
 FUNC_5(&VAR_5->syncp);

 VAR_2->protocol = FUNC_1(VAR_2, VAR_2->dev);

 return 0;
}
