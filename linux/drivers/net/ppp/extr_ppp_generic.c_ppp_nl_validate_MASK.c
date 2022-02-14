
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_3[], struct nlattr *VAR_4[],
      struct netlink_ext_ack *VAR_5)
{
 if (!VAR_4)
  return -VAR_1;

 if (!VAR_4[VAR_2])
  return -VAR_1;
 if (FUNC_0(VAR_4[VAR_2]) < 0)
  return -VAR_0;

 return 0;
}
