
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*,struct net_device*,unsigned long,int ,struct netlink_ext_ack*) ;
 scalar_t__ FUNC_1 (struct net_device*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_1,
           unsigned long VAR_2,
           struct netlink_ext_ack *VAR_3)
{
 if (FUNC_1(VAR_1))
  return 0;

 return FUNC_0(VAR_1, VAR_1, VAR_2,
          VAR_0, VAR_3);
}
