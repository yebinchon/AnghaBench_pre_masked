
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* u6_addr8; } ;
struct TYPE_5__ {TYPE_1__ in6_u; } ;
struct TYPE_6__ {int tcp_options; int ipv4_options; int eth_mtu_size; int ipv4_port; int ipv6_options; int ipv6_addl_options; int ipv6_tcp_options; int* ip_address; int* subnet_mask; int* gateway; int* ipv4_alt_cid; int* ipv4_vid; int def_timeout; int iscsi_options; int iscsi_max_pdu_size; int iscsi_first_burst_len; int iscsi_max_outstnd_r2t; int iscsi_max_burst_len; int* iscsi_name; int ipv6_addr0; int ipv6_addr1; int ipv6_default_router_addr; int ipv6_port; int ipv6_flow_lbl; int ipv6_tcp_wsf; void* ipv6_gw_advrt_mtu; int ipv6_dup_addr_detect_count; void* ipv6_nd_stale_timeout; void* ipv6_nd_rexmit_timer; void* ipv6_nd_reach_time; int ipv6_hop_limit; int ipv6_traffic_class; int ipv6_cache_id; void* ipv6_vlan_tag; TYPE_2__ ipv6_link_local_addr; void* ipv6_default_router_state; void* ipv6_addr1_state; void* ipv6_addr0_state; void* ipv6_link_local_state; int abort_timer; int ipv4_ttl; int ipv4_vid_len; int ipv4_alt_cid_len; int ipv4_cache_id; int ipv4_tos; int tcp_wsf; int control; void* ipv4_vlan_tag; void* ipv4_addr_state; } ;
struct scsi_qla_host {scalar_t__ acb_version; TYPE_3__ ip_config; } ;
struct addr_ctrl_blk {int ipv6_tcp_wsf; int ipv6_gw_advrt_mtu; int ipv6_dup_addr_detect_count; int ipv6_nd_stale_timeout; int ipv6_nd_rexmit_timer; int ipv6_nd_reach_time; int ipv6_hop_limit; int ipv6_traffic_class; int ipv6_flow_lbl; int ipv6_cache_id; int ipv6_port; int ipv6_vlan_tag; int ipv6_dflt_rtr_addr; int ipv6_addr1; int ipv6_addr0; int ipv6_if_id; int ipv6_dflt_rtr_state; int ipv6_addr1_state; int ipv6_addr0_state; int ipv6_lnk_lcl_addr_state; int iscsi_name; int iscsi_max_burst_len; int iscsi_max_outstnd_r2t; int iscsi_fburst_len; int iscsi_max_pdu_size; int iscsi_opts; int abort_timer; int def_timeout; int ipv4_ttl; int ipv4_dhcp_vid; int ipv4_dhcp_vid_len; int ipv4_dhcp_alt_cid; int ipv4_dhcp_alt_cid_len; int ipv4_cacheid; int ipv4_tos; int ipv4_tcp_wsf; int control; int ipv4_vlan_tag; int ipv4_gw_addr; int ipv4_subnet; int ipv4_addr; int ipv6_tcp_opts; int ipv6_addtl_opts; int ipv6_opts; int ipv4_port; int eth_mtu_size; int ipv4_addr_state; int ipv4_ip_opts; int ipv4_tcp_opts; } ;


 scalar_t__ VAR_0 ;




 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct scsi_qla_host*) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (int*,int ,int ) ;
 int FUNC_5 (int,int) ;
 void* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(struct scsi_qla_host *VAR_5,
   struct addr_ctrl_blk *VAR_6)
{
 VAR_5->ip_config.tcp_options = FUNC_2(VAR_6->ipv4_tcp_opts);
 VAR_5->ip_config.ipv4_options = FUNC_2(VAR_6->ipv4_ip_opts);
 VAR_5->ip_config.ipv4_addr_state =
   FUNC_6(VAR_6->ipv4_addr_state);
 VAR_5->ip_config.eth_mtu_size =
    FUNC_2(VAR_6->eth_mtu_size);
 VAR_5->ip_config.ipv4_port = FUNC_2(VAR_6->ipv4_port);

 if (VAR_5->acb_version == VAR_0) {
  VAR_5->ip_config.ipv6_options = FUNC_2(VAR_6->ipv6_opts);
  VAR_5->ip_config.ipv6_addl_options =
    FUNC_2(VAR_6->ipv6_addtl_opts);
  VAR_5->ip_config.ipv6_tcp_options =
    FUNC_2(VAR_6->ipv6_tcp_opts);
 }


 FUNC_4(VAR_5->ip_config.ip_address, VAR_6->ipv4_addr,
        FUNC_5(sizeof(VAR_5->ip_config.ip_address),
     sizeof(VAR_6->ipv4_addr)));
 FUNC_4(VAR_5->ip_config.subnet_mask, VAR_6->ipv4_subnet,
        FUNC_5(sizeof(VAR_5->ip_config.subnet_mask),
     sizeof(VAR_6->ipv4_subnet)));
 FUNC_4(VAR_5->ip_config.gateway, VAR_6->ipv4_gw_addr,
        FUNC_5(sizeof(VAR_5->ip_config.gateway),
     sizeof(VAR_6->ipv4_gw_addr)));

 VAR_5->ip_config.ipv4_vlan_tag = FUNC_0(VAR_6->ipv4_vlan_tag);
 VAR_5->ip_config.control = VAR_6->control;
 VAR_5->ip_config.tcp_wsf = VAR_6->ipv4_tcp_wsf;
 VAR_5->ip_config.ipv4_tos = VAR_6->ipv4_tos;
 VAR_5->ip_config.ipv4_cache_id = VAR_6->ipv4_cacheid;
 VAR_5->ip_config.ipv4_alt_cid_len = VAR_6->ipv4_dhcp_alt_cid_len;
 FUNC_4(VAR_5->ip_config.ipv4_alt_cid, VAR_6->ipv4_dhcp_alt_cid,
        FUNC_5(sizeof(VAR_5->ip_config.ipv4_alt_cid),
     sizeof(VAR_6->ipv4_dhcp_alt_cid)));
 VAR_5->ip_config.ipv4_vid_len = VAR_6->ipv4_dhcp_vid_len;
 FUNC_4(VAR_5->ip_config.ipv4_vid, VAR_6->ipv4_dhcp_vid,
        FUNC_5(sizeof(VAR_5->ip_config.ipv4_vid),
     sizeof(VAR_6->ipv4_dhcp_vid)));
 VAR_5->ip_config.ipv4_ttl = VAR_6->ipv4_ttl;
 VAR_5->ip_config.def_timeout = FUNC_2(VAR_6->def_timeout);
 VAR_5->ip_config.abort_timer = VAR_6->abort_timer;
 VAR_5->ip_config.iscsi_options = FUNC_2(VAR_6->iscsi_opts);
 VAR_5->ip_config.iscsi_max_pdu_size =
    FUNC_2(VAR_6->iscsi_max_pdu_size);
 VAR_5->ip_config.iscsi_first_burst_len =
    FUNC_2(VAR_6->iscsi_fburst_len);
 VAR_5->ip_config.iscsi_max_outstnd_r2t =
    FUNC_2(VAR_6->iscsi_max_outstnd_r2t);
 VAR_5->ip_config.iscsi_max_burst_len =
    FUNC_2(VAR_6->iscsi_max_burst_len);
 FUNC_4(VAR_5->ip_config.iscsi_name, VAR_6->iscsi_name,
        FUNC_5(sizeof(VAR_5->ip_config.iscsi_name),
     sizeof(VAR_6->iscsi_name)));

 if (FUNC_1(VAR_5)) {

  VAR_5->ip_config.ipv6_link_local_state =
    FUNC_6(VAR_6->ipv6_lnk_lcl_addr_state);
  VAR_5->ip_config.ipv6_addr0_state =
   FUNC_6(VAR_6->ipv6_addr0_state);
  VAR_5->ip_config.ipv6_addr1_state =
   FUNC_6(VAR_6->ipv6_addr1_state);

  switch (FUNC_2(VAR_6->ipv6_dflt_rtr_state)) {
  case 128:
   VAR_5->ip_config.ipv6_default_router_state =
      VAR_4;
   break;
  case 130:
   VAR_5->ip_config.ipv6_default_router_state =
      VAR_2;
   break;
  case 131:
   VAR_5->ip_config.ipv6_default_router_state =
      VAR_1;
   break;
  case 129:
   VAR_5->ip_config.ipv6_default_router_state =
      VAR_3;
   break;
  default:
   VAR_5->ip_config.ipv6_default_router_state =
      VAR_4;
  }

  VAR_5->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[0] = 0xFE;
  VAR_5->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[1] = 0x80;

  FUNC_4(&VAR_5->ip_config.ipv6_link_local_addr.in6_u.u6_addr8[8],
         VAR_6->ipv6_if_id,
         FUNC_5(sizeof(VAR_5->ip_config.ipv6_link_local_addr)/2,
      sizeof(VAR_6->ipv6_if_id)));
  FUNC_4(&VAR_5->ip_config.ipv6_addr0, VAR_6->ipv6_addr0,
         FUNC_5(sizeof(VAR_5->ip_config.ipv6_addr0),
      sizeof(VAR_6->ipv6_addr0)));
  FUNC_4(&VAR_5->ip_config.ipv6_addr1, VAR_6->ipv6_addr1,
         FUNC_5(sizeof(VAR_5->ip_config.ipv6_addr1),
      sizeof(VAR_6->ipv6_addr1)));
  FUNC_4(&VAR_5->ip_config.ipv6_default_router_addr,
         VAR_6->ipv6_dflt_rtr_addr,
         FUNC_5(sizeof(VAR_5->ip_config.ipv6_default_router_addr),
      sizeof(VAR_6->ipv6_dflt_rtr_addr)));
  VAR_5->ip_config.ipv6_vlan_tag =
    FUNC_0(VAR_6->ipv6_vlan_tag);
  VAR_5->ip_config.ipv6_port = FUNC_2(VAR_6->ipv6_port);
  VAR_5->ip_config.ipv6_cache_id = VAR_6->ipv6_cache_id;
  VAR_5->ip_config.ipv6_flow_lbl =
    FUNC_2(VAR_6->ipv6_flow_lbl);
  VAR_5->ip_config.ipv6_traffic_class =
    VAR_6->ipv6_traffic_class;
  VAR_5->ip_config.ipv6_hop_limit = VAR_6->ipv6_hop_limit;
  VAR_5->ip_config.ipv6_nd_reach_time =
    FUNC_3(VAR_6->ipv6_nd_reach_time);
  VAR_5->ip_config.ipv6_nd_rexmit_timer =
    FUNC_3(VAR_6->ipv6_nd_rexmit_timer);
  VAR_5->ip_config.ipv6_nd_stale_timeout =
    FUNC_3(VAR_6->ipv6_nd_stale_timeout);
  VAR_5->ip_config.ipv6_dup_addr_detect_count =
     VAR_6->ipv6_dup_addr_detect_count;
  VAR_5->ip_config.ipv6_gw_advrt_mtu =
    FUNC_3(VAR_6->ipv6_gw_advrt_mtu);
  VAR_5->ip_config.ipv6_tcp_wsf = VAR_6->ipv6_tcp_wsf;
 }
}
