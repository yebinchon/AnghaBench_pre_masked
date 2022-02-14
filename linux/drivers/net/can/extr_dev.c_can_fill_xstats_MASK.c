
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct can_priv {int can_stats; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct can_priv* FUNC_0 (struct net_device const*) ;
 scalar_t__ FUNC_1 (struct sk_buff*,int ,int,int *) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_2, const struct net_device *VAR_3)
{
 struct can_priv *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_2, VAR_1,
      sizeof(VAR_4->can_stats), &VAR_4->can_stats))
  goto nla_put_failure;
 return 0;

nla_put_failure:
 return -VAR_0;
}
