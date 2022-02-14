
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ipvlan_netns {int ipvl_nf_hook_refcnt; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipvlan_netns* FUNC_2 (struct net*,int ) ;
 int FUNC_3 (struct net*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct net *VAR_2)
{
 struct ipvlan_netns *VAR_3 = FUNC_2(VAR_2, VAR_1);

 if (FUNC_1(!VAR_3->ipvl_nf_hook_refcnt))
  return;

 VAR_3->ipvl_nf_hook_refcnt--;
 if (!VAR_3->ipvl_nf_hook_refcnt)
  FUNC_3(VAR_2, VAR_0,
     FUNC_0(VAR_0));
}
