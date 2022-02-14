
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
struct net {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net *VAR_1, struct net_device *VAR_2,
   struct nlattr *VAR_3[], struct nlattr *VAR_4[],
   struct netlink_ext_ack *VAR_5)
{
 if (VAR_3[VAR_0] == ((void*)0))
  FUNC_0(VAR_2);

 return FUNC_1(VAR_2);
}
