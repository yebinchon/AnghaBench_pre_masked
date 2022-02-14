
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_4[], struct nlattr *VAR_5[],
          struct netlink_ext_ack *VAR_6)
{
 u16 VAR_7;

 if (!VAR_5 || !VAR_5[VAR_2])
  return -VAR_0;

 VAR_7 = FUNC_0(VAR_5[VAR_2]);
 if (VAR_7 > (VAR_3 - 1))
  return -VAR_1;

 return 0;
}
