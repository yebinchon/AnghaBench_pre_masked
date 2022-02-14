
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net {int dummy; } ;
struct ipvlan_netns {int ipvl_nf_hook_refcnt; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 struct ipvlan_netns* FUNC_1 (struct net*,int ) ;
 int FUNC_2 (struct net*,int ,int ) ;

__attribute__((used)) static int FUNC_3(struct net *VAR_2)
{
 struct ipvlan_netns *VAR_3 = FUNC_1(VAR_2, VAR_1);
 int VAR_4 = 0;

 if (!VAR_3->ipvl_nf_hook_refcnt) {
  VAR_4 = FUNC_2(VAR_2, VAR_0,
         FUNC_0(VAR_0));
  if (!VAR_4)
   VAR_3->ipvl_nf_hook_refcnt = 1;
 } else {
  VAR_3->ipvl_nf_hook_refcnt++;
 }

 return VAR_4;
}
