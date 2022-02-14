
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int tstamp; } ;
struct net_device {int dummy; } ;
struct can_frame {int dummy; } ;
typedef int ktime_t ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (struct net_device*,struct can_frame**) ;
 int FUNC_1 (struct can_frame*,struct can_frame const*,int) ;
 int FUNC_2 (struct sk_buff*) ;

int FUNC_3(struct net_device *VAR_1, const struct can_frame *VAR_2,
  ktime_t VAR_3)
{
 struct sk_buff *VAR_4;
 struct can_frame *VAR_5;

 VAR_4 = FUNC_0(VAR_1, &VAR_5);
 if (!VAR_4)
  return -VAR_0;
 FUNC_1(VAR_5, VAR_2, sizeof(*VAR_2));
 VAR_4->tstamp = VAR_3;
 return FUNC_2(VAR_4);
}
