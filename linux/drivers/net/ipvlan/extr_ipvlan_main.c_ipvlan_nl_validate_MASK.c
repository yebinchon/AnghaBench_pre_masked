
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_6[], struct nlattr *VAR_7[],
         struct netlink_ext_ack *VAR_8)
{
 if (!VAR_7)
  return 0;

 if (VAR_7[VAR_2]) {
  u16 VAR_9 = FUNC_0(VAR_7[VAR_2]);

  if (VAR_9 >= VAR_5)
   return -VAR_0;
 }
 if (VAR_7[VAR_1]) {
  u16 VAR_10 = FUNC_0(VAR_7[VAR_1]);


  if (VAR_10 & ~(VAR_3 | VAR_4))
   return -VAR_0;

  if ((VAR_10 & (VAR_3 | VAR_4)) ==
      (VAR_3 | VAR_4))
   return -VAR_0;
 }

 return 0;
}
