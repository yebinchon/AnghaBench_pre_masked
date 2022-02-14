
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u8 ;
typedef size_t u32 ;
struct wmi_data_hdr {int dummy; } ;
struct sk_buff {void** data; } ;
struct net_device {int dummy; } ;
struct ethhdr {int h_dest; } ;
struct ath6kl {size_t node_num; size_t next_ep_id; TYPE_1__* node_map; int * tx_pending; } ;
struct TYPE_2__ {void* ep_id; int tx_pend; int mac_addr; } ;


 void* VAR_0 ;
 size_t VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 struct ath6kl* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static u8 FUNC_4(struct sk_buff *VAR_5, struct net_device *VAR_6,
          u32 *VAR_7)
{
 struct ath6kl *VAR_8 = FUNC_0(VAR_6);
 struct ethhdr *VAR_9;
 u32 VAR_10, VAR_11 = -1;
 u8 *VAR_12;

 *VAR_7 = 0;
 VAR_12 = VAR_5->data;
 VAR_9 = (struct ethhdr *) (VAR_12 + sizeof(struct wmi_data_hdr));

 if (FUNC_1(VAR_9->h_dest))
  return VAR_0;

 for (VAR_10 = 0; VAR_10 < VAR_8->node_num; VAR_10++) {
  if (FUNC_2(VAR_9->h_dest, VAR_8->node_map[VAR_10].mac_addr,
      VAR_3) == 0) {
   *VAR_7 = VAR_10 + 1;
   VAR_8->node_map[VAR_10].tx_pend++;
   return VAR_8->node_map[VAR_10].ep_id;
  }

  if ((VAR_11 == -1) && !VAR_8->node_map[VAR_10].tx_pend)
   VAR_11 = VAR_10;
 }

 if (VAR_11 == -1) {
  VAR_11 = VAR_8->node_num;
  VAR_8->node_num++;
  if (VAR_8->node_num > VAR_4)
   return VAR_2;
 }

 FUNC_3(VAR_8->node_map[VAR_11].mac_addr, VAR_9->h_dest, VAR_3);

 for (VAR_10 = VAR_0; VAR_10 <= VAR_1; VAR_10++) {
  if (!VAR_8->tx_pending[VAR_10]) {
   VAR_8->node_map[VAR_11].ep_id = VAR_10;
   break;
  }





  if (VAR_10 == VAR_1) {
   VAR_8->node_map[VAR_11].ep_id = VAR_8->next_ep_id;
   VAR_8->next_ep_id++;
   if (VAR_8->next_ep_id > VAR_1)
    VAR_8->next_ep_id = VAR_0;
  }
 }

 *VAR_7 = VAR_11 + 1;
 VAR_8->node_map[VAR_11].tx_pend++;

 return VAR_8->node_map[VAR_11].ep_id;
}
