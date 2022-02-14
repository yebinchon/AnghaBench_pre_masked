
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct dst_entry {int dummy; } ;
struct rtable {struct dst_entry dst; } ;
struct net_vrf {int rth; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct dst_entry*) ;
 scalar_t__ FUNC_1 (struct rtable*) ;
 struct net_vrf* FUNC_2 (struct net_device*) ;
 struct rtable* FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*,struct dst_entry*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct net_device*,struct sk_buff*) ;

__attribute__((used)) static struct sk_buff *FUNC_10(struct net_device *VAR_0,
        struct sk_buff *VAR_1)
{
 struct net_vrf *VAR_2 = FUNC_2(VAR_0);
 struct dst_entry *VAR_3 = ((void*)0);
 struct rtable *VAR_4;

 FUNC_4();

 VAR_4 = FUNC_3(VAR_2->rth);
 if (FUNC_1(VAR_4)) {
  VAR_3 = &VAR_4->dst;
  FUNC_0(VAR_3);
 }

 FUNC_5();

 if (FUNC_8(!VAR_3)) {
  FUNC_9(VAR_0, VAR_1);
  return ((void*)0);
 }

 FUNC_6(VAR_1);
 FUNC_7(VAR_1, VAR_3);

 return VAR_1;
}
