
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct rndis_pktinfo_id {int flag; } ;
struct rndis_packet {scalar_t__ data_offset; scalar_t__ data_len; } ;
struct TYPE_3__ {struct rndis_packet pkt; } ;
struct rndis_message {TYPE_1__ msg; } ;
struct netvsc_device {int dummy; } ;
struct TYPE_4__ {scalar_t__ cnt; scalar_t__ is_last; } ;
struct netvsc_channel {TYPE_2__ rsc; } ;
struct net_device {int dummy; } ;
struct ndis_tcp_ip_checksum_info {int dummy; } ;
struct ndis_pkt_8021q_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct net_device*,char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct net_device*,struct netvsc_device*,struct netvsc_channel*) ;
 void* FUNC_2 (struct rndis_packet*,int ,int) ;
 int FUNC_3 (struct netvsc_channel*,struct ndis_pkt_8021q_info const*,struct ndis_tcp_ip_checksum_info const*,void*,scalar_t__) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_10,
         struct netvsc_device *VAR_11,
         struct netvsc_channel *VAR_12,
         struct rndis_message *VAR_13,
         u32 VAR_14)
{
 struct rndis_packet *VAR_15 = &VAR_13->msg.pkt;
 const struct ndis_tcp_ip_checksum_info *VAR_16;
 const struct ndis_pkt_8021q_info *VAR_17;
 const struct rndis_pktinfo_id *VAR_18;
 u32 VAR_19;
 void *VAR_20;
 bool VAR_21 = 0;
 int VAR_22;


 VAR_19 = VAR_4 + VAR_15->data_offset;

 VAR_14 -= VAR_19;





 if (FUNC_4(VAR_14 < VAR_15->data_len)) {
  FUNC_0(VAR_10, "rndis message buffer "
      "overflow detected (got %u, min %u)"
      "...dropping this message!\n",
      VAR_14, VAR_15->data_len);
  return VAR_2;
 }

 VAR_17 = FUNC_2(VAR_15, VAR_0, 0);

 VAR_16 = FUNC_2(VAR_15, VAR_9, 0);

 VAR_18 = FUNC_2(VAR_15, VAR_6, 1);

 VAR_20 = (void *)VAR_13 + VAR_19;


 if (VAR_18 && (VAR_18->flag & VAR_8)) {
  if (VAR_18->flag & VAR_5)
   VAR_12->rsc.cnt = 0;
  else if (VAR_12->rsc.cnt == 0)
   goto drop;

  VAR_21 = 1;

  if (VAR_18->flag & VAR_7)
   VAR_21 = 0;

  if (VAR_21 && VAR_12->rsc.is_last)
   goto drop;
 } else {
  VAR_12->rsc.cnt = 0;
 }

 if (FUNC_4(VAR_12->rsc.cnt >= VAR_1))
  goto drop;






 FUNC_3(VAR_12, VAR_17, VAR_16, VAR_20, VAR_15->data_len);

 if (VAR_21)
  return VAR_3;

 VAR_22 = FUNC_1(VAR_10, VAR_11, VAR_12);
 VAR_12->rsc.cnt = 0;

 return VAR_22;

drop:

 VAR_12->rsc.cnt = 0;
 return VAR_2;
}
