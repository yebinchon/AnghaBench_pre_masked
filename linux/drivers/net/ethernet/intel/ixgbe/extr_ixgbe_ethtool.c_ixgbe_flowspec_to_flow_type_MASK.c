
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_5__ {int proto; } ;
struct TYPE_6__ {TYPE_1__ usr_ip4_spec; } ;
struct TYPE_7__ {int proto; } ;
struct TYPE_8__ {TYPE_3__ usr_ip4_spec; } ;
struct ethtool_rx_flow_spec {int flow_type; TYPE_2__ m_u; TYPE_4__ h_u; } ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




__attribute__((used)) static int FUNC_0(struct ethtool_rx_flow_spec *VAR_5,
           u8 *VAR_6)
{
 switch (VAR_5->flow_type & ~VAR_0) {
 case 129:
  *VAR_6 = VAR_3;
  break;
 case 128:
  *VAR_6 = VAR_4;
  break;
 case 130:
  *VAR_6 = VAR_2;
  break;
 case 131:
  switch (VAR_5->h_u.usr_ip4_spec.proto) {
  case 133:
   *VAR_6 = VAR_3;
   break;
  case 132:
   *VAR_6 = VAR_4;
   break;
  case 134:
   *VAR_6 = VAR_2;
   break;
  case 0:
   if (!VAR_5->m_u.usr_ip4_spec.proto) {
    *VAR_6 = VAR_1;
    break;
   }

  default:
   return 0;
  }
  break;
 default:
  return 0;
 }

 return 1;
}
