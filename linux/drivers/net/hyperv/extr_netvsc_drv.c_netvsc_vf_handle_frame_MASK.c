
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ len; struct net_device* dev; } ;
struct netvsc_vf_pcpu_stats {int syncp; int rx_bytes; int rx_packets; } ;
struct net_device_context {int vf_stats; } ;
struct net_device {int rx_handler_data; } ;
typedef int rx_handler_result_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct net_device_context* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (int ) ;
 struct sk_buff* FUNC_2 (struct sk_buff*,int ) ;
 struct netvsc_vf_pcpu_stats* FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static rx_handler_result_t FUNC_7(struct sk_buff **VAR_3)
{
 struct sk_buff *VAR_4 = *VAR_3;
 struct net_device *VAR_5 = FUNC_1(VAR_4->dev->rx_handler_data);
 struct net_device_context *VAR_6 = FUNC_0(VAR_5);
 struct netvsc_vf_pcpu_stats *VAR_7
   = FUNC_3(VAR_6->vf_stats);

 VAR_4 = FUNC_2(VAR_4, VAR_0);
 if (FUNC_6(!VAR_4))
  return VAR_2;

 *VAR_3 = VAR_4;

 VAR_4->dev = VAR_5;

 FUNC_4(&VAR_7->syncp);
 VAR_7->rx_packets++;
 VAR_7->rx_bytes += VAR_4->len;
 FUNC_5(&VAR_7->syncp);

 return VAR_1;
}
