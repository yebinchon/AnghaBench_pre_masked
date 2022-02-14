
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (struct netlink_ext_ack*,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct nlattr*) ;
 scalar_t__ FUNC_3 (struct nlattr*) ;

__attribute__((used)) static int FUNC_4(struct nlattr *VAR_4[], struct nlattr *VAR_5[],
   struct netlink_ext_ack *VAR_6)
{
 if (VAR_4[VAR_3]) {
  if (FUNC_3(VAR_4[VAR_3]) != VAR_2) {
   FUNC_0(VAR_6, "Invalid hardware address");
   return -VAR_1;
  }
  if (!FUNC_1(FUNC_2(VAR_4[VAR_3]))) {
   FUNC_0(VAR_6, "Invalid hardware address");
   return -VAR_0;
  }
 }
 return 0;
}
