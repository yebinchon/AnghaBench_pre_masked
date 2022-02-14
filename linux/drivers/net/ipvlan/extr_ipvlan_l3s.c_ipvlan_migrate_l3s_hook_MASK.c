
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ipvlan_netns {int ipvl_nf_hook_refcnt; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int FUNC_1 (struct net*) ;
 int FUNC_2 (struct net*) ;
 struct ipvlan_netns* FUNC_3 (struct net*,int ) ;

void FUNC_4(struct net *VAR_1, struct net *VAR_2)
{
 struct ipvlan_netns *VAR_3;

 FUNC_0();

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3->ipvl_nf_hook_refcnt)
  return;

 FUNC_1(VAR_2);
 FUNC_2(VAR_1);
}
