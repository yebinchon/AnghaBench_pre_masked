
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
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct nlattr*) ;
 int FUNC_2 (struct nlattr*) ;
 int FUNC_3 (struct nlattr*) ;
 scalar_t__ FUNC_4 (struct nlattr*) ;

__attribute__((used)) static int FUNC_5(struct nlattr *VAR_10[], struct nlattr *VAR_11[],
       struct netlink_ext_ack *VAR_12)
{
 if (VAR_10[VAR_3]) {
  if (FUNC_4(VAR_10[VAR_3]) != VAR_2)
   return -VAR_1;
  if (!FUNC_0(FUNC_1(VAR_10[VAR_3])))
   return -VAR_0;
 }

 if (!VAR_11)
  return 0;

 if (VAR_11[VAR_4] &&
     FUNC_2(VAR_11[VAR_4]) & ~VAR_9)
  return -VAR_1;

 if (VAR_11[VAR_8]) {
  switch (FUNC_3(VAR_11[VAR_8])) {
  case 130:
  case 128:
  case 132:
  case 131:
  case 129:
   break;
  default:
   return -VAR_1;
  }
 }

 if (VAR_11[VAR_7]) {
  switch (FUNC_3(VAR_11[VAR_7])) {
  case 136:
  case 135:
  case 134:
  case 133:
   break;
  default:
   return -VAR_1;
  }
 }

 if (VAR_11[VAR_5]) {
  if (FUNC_4(VAR_11[VAR_5]) != VAR_2)
   return -VAR_1;

  if (!FUNC_0(FUNC_1(VAR_11[VAR_5])))
   return -VAR_0;
 }

 if (VAR_11[VAR_6])
  return -VAR_1;

 return 0;
}
