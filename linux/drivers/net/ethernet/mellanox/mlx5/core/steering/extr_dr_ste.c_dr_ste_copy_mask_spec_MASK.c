
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct mlx5dr_match_spec {void* dst_ip_31_0; void* dst_ip_63_32; void* dst_ip_95_64; void* dst_ip_127_96; void* src_ip_31_0; void* src_ip_63_32; void* src_ip_95_64; void* src_ip_127_96; void* udp_dport; void* udp_sport; void* ttl_hoplimit; void* tcp_dport; void* tcp_sport; void* tcp_flags; void* ip_version; void* frag; void* svlan_tag; void* cvlan_tag; void* ip_ecn; void* ip_dscp; void* ip_protocol; void* first_vid; void* first_cfi; void* first_prio; void* dmac_15_0; void* dmac_47_16; void* ethertype; void* smac_15_0; void* smac_47_16; } ;
typedef int raw_ip ;
struct TYPE_6__ {int ipv6; } ;
struct TYPE_8__ {TYPE_2__ ipv6_layout; } ;
struct TYPE_5__ {int ipv6; } ;
struct TYPE_7__ {TYPE_1__ ipv6_layout; } ;


 int FUNC_0 (int ,char*,int ) ;
 void* FUNC_1 (int ,char*,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_3 (int *,int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 TYPE_3__ VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;

__attribute__((used)) static void FUNC_4(char *VAR_24, struct mlx5dr_match_spec *VAR_25)
{
 u32 VAR_26[4];

 VAR_25->smac_47_16 = FUNC_1(VAR_9, VAR_24, VAR_15);

 VAR_25->smac_15_0 = FUNC_1(VAR_9, VAR_24, VAR_14);
 VAR_25->ethertype = FUNC_1(VAR_9, VAR_24, VAR_4);

 VAR_25->dmac_47_16 = FUNC_1(VAR_9, VAR_24, VAR_2);

 VAR_25->dmac_15_0 = FUNC_1(VAR_9, VAR_24, VAR_1);
 VAR_25->first_prio = FUNC_1(VAR_9, VAR_24, VAR_6);
 VAR_25->first_cfi = FUNC_1(VAR_9, VAR_24, VAR_5);
 VAR_25->first_vid = FUNC_1(VAR_9, VAR_24, VAR_7);

 VAR_25->ip_protocol = FUNC_1(VAR_9, VAR_24, VAR_12);
 VAR_25->ip_dscp = FUNC_1(VAR_9, VAR_24, VAR_10);
 VAR_25->ip_ecn = FUNC_1(VAR_9, VAR_24, VAR_11);
 VAR_25->cvlan_tag = FUNC_1(VAR_9, VAR_24, VAR_0);
 VAR_25->svlan_tag = FUNC_1(VAR_9, VAR_24, VAR_17);
 VAR_25->frag = FUNC_1(VAR_9, VAR_24, VAR_8);
 VAR_25->ip_version = FUNC_1(VAR_9, VAR_24, VAR_13);
 VAR_25->tcp_flags = FUNC_1(VAR_9, VAR_24, VAR_19);
 VAR_25->tcp_sport = FUNC_1(VAR_9, VAR_24, VAR_20);
 VAR_25->tcp_dport = FUNC_1(VAR_9, VAR_24, VAR_18);

 VAR_25->ttl_hoplimit = FUNC_1(VAR_9, VAR_24, VAR_21);

 VAR_25->udp_sport = FUNC_1(VAR_9, VAR_24, VAR_23);
 VAR_25->udp_dport = FUNC_1(VAR_9, VAR_24, VAR_22);

 FUNC_3(VAR_26, FUNC_0(VAR_9, VAR_24,
        VAR_16),
        sizeof(VAR_26));

 VAR_25->src_ip_127_96 = FUNC_2(VAR_26[0]);
 VAR_25->src_ip_95_64 = FUNC_2(VAR_26[1]);
 VAR_25->src_ip_63_32 = FUNC_2(VAR_26[2]);
 VAR_25->src_ip_31_0 = FUNC_2(VAR_26[3]);

 FUNC_3(VAR_26, FUNC_0(VAR_9, VAR_24,
        VAR_3),
        sizeof(VAR_26));

 VAR_25->dst_ip_127_96 = FUNC_2(VAR_26[0]);
 VAR_25->dst_ip_95_64 = FUNC_2(VAR_26[1]);
 VAR_25->dst_ip_63_32 = FUNC_2(VAR_26[2]);
 VAR_25->dst_ip_31_0 = FUNC_2(VAR_26[3]);
}
