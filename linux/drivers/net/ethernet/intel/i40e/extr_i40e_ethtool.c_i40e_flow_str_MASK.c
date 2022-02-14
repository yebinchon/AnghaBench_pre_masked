
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ethtool_rx_flow_spec {int flow_type; } ;


 int VAR_0 ;





__attribute__((used)) static const char *FUNC_0(struct ethtool_rx_flow_spec *VAR_1)
{
 switch (VAR_1->flow_type & ~VAR_0) {
 case 129:
  return "tcp4";
 case 128:
  return "udp4";
 case 130:
  return "sctp4";
 case 131:
  return "ip4";
 default:
  return "unknown";
 }
}
