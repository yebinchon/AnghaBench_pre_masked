
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ethtool_usrip4_spec {scalar_t__ proto; scalar_t__ ip4dst; scalar_t__ ip4src; scalar_t__ tos; scalar_t__ l4_4_bytes; } ;
struct TYPE_5__ {scalar_t__ ip_ver; } ;
struct TYPE_6__ {TYPE_2__ usr_ip4_spec; } ;
struct TYPE_4__ {struct ethtool_usrip4_spec usr_ip4_spec; } ;
struct ethtool_rx_flow_spec {TYPE_3__ h_u; TYPE_1__ m_u; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct ethtool_rx_flow_spec *VAR_2)
{
 struct ethtool_usrip4_spec *VAR_3 = &VAR_2->m_u.usr_ip4_spec;
 int VAR_4 = 0;

 if (VAR_3->l4_4_bytes || VAR_3->tos ||
     VAR_2->h_u.usr_ip4_spec.ip_ver != VAR_1)
  return -VAR_0;
 if (VAR_3->ip4src)
  VAR_4++;
 if (VAR_3->ip4dst)
  VAR_4++;
 if (VAR_3->proto)
  VAR_4++;

 return ++VAR_4;
}
