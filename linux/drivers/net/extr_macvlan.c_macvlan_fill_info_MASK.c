
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct nlattr {int dummy; } ;
struct net_device {int dummy; } ;
struct macvlan_dev {scalar_t__ mode; scalar_t__ macaddr_count; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct sk_buff*,struct macvlan_dev*,int) ;
 struct macvlan_dev* FUNC_1 (struct net_device const*) ;
 int FUNC_2 (struct sk_buff*,struct nlattr*) ;
 struct nlattr* FUNC_3 (struct sk_buff*,int ) ;
 scalar_t__ FUNC_4 (struct sk_buff*,int ,int ) ;
 scalar_t__ FUNC_5 (struct sk_buff*,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_6,
    const struct net_device *VAR_7)
{
 struct macvlan_dev *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;
 struct nlattr *VAR_10;

 if (FUNC_5(VAR_6, VAR_4, VAR_8->mode))
  goto nla_put_failure;
 if (FUNC_4(VAR_6, VAR_1, VAR_8->flags))
  goto nla_put_failure;
 if (FUNC_5(VAR_6, VAR_2, VAR_8->macaddr_count))
  goto nla_put_failure;
 if (VAR_8->macaddr_count > 0) {
  VAR_10 = FUNC_3(VAR_6, VAR_3);
  if (VAR_10 == ((void*)0))
   goto nla_put_failure;

  for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {
   if (FUNC_0(VAR_6, VAR_8, VAR_9))
    goto nla_put_failure;
  }
  FUNC_2(VAR_6, VAR_10);
 }
 return 0;

nla_put_failure:
 return -VAR_0;
}
