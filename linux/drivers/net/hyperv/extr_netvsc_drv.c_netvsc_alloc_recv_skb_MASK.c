
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct sk_buff {scalar_t__ protocol; int ip_summed; } ;
struct TYPE_3__ {int cnt; int * len; int * data; int pktlen; struct ndis_tcp_ip_checksum_info* csum_info; struct ndis_pkt_8021q_info* vlan; } ;
struct napi_struct {int dummy; } ;
struct netvsc_channel {TYPE_1__ rsc; struct napi_struct napi; } ;
struct net_device {int features; } ;
struct TYPE_4__ {scalar_t__ udp_checksum_succeeded; scalar_t__ tcp_checksum_succeeded; scalar_t__ ip_checksum_succeeded; scalar_t__ ip_checksum_value_invalid; } ;
struct ndis_tcp_ip_checksum_info {TYPE_2__ receive; } ;
struct ndis_pkt_8021q_info {int vlanid; int pri; scalar_t__ cfi; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct sk_buff*,scalar_t__,int) ;
 scalar_t__ FUNC_1 (struct sk_buff*,struct net_device*) ;
 scalar_t__ FUNC_2 (int ) ;
 struct sk_buff* FUNC_3 (struct napi_struct*,int ) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static struct sk_buff *FUNC_7(struct net_device *VAR_6,
          struct netvsc_channel *VAR_7)
{
 struct napi_struct *VAR_8 = &VAR_7->napi;
 const struct ndis_pkt_8021q_info *VAR_9 = VAR_7->rsc.vlan;
 const struct ndis_tcp_ip_checksum_info *VAR_10 =
      VAR_7->rsc.csum_info;
 struct sk_buff *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_3(VAR_8, VAR_7->rsc.pktlen);
 if (!VAR_11)
  return VAR_11;





 for (VAR_12 = 0; VAR_12 < VAR_7->rsc.cnt; VAR_12++)
  FUNC_6(VAR_11, VAR_7->rsc.data[VAR_12], VAR_7->rsc.len[VAR_12]);

 VAR_11->protocol = FUNC_1(VAR_11, VAR_6);


 FUNC_5(VAR_11);






 if (VAR_10 && VAR_10->receive.ip_checksum_value_invalid &&
     VAR_10->receive.ip_checksum_succeeded &&
     VAR_11->protocol == FUNC_2(VAR_2))
  FUNC_4(VAR_11);



 if (VAR_10 && (VAR_6->features & VAR_3)) {
  if (VAR_10->receive.tcp_checksum_succeeded ||
      VAR_10->receive.udp_checksum_succeeded)
   VAR_11->ip_summed = VAR_0;
 }

 if (VAR_9) {
  u16 VAR_13 = VAR_9->vlanid | (VAR_9->pri << VAR_5) |
   (VAR_9->cfi ? VAR_4 : 0);

  FUNC_0(VAR_11, FUNC_2(VAR_1),
           VAR_13);
 }

 return VAR_11;
}
