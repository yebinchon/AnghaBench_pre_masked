
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;
struct bonding {int dummy; } ;


 int FUNC_0 (struct net_device*,struct nlattr**,struct nlattr**,struct netlink_ext_ack*) ;
 int FUNC_1 (struct bonding*) ;
 struct bonding* FUNC_2 (struct net_device*) ;
 int FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net *VAR_0, struct net_device *VAR_1,
   struct nlattr *VAR_2[], struct nlattr *VAR_3[],
   struct netlink_ext_ack *VAR_4)
{
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_4(VAR_1);

 FUNC_3(VAR_1);
 if (!VAR_5) {
  struct bonding *VAR_6 = FUNC_2(VAR_1);

  FUNC_1(VAR_6);
 }

 return VAR_5;
}
