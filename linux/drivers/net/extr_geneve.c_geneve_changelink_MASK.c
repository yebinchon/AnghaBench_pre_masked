
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct ip_tunnel_info {int dst_cache; } ;
struct geneve_sock {int dummy; } ;
struct geneve_dev {int collect_md; int use_udp6_rx_checksums; int ttl_inherit; struct ip_tunnel_info info; } ;
typedef int info ;
typedef enum ifla_geneve_df { ____Placeholder_ifla_geneve_df } ifla_geneve_df ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ip_tunnel_info*,struct ip_tunnel_info*) ;
 int FUNC_2 (struct net_device*,struct ip_tunnel_info*,struct nlattr**) ;
 int FUNC_3 (struct nlattr**,struct nlattr**,struct netlink_ext_ack*,struct ip_tunnel_info*,int*,int*,int*,int*,int) ;
 int FUNC_4 (struct geneve_dev*,struct geneve_sock**,struct geneve_sock**) ;
 int FUNC_5 (struct geneve_dev*,struct geneve_sock*,struct geneve_sock*) ;
 int FUNC_6 (struct ip_tunnel_info*,struct ip_tunnel_info*,int) ;
 struct geneve_dev* FUNC_7 (struct net_device*) ;

__attribute__((used)) static int FUNC_8(struct net_device *VAR_1, struct nlattr *VAR_2[],
        struct nlattr *VAR_3[],
        struct netlink_ext_ack *VAR_4)
{
 struct geneve_dev *VAR_5 = FUNC_7(VAR_1);
 struct geneve_sock *VAR_6, *VAR_7;
 struct ip_tunnel_info VAR_8;
 bool VAR_9;
 bool VAR_10;
 enum ifla_geneve_df VAR_11;
 bool VAR_12;
 int VAR_13;




 if (VAR_5->collect_md)
  return -VAR_0;


 FUNC_6(&VAR_8, &VAR_5->info, sizeof(VAR_8));
 VAR_9 = VAR_5->collect_md;
 VAR_10 = VAR_5->use_udp6_rx_checksums;
 VAR_12 = VAR_5->ttl_inherit;
 VAR_13 = FUNC_3(VAR_2, VAR_3, VAR_4, &VAR_8, &VAR_9,
        &VAR_10, &VAR_12, &VAR_11, 1);
 if (VAR_13)
  return VAR_13;

 if (!FUNC_1(&VAR_5->info, &VAR_8)) {
  FUNC_0(&VAR_8.dst_cache);
  FUNC_2(VAR_1, &VAR_8, VAR_2);
 }

 FUNC_4(VAR_5, &VAR_6, &VAR_7);
 VAR_5->info = VAR_8;
 VAR_5->collect_md = VAR_9;
 VAR_5->use_udp6_rx_checksums = VAR_10;
 VAR_5->ttl_inherit = VAR_12;
 FUNC_5(VAR_5, VAR_6, VAR_7);

 return 0;
}
