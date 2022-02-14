
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;
typedef int __be32 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct net_device const*,int ,int *,struct netlink_ext_ack*) ;

__attribute__((used)) static int
FUNC_3(const struct net_device *VAR_2, __be32 VAR_3,
         struct netlink_ext_ack *VAR_4)
{
 if (FUNC_0(!FUNC_1(VAR_2)))
  return -VAR_0;
 return FUNC_2(VAR_2, VAR_3, &VAR_1,
    VAR_4);
}
