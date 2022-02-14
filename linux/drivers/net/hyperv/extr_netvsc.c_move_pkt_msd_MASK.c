
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct multi_send_data {scalar_t__ count; struct hv_netvsc_packet* pkt; struct sk_buff* skb; } ;
struct hv_netvsc_packet {int dummy; } ;



__attribute__((used)) static inline void FUNC_0(struct hv_netvsc_packet **VAR_0,
    struct sk_buff **VAR_1,
    struct multi_send_data *VAR_2)
{
 *VAR_1 = VAR_2->skb;
 *VAR_0 = VAR_2->pkt;
 VAR_2->skb = ((void*)0);
 VAR_2->pkt = ((void*)0);
 VAR_2->count = 0;
}
