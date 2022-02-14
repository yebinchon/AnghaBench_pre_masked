
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int udp_conf ;
typedef int u32 ;
struct udp_port_cfg {int use_udp6_rx_checksums; int ipv6_v6only; int bind_ifindex; int local_udp_port; int family; } ;
struct socket {int dummy; } ;
struct net {int dummy; } ;
typedef int __be16 ;


 int VAR_0 ;
 int VAR_1 ;
 struct socket* FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (struct udp_port_cfg*,int ,int) ;
 int FUNC_2 (struct net*,struct udp_port_cfg*,struct socket**) ;

__attribute__((used)) static struct socket *FUNC_3(struct net *VAR_3, bool VAR_4,
     __be16 VAR_5, u32 VAR_6, int VAR_7)
{
 struct socket *VAR_8;
 struct udp_port_cfg VAR_9;
 int VAR_10;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));

 if (VAR_4) {
  VAR_9.family = VAR_1;
  VAR_9.use_udp6_rx_checksums =
      !(VAR_6 & VAR_2);
  VAR_9.ipv6_v6only = 1;
 } else {
  VAR_9.family = VAR_0;
 }

 VAR_9.local_udp_port = VAR_5;
 VAR_9.bind_ifindex = VAR_7;


 VAR_10 = FUNC_2(VAR_3, &VAR_9, &VAR_8);
 if (VAR_10 < 0)
  return FUNC_0(VAR_10);

 return VAR_8;
}
