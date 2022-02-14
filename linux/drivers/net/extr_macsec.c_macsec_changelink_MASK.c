
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (struct net_device*,struct nlattr**) ;

__attribute__((used)) static int FUNC_1(struct net_device *VAR_5, struct nlattr *VAR_6[],
        struct nlattr *VAR_7[],
        struct netlink_ext_ack *VAR_8)
{
 if (!VAR_7)
  return 0;

 if (VAR_7[VAR_1] ||
     VAR_7[VAR_2] ||
     VAR_7[VAR_4] ||
     VAR_7[VAR_3])
  return -VAR_0;

 return FUNC_0(VAR_5, VAR_7);
}
