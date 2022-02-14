
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct ip_tunnel_info {int dummy; } ;
typedef enum ifla_geneve_df { ____Placeholder_ifla_geneve_df } ifla_geneve_df ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net*,struct net_device*,struct netlink_ext_ack*,struct ip_tunnel_info*,int,int,int,int) ;
 int FUNC_1 (struct net_device*,struct ip_tunnel_info*,struct nlattr**) ;
 int FUNC_2 (struct nlattr**,struct nlattr**,struct netlink_ext_ack*,struct ip_tunnel_info*,int*,int*,int*,int*,int) ;
 int FUNC_3 (struct ip_tunnel_info*,int ) ;

__attribute__((used)) static int FUNC_4(struct net *VAR_2, struct net_device *VAR_3,
     struct nlattr *VAR_4[], struct nlattr *VAR_5[],
     struct netlink_ext_ack *VAR_6)
{
 enum ifla_geneve_df VAR_7 = VAR_0;
 bool VAR_8 = 0;
 struct ip_tunnel_info VAR_9;
 bool VAR_10 = 0;
 bool VAR_11 = 0;
 int VAR_12;

 FUNC_3(&VAR_9, VAR_1);
 VAR_12 = FUNC_2(VAR_4, VAR_5, VAR_6, &VAR_9, &VAR_11,
        &VAR_8, &VAR_10, &VAR_7, 0);
 if (VAR_12)
  return VAR_12;

 VAR_12 = FUNC_0(VAR_2, VAR_3, VAR_6, &VAR_9, VAR_11,
          VAR_8, VAR_10, VAR_7);
 if (VAR_12)
  return VAR_12;

 FUNC_1(VAR_3, &VAR_9, VAR_4);

 return 0;
}
