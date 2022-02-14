
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_1[], struct nlattr *VAR_2[],
   struct netlink_ext_ack *VAR_3)
{
 FUNC_0(VAR_3,
         "tun/tap creation via rtnetlink is not supported.");
 return -VAR_0;
}
