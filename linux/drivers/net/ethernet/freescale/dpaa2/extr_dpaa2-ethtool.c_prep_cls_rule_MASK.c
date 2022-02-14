
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {int sctp_ip4_spec; int udp_ip4_spec; int tcp_ip4_spec; int usr_ip4_spec; int ether_spec; } ;
struct TYPE_3__ {int sctp_ip4_spec; int udp_ip4_spec; int tcp_ip4_spec; int usr_ip4_spec; int ether_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; int m_ext; int h_ext; TYPE_2__ m_u; TYPE_1__ h_u; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (int *,int *,void*,void*,int *) ;
 int FUNC_1 (int *,int *,void*,void*,int *) ;
 int FUNC_2 (int *,int *,void*,void*,int ,int *) ;
 int FUNC_3 (int *,int *,void*,void*,int *) ;
 int FUNC_4 (int *,int *,void*,void*,int *) ;

__attribute__((used)) static int FUNC_5(struct ethtool_rx_flow_spec *VAR_6, void *VAR_7, void *VAR_8,
    u64 *VAR_9)
{
 int VAR_10;

 switch (VAR_6->flow_type & 0xFF) {
 case 132:
  VAR_10 = FUNC_0(&VAR_6->h_u.ether_spec, &VAR_6->m_u.ether_spec,
        VAR_7, VAR_8, VAR_9);
  break;
 case 131:
  VAR_10 = FUNC_4(&VAR_6->h_u.usr_ip4_spec,
        &VAR_6->m_u.usr_ip4_spec, VAR_7, VAR_8, VAR_9);
  break;
 case 129:
  VAR_10 = FUNC_2(&VAR_6->h_u.tcp_ip4_spec, &VAR_6->m_u.tcp_ip4_spec,
       VAR_7, VAR_8, VAR_4, VAR_9);
  break;
 case 128:
  VAR_10 = FUNC_2(&VAR_6->h_u.udp_ip4_spec, &VAR_6->m_u.udp_ip4_spec,
       VAR_7, VAR_8, VAR_5, VAR_9);
  break;
 case 130:
  VAR_10 = FUNC_2(&VAR_6->h_u.sctp_ip4_spec,
       &VAR_6->m_u.sctp_ip4_spec, VAR_7, VAR_8,
       VAR_3, VAR_9);
  break;
 default:
  return -VAR_0;
 }

 if (VAR_10)
  return VAR_10;

 if (VAR_6->flow_type & VAR_1) {
  VAR_10 = FUNC_1(&VAR_6->h_ext, &VAR_6->m_ext, VAR_7, VAR_8, VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 if (VAR_6->flow_type & VAR_2) {
  VAR_10 = FUNC_3(&VAR_6->h_ext, &VAR_6->m_ext, VAR_7, VAR_8,
     VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
