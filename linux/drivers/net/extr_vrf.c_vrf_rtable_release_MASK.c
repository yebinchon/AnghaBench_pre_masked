
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dst_entry {int dev; } ;
struct rtable {struct dst_entry dst; } ;
struct net_vrf {int rth; } ;
struct net_device {int dummy; } ;
struct net {int loopback_dev; } ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ) ;
 struct net* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct dst_entry*) ;
 struct rtable* FUNC_5 (int ) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_0, struct net_vrf *VAR_1)
{
 struct rtable *VAR_2 = FUNC_5(VAR_1->rth);
 struct net *VAR_3 = FUNC_2(VAR_0);
 struct dst_entry *VAR_4;

 FUNC_0(VAR_1->rth, ((void*)0));
 FUNC_6();




 if (VAR_2) {
  VAR_4 = &VAR_2->dst;
  FUNC_3(VAR_4->dev);
  VAR_4->dev = VAR_3->loopback_dev;
  FUNC_1(VAR_4->dev);
  FUNC_4(VAR_4);
 }
}
