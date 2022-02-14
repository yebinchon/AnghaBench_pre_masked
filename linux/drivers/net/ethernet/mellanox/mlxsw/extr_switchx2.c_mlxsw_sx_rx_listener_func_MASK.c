
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {int dev; int protocol; scalar_t__ len; } ;
struct mlxsw_sx_port_pcpu_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct mlxsw_sx_port {int pcpu_stats; int dev; } ;
struct mlxsw_sx {TYPE_1__* bus_info; struct mlxsw_sx_port** ports; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 (struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct mlxsw_sx_port_pcpu_stats* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(struct sk_buff *VAR_0, u8 VAR_1,
          void *VAR_2)
{
 struct mlxsw_sx *VAR_3 = VAR_2;
 struct mlxsw_sx_port *VAR_4 = VAR_3->ports[VAR_1];
 struct mlxsw_sx_port_pcpu_stats *VAR_5;

 if (FUNC_6(!VAR_4)) {
  FUNC_0(VAR_3->bus_info->dev, "Port %d: skb received for non-existent port\n",
         VAR_1);
  return;
 }

 VAR_0->dev = VAR_4->dev;

 VAR_5 = FUNC_3(VAR_4->pcpu_stats);
 FUNC_4(&VAR_5->syncp);
 VAR_5->rx_packets++;
 VAR_5->rx_bytes += VAR_0->len;
 FUNC_5(&VAR_5->syncp);

 VAR_0->protocol = FUNC_1(VAR_0, VAR_0->dev);
 FUNC_2(VAR_0);
}
