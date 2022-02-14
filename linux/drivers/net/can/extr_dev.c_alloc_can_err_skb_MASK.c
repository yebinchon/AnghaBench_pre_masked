
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct can_frame {int can_dlc; int can_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 scalar_t__ FUNC_1 (int) ;

struct sk_buff *FUNC_2(struct net_device *VAR_2, struct can_frame **VAR_3)
{
 struct sk_buff *VAR_4;

 VAR_4 = FUNC_0(VAR_2, VAR_3);
 if (FUNC_1(!VAR_4))
  return ((void*)0);

 (*VAR_3)->can_id = VAR_1;
 (*VAR_3)->can_dlc = VAR_0;

 return VAR_4;
}
