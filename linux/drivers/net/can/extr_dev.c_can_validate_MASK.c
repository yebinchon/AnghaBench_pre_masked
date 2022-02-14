
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlattr {int dummy; } ;
struct netlink_ext_ack {int dummy; } ;
struct can_ctrlmode {int flags; int mask; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 struct can_ctrlmode* FUNC_0 (struct nlattr*) ;

__attribute__((used)) static int FUNC_1(struct nlattr *VAR_5[], struct nlattr *VAR_6[],
   struct netlink_ext_ack *VAR_7)
{
 bool VAR_8 = 0;







 if (!VAR_6)
  return 0;

 if (VAR_6[VAR_3]) {
  struct can_ctrlmode *VAR_9 = FUNC_0(VAR_6[VAR_3]);

  VAR_8 = VAR_9->flags & VAR_9->mask & VAR_0;
 }

 if (VAR_8) {
  if (!VAR_6[VAR_2] || !VAR_6[VAR_4])
   return -VAR_1;
 }

 if (VAR_6[VAR_4]) {
  if (!VAR_8 || !VAR_6[VAR_2])
   return -VAR_1;
 }

 return 0;
}
