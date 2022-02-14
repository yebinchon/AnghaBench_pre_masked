
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int udp_conf ;
struct TYPE_2__ {int s_addr; } ;
struct udp_port_cfg {int ipv6_v6only; int use_udp6_rx_checksums; int local_udp_port; TYPE_1__ local_ip; int family; } ;
struct socket {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct udp_port_cfg*,int ,int) ;
 int FUNC_3 (struct net*,struct udp_port_cfg*,struct socket**) ;

__attribute__((used)) static struct socket *FUNC_4(struct net *VAR_3, bool VAR_4,
      __be16 VAR_5, bool VAR_6)
{
 struct socket *VAR_7;
 struct udp_port_cfg VAR_8;
 int VAR_9;

 FUNC_2(&VAR_8, 0, sizeof(VAR_8));

 if (VAR_4) {
  VAR_8.family = VAR_1;
  VAR_8.ipv6_v6only = 1;
  VAR_8.use_udp6_rx_checksums = VAR_6;
 } else {
  VAR_8.family = VAR_0;
  VAR_8.local_ip.s_addr = FUNC_1(VAR_2);
 }

 VAR_8.local_udp_port = VAR_5;


 VAR_9 = FUNC_3(VAR_3, &VAR_8, &VAR_7);
 if (VAR_9 < 0)
  return FUNC_0(VAR_9);

 return VAR_7;
}
