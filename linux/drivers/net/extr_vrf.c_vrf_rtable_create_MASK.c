
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int output; } ;
struct rtable {TYPE_1__ dst; } ;
struct net_vrf {int rth; int tb_id; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int ,int ) ;
 struct net_vrf* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int ,struct rtable*) ;
 struct rtable* FUNC_4 (struct net_device*,int ,int ,int,int,int ) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_3)
{
 struct net_vrf *VAR_4 = FUNC_2(VAR_3);
 struct rtable *VAR_5;

 if (!FUNC_1(FUNC_0(VAR_3), VAR_4->tb_id))
  return -VAR_0;


 VAR_5 = FUNC_4(VAR_3, 0, VAR_1, 1, 1, 0);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->dst.output = VAR_2;

 FUNC_3(VAR_4->rth, VAR_5);

 return 0;
}
