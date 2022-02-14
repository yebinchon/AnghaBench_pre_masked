
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qed_hwfn {int dummy; } ;
struct TYPE_2__ {scalar_t__ ip_version; int syn_phy_addr_hi; int syn_phy_addr_lo; int syn_ip_payload_length; int flags; int connect_mode; int rcv_wnd_scale; int mss; int tos_or_tc; int ttl; int flow_label; int vlan_id; int remote_port; int remote_ip; int local_port; int local_ip; int remote_mac_addr_hi; int remote_mac_addr_mid; int remote_mac_addr_lo; int local_mac_addr_hi; int local_mac_addr_mid; int local_mac_addr_lo; } ;
struct iwarp_tcp_offload_ramrod_data {TYPE_1__ tcp; } ;


 int FUNC_0 (struct qed_hwfn*,int ,char*,int ,int ,int ,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(struct qed_hwfn *VAR_2,
      struct iwarp_tcp_offload_ramrod_data *VAR_3)
{
 FUNC_0(VAR_2, VAR_0, "local_mac=%x %x %x, remote_mac=%x %x %x\n",
     VAR_3->tcp.local_mac_addr_lo,
     VAR_3->tcp.local_mac_addr_mid,
     VAR_3->tcp.local_mac_addr_hi,
     VAR_3->tcp.remote_mac_addr_lo,
     VAR_3->tcp.remote_mac_addr_mid,
     VAR_3->tcp.remote_mac_addr_hi);

 if (VAR_3->tcp.ip_version == VAR_1) {
  FUNC_0(VAR_2, VAR_0,
      "local_ip=%pI4h:%x, remote_ip=%pI4h:%x, vlan=%x\n",
      VAR_3->tcp.local_ip,
      VAR_3->tcp.local_port,
      VAR_3->tcp.remote_ip,
      VAR_3->tcp.remote_port,
      VAR_3->tcp.vlan_id);
 } else {
  FUNC_0(VAR_2, VAR_0,
      "local_ip=%pI6:%x, remote_ip=%pI6:%x, vlan=%x\n",
      VAR_3->tcp.local_ip,
      VAR_3->tcp.local_port,
      VAR_3->tcp.remote_ip,
      VAR_3->tcp.remote_port,
      VAR_3->tcp.vlan_id);
 }

 FUNC_0(VAR_2, VAR_0,
     "flow_label=%x, ttl=%x, tos_or_tc=%x, mss=%x, rcv_wnd_scale=%x, connect_mode=%x, flags=%x\n",
     VAR_3->tcp.flow_label,
     VAR_3->tcp.ttl,
     VAR_3->tcp.tos_or_tc,
     VAR_3->tcp.mss,
     VAR_3->tcp.rcv_wnd_scale,
     VAR_3->tcp.connect_mode,
     VAR_3->tcp.flags);

 FUNC_0(VAR_2, VAR_0, "syn_ip_payload_length=%x, lo=%x, hi=%x\n",
     VAR_3->tcp.syn_ip_payload_length,
     VAR_3->tcp.syn_phy_addr_lo,
     VAR_3->tcp.syn_phy_addr_hi);
}
