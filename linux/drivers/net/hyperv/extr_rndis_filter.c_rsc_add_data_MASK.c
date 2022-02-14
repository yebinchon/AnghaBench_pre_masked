
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int cnt; int pktlen; int* len; void** data; struct ndis_tcp_ip_checksum_info const* csum_info; struct ndis_pkt_8021q_info const* vlan; } ;
struct netvsc_channel {TYPE_1__ rsc; } ;
struct ndis_tcp_ip_checksum_info {int dummy; } ;
struct ndis_pkt_8021q_info {int dummy; } ;



__attribute__((used)) static inline
void FUNC_0(struct netvsc_channel *VAR_0,
    const struct ndis_pkt_8021q_info *VAR_1,
    const struct ndis_tcp_ip_checksum_info *VAR_2,
    void *VAR_3, u32 VAR_4)
{
 u32 VAR_5 = VAR_0->rsc.cnt;

 if (VAR_5) {
  VAR_0->rsc.pktlen += VAR_4;
 } else {
  VAR_0->rsc.vlan = VAR_1;
  VAR_0->rsc.csum_info = VAR_2;
  VAR_0->rsc.pktlen = VAR_4;
 }

 VAR_0->rsc.data[VAR_5] = VAR_3;
 VAR_0->rsc.len[VAR_5] = VAR_4;
 VAR_0->rsc.cnt++;
}
